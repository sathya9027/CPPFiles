#include <iostream>
#include <vector>
//LineStrip()
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::VertexArray lineStrip(sf::LinesStrip, 5);
	lineStrip[0].position = sf::Vector2f(200.0f, 100.0f);
	lineStrip[1].position = sf::Vector2f(300.0f, 100.0f);
	lineStrip[2].position = sf::Vector2f(300.0f, 200.0f);
	lineStrip[3].position = sf::Vector2f(200.0f, 200.0f);
	lineStrip[4].position = sf::Vector2f(200.0f, 100.0f);
	lineStrip[0].color = sf::Color::Green;
	lineStrip[1].color = sf::Color::Blue;
	lineStrip[2].color = sf::Color::Red;
	lineStrip[3].color = sf::Color::Yellow;
	lineStrip[4].color = sf::Color::Magenta;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(lineStrip);
		window.display();
	}
	return 0;
}