#include <iostream>
#include <vector>
//TextandFont
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "My Window", sf::Style::Close);
	window.setFramerateLimit(60.0f);
	sf::Text text;
	sf::Font font;
	font.loadFromFile("28 Days Later.ttf");
	text.setFont(font);
	text.setCharacterSize(50);
	text.setString("GAME PROGRAMMING");
	text.setPosition(0.0f, 0.0f);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		text.move(1.0f, 0.0f);
		if (text.getPosition().x > window.getSize().x) {
			text.setPosition(-400.0f, 0.0f);
		}
		window.clear(sf::Color::Black);
		window.display();
	}
	return 0;
}