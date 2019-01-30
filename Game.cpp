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
        if (event.type == sf::Event::Closed) {
            mWindow.close();
        }
    }
}

void Game::update() {
}

void Game::render() {
    mWindow.clear();
    mWindow.draw(mPlayer);
    mWindow.display();
}