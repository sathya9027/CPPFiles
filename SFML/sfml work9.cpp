#include <iostream>
#include <vector>
//TileMap
#include <SFML/Graphics.hpp>
using namespace std;
int main() {
	sf::VideoMode videoMode = sf::VideoMode(700, 700);
	sf::RenderWindow window(videoMode, "My Window", sf::Style::Close);
	window.setFramerateLimit(60.0f);
	size_t numberOfRows = 10;
	size_t numberOfColumns = 10;
	sf::Vector2f grid = sf::Vector2f(
		videoMode.width / numberOfRows
		, videoMode.height / numberOfColumns
	);
	//Player
	sf::RectangleShape player(sf::Vector2f(70.0f, 70.0f));
	player.setFillColor(sf::Color(150, 100, 150));
	player.setPosition(0.0f, 0.0f);
	std::vector<sf::RectangleShape> gridSize;
	for (int i = 0; i < numberOfRows; i++)
	{
		for (int j = 0; j < numberOfColumns; j++)
		{
			sf::RectangleShape cell(grid);
			cell.setFillColor(sf::Color::Transparent);
			cell.setOutlineThickness(1.0f);
			cell.setPosition(grid.x * i, grid.y * j);
			gridSize.push_back(cell);
		}
	}
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
		window.draw(player);
		for (auto line : gridSize)
		{
			window.draw(line);
		}
		window.display();
	}
	return 0;
}