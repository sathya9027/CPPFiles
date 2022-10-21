#include <iostream>
#include <vector>
//TriangleStrip()
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::VertexArray triangleStrip(sf::TrianglesStrip, 10);
	triangleStrip[0].position = sf::Vector2f(300.0f, 300.0f);
	triangleStrip[1].position = sf::Vector2f(300.0f, 400.0f);
	triangleStrip[2].position = sf::Vector2f(400.0f, 300.0f);
	triangleStrip[3].position = sf::Vector2f(400.0f, 400.0f);
	triangleStrip[4].position = sf::Vector2f(500.0f, 350.0f);
	triangleStrip[5].position = sf::Vector2f(500.0f, 450.0f);
	triangleStrip[6].position = sf::Vector2f(600.0f, 350.0f);
	triangleStrip[7].position = sf::Vector2f(600.0f, 450.0f);
	triangleStrip[8].position = sf::Vector2f(700.0f, 400.0f);
	triangleStrip[9].position = sf::Vector2f(700.0f, 500.0f);
	triangleStrip[0].color = sf::Color::Green;
	triangleStrip[1].color = sf::Color::Blue;
	triangleStrip[2].color = sf::Color::Red;
	triangleStrip[3].color = sf::Color::Magenta;
	triangleStrip[4].color = sf::Color::Green;
	triangleStrip[5].color = sf::Color::Blue;
	triangleStrip[6].color = sf::Color::Blue;
	triangleStrip[7].color = sf::Color::Red;
	triangleStrip[8].color = sf::Color::Red;
	triangleStrip[9].color = sf::Color::Magenta;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(triangleStrip);
		window.display();
	}
	return 0;
}