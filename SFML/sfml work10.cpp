#include <iostream>
#include <vector>
//TextandFont
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(700, 700), "My Window", sf::Style::Close);
	window.setFramerateLimit(60.0f);
	sf::Text text;
	sf::Font font;
	font.loadFromFile("28 Days Later.ttf");
	text.setFont(font);
	text.setString("GAME PROGRAMMING");
	text.setPosition(250.0f, 0.0f);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(text);
		window.display();
	}
	return 0;
}