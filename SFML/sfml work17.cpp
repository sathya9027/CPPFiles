#include <iostream>
#include <vector>
//Line()
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::VertexArray line(sf::Lines, 2);
	line[0].position = sf::Vector2f(200.0f, 50.0f);
	line[1].position = sf::Vector2f(300.0f, 150.0f);
	line[0].color = sf::Color::Green;
	line[1].color = sf::Color::Blue;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(line);
		window.display();
	}
	return 0;
}