#include <SFML/Graphics.hpp>
//creating a circle
int main() {
	sf::RenderWindow window;		//sf is sfml namespace
	window.create(sf::VideoMode(800, 600), "My Window", sf::Style::Default);		//Style is sfml of style namespace 
	sf::CircleShape circle;
	circle.setRadius(50.0f);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.draw(circle);
		window.display();
	}
	return 0;
}