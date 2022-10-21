#include <iostream>
#include <vector>
//Image
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::Texture texture;
	sf::Image image;
	sf::Sprite sprite;
	image.loadFromFile("Image\\Settings_button.png");
	texture.update(image);
	texture.loadFromImage(image, sf::IntRect(0, 0, 65, 65));
	sprite.setTexture(texture);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(sprite);
		window.display();
	}
	return 0;
}