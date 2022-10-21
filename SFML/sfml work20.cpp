#include <iostream>
#include <vector>
//Quads
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::VertexArray quad(sf::Quads, 4);
	quad[0].position = sf::Vector2f(200.0f, 400.0f);
	quad[1].position = sf::Vector2f(250.0f, 300.0f);
	quad[2].position = sf::Vector2f(350.0f, 300.0f);
	quad[3].position = sf::Vector2f(300.0f, 400.0f);
	quad[0].color = sf::Color::Green;
	quad[1].color = sf::Color::Blue;
	quad[2].color = sf::Color::Red;
	quad[3].color = sf::Color::Magenta;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(quad);
		window.display();
	}
	return 0;
}