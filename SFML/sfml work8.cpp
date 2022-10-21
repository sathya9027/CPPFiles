#include <iostream>
//TileMap
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::RenderWindow window(sf::VideoMode(700, 700), "My Window", sf::Style::Close);
	window.setFramerateLimit(60.0f);
	//Player
	sf::RectangleShape player(sf::Vector2f(70.0f, 70.0f));
	player.setFillColor(sf::Color(150, 100, 150));
	player.setPosition(0.0f, 0.0f);
	//HorizontalGrid
	sf::RectangleShape hLine1(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine2(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine3(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine4(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine5(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine6(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine7(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine8(sf::Vector2f(700.0f,1.0f));
	sf::RectangleShape hLine9(sf::Vector2f(700.0f,1.0f));
	//VerticalGrid
	sf::RectangleShape vLine1(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine2(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine3(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine4(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine5(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine6(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine7(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine8(sf::Vector2f(1.0f, 700.0f));
	sf::RectangleShape vLine9(sf::Vector2f(1.0f, 700.0f));
	hLine1.setPosition(0.0f, 70.0f);
	hLine2.setPosition(0.0f, 140.0f);
	hLine3.setPosition(0.0f, 210.0f);
	hLine4.setPosition(0.0f, 280.0f);
	hLine5.setPosition(0.0f, 350.0f);
	hLine6.setPosition(0.0f, 420.0f);
	hLine7.setPosition(0.0f, 490.0f);
	hLine8.setPosition(0.0f, 560.0f);
	hLine9.setPosition(0.0f, 630.0f);
	vLine1.setPosition(70.0f, 0.0f);
	vLine2.setPosition(140.0f, 0.0f);
	vLine3.setPosition(210.0f, 0.0f);
	vLine4.setPosition(280.0f, 0.0f);
	vLine5.setPosition(350.0f, 0.0f);
	vLine6.setPosition(420.0f, 0.0f);
	vLine7.setPosition(490.0f, 0.0f);
	vLine8.setPosition(560.0f, 0.0f);
	vLine9.setPosition(630.0f, 0.0f);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
				if (player.getPosition().x + player.getSize().x < window.getSize().x) {
					player.move(70.0f, 0.0f);
				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
				if (player.getPosition().x > 0) {
					player.move(-70.0f, 0.0f);
				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
				if (player.getPosition().y + player.getSize().y < window.getSize().y) {
					player.move(0.0f, 70.0f);
				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
				if (player.getPosition().y > 0) {
					player.move(0.0f, -70.0f);
				}
			}
		}
		window.clear(sf::Color::Black);
		window.draw(hLine1);
		window.draw(hLine2);
		window.draw(hLine3);
		window.draw(hLine4);
		window.draw(hLine5);
		window.draw(hLine6);
		window.draw(hLine7);
		window.draw(hLine8);
		window.draw(hLine9);
		window.draw(vLine1);
		window.draw(vLine2);
		window.draw(vLine3);
		window.draw(vLine4);
		window.draw(vLine5);
		window.draw(vLine6);
		window.draw(vLine7);
		window.draw(vLine8);
		window.draw(vLine9);
		window.draw(player);
		window.display();
	}
	return 0;
}