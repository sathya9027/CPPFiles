//drawing window
#include<SFML/Graphics.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 700), "MY WINDOW", sf::Style::Default);
	sf::Vertex line[] = {
		sf::Vertex(sf::Vector2f(100.0f,100.0f)),
		sf::Vertex(sf::Vector2f(300.0f,100.0f)),
	};
	line[0].color = sf::Color::Black;
	line[1].color = sf::Color::White;
	while (window.isOpen())
	{
		sf::Event event;		//run the program as long as the window is openq
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear(sf::Color::Blue);
		window.draw(line, 2, sf::Lines);
		window.display();
	}
	return 0;
}