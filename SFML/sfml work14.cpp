#include <iostream>
#include <vector>
//TextureandShape
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::Texture texture;
	sf::CircleShape cir(50.0f);
	texture.loadFromFile("Image\\Carp.jpg");
	cir.setTexture(&texture);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(cir);
		window.display();
	}
	return 0;
}