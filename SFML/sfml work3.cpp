#include <SFML/Graphics.hpp>
//creating a circle and adding color
int main() {
	sf::RenderWindow window;		//sf is sfml namespace
	window.create(sf::VideoMode(800, 600), "My Window", sf::Style::Default);		//Style is sfml of style namespace 
	sf::CircleShape circle;
	circle.setRadius(50.0f);
	circle.setFillColor(sf::Color(0, 255, 0));		//shape color(green)
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::White);		//background color
		window.draw(circle);
		window.display();
	}
	return 0;
}