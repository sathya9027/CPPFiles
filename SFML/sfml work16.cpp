#include <iostream>
#include <vector>
//Points()
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::VertexArray points(sf::Points, 2);
	points[0].position = sf::Vector2f(100.0f, 50.0f);
	points[1].position = sf::Vector2f(150.0f, 50.0f);
	points[0].color = sf::Color::Green;
	points[1].color = sf::Color::Blue;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(points);
		window.display();
	}
	return 0;
}