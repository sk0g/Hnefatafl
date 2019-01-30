#include <SFML/Graphics.hpp>
#include <iostream>

#define WIDTH    1280
#define HEIGHT   720
#define APP_NAME "Hnefatafl"

int main() {
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), APP_NAME);

    sf::CircleShape shape;
    shape.setRadius(40.0);
    shape.setPosition(200, 400);
    shape.setFillColor(sf::Color::Yellow);

    sf::Text text;
    text.setFillColor(sf::Color::Yellow);
    text.setString(APP_NAME);
    text.setPosition(WIDTH/3, 10);

    sf::Font font;
    if (!font.loadFromFile("MedievalSharp-Bold.ttf"))
        std::cout << "Could not load font." << std::endl;
    text.setFont(font);
    text.setCharacterSize(40);

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.draw(text);
        window.display();
    }
}
