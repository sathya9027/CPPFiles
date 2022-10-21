#include <SFML/Window.hpp>
//creating a default window
int main() {
	sf::Window Window;		//sf is sfml namespace
	Window.create(sf::VideoMode(800, 600), "My Window", sf::Style::Default);		//Style is sfml of style namespace 
	while (Window.isOpen())
	{
		sf::Event event;
		while (Window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				Window.close();
			}
		}
	}
	return 0;
}