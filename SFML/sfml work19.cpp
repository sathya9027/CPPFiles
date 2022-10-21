#include <iostream>
#include <vector>
//Triangles()
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::VertexArray triangle(sf::Triangles, 4);
	triangle[0].position = sf::Vector2f(400.0f, 200.0f);
	triangle[1].position = sf::Vector2f(450.0f, 100.0f);
	triangle[2].position = sf::Vector2f(500.0f, 200.0f);
	triangle[0].color = sf::Color::Green;
	triangle[1].color = sf::Color::Blue;
	triangle[2].color = sf::Color::Red;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(triangle);
		window.display();
	}
	return 0;
}