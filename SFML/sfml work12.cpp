#include <iostream>
#include <vector>
//Texture
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::Texture texture;
	sf::Sprite sprite;
	texture.loadFromFile("Settings_button.png");
	texture.setSmooth(true);
	texture.setRepeated(true);
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(0, 0, 65*12, 65*9));
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