//
// Created by sk0g on 30/01/19.
//

#ifndef HNEFATAFL_GAME_H
#define HNEFATAFL_GAME_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Window.hpp>

#define WIDTH    1280
#define HEIGHT   720
#define APP_NAME "Hnefatafl"

class Game {
public:
    Game();
    void            run();

private:
    void            processEvents();
    void            update();
    void            render();
    void            handlePlayerInput(sf::Keyboard::Key, bool);

private:
    sf::RenderWindow    mWindow;
    sf::CircleShape     mPlayer;
    bool                mIsMovingUp;
    bool                mIsMovingDown;
    bool                mIsMovingLeft;
    bool                mIsMovingRight;
};


#endif //HNEFATAFL_GAME_H
