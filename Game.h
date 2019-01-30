//
// Created by sk0g on 30/01/19.
//

#ifndef HNEFATAFL_GAME_H
#define HNEFATAFL_GAME_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>

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

private:
    sf::RenderWindow mWindow;
    sf::CircleShape  mPlayer;
};


#endif //HNEFATAFL_GAME_H
