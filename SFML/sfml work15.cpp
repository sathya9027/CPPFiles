#include <iostream>
#include <vector>
//Points
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	std::vector<sf::Vertex> vertex;
	vertex.push_back(sf::Vertex(sf::Vector2f(100.0f, 100.0f), sf::Color::Red, sf::Vector2f(100.0f, 100.0f)));
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(&vertex[0], vertex.size(), sf::Points);
		window.display();
	}
	return 0;
}