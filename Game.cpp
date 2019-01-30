//
// Created by sk0g on 30/01/19.
//

#include "Game.h"

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Window/Event.hpp>

Game::Game()
    : mWindow(sf::VideoMode(WIDTH, HEIGHT), APP_NAME)
    , mPlayer()
{
    mPlayer.setRadius(40.f);
    mPlayer.setPosition(100.f, 100.f);
    mPlayer.setFillColor(sf::Color::Magenta);
}

void Game::run() {
    while (mWindow.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event{};

    while (mWindow.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::Closed:
                mWindow.close();
                break;
            case sf::Event::KeyPressed:
                handlePlayerInput(event.key.code, true);
                break;
            case sf::Event::KeyReleased:
                handlePlayerInput(event.key.code, false);
                break;
        }
    }
}

void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed) {
    switch (key) {
        case sf::Keyboard::Up:
            mIsMovingUp = isPressed;
            break;
        case sf::Keyboard::Down:
            mIsMovingDown = isPressed;
            break;
        case sf::Keyboard::Left:
            mIsMovingLeft = isPressed;
            break;
        case sf::Keyboard::Right:
            mIsMovingRight = isPressed;
            break;
        default:
            break;
    }
}

void Game::update() {
    sf::Vector2f movement(0.f, 0.f);

    auto sensitivity = 0.1f;

    if (mIsMovingUp) {      movement.y -= sensitivity; }
    if (mIsMovingDown) {    movement.y += sensitivity; }
    if (mIsMovingLeft) {    movement.x -= sensitivity; }
    if (mIsMovingRight) {   movement.x += sensitivity; }

    mPlayer.move(movement);
}

void Game::render() {
    mWindow.clear();
    mWindow.draw(mPlayer);
    mWindow.display();
}
