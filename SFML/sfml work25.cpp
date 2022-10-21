//button press using mouse event
#include <iostream>
#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "");

    sf::RectangleShape button;
    button.setSize(sf::Vector2f(200.0f, 80.0f));
    button.setPosition(300.0f, 260.0f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    if (button.getGlobalBounds().contains(
					window.mapPixelToCoords(
					sf::Vector2i(
					event.mouseButton.x, event.mouseButton.y)))) {
                        std::cout << "Button pressed" << std::endl;
                    }
                }
            }
        }

        window.clear(sf::Color::Black);
        window.draw(button);
        window.display();
    }

    return EXIT_SUCCESS;
}