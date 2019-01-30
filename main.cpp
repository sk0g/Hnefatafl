#include <SFML/Graphics.hpp>

#define WIDTH    1280
#define HEIGHT   720
#define APP_NAME "Hnefatafl"

int main() {
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), APP_NAME);

    sf::CircleShape shape;
    shape.setRadius(40.0);
    shape.setPosition(200, 400);
    shape.setFillColor(sf::Color::Yellow);

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}
