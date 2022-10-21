#include<SFML/Graphics.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 700), "MY WINDOW", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	sf::CircleShape tri(50.0f,3);
	//tri.setPointCount(3);
	tri.setPosition(sf::Vector2f(200.0f, 190.0f));
	tri.setFillColor(sf::Color(200, 188, 0));
	tri.setOutlineThickness(5.0f);
	tri.setOutlineColor(sf::Color::White);
	tri.setRotation(180.0f);		//to change the position of triangle like 180degree or something
	sf::RectangleShape rec(sf::Vector2f(100.0f, 200.0f));
	rec.setFillColor(sf::Color(177, 244, 0, 200));
	rec.setPosition(sf::Vector2f(250.0f, 300.0f));
	rec.setOrigin(sf::Vector2f(150.0f, 100.0f));
	//irregular shape
	sf::ConvexShape shape ,shape2,shape3,shape4;
	shape.setPointCount(4);
	shape.setPosition(sf::Vector2f(200.0f, 200.0f));
	shape.setPoint(0, sf::Vector2f(0.0f,0.0f));
	shape.setPoint(1, sf::Vector2f(50.0f, 150.0f));
	shape.setPoint(2, sf::Vector2f(60.0f, 160.0f));
	shape.setPoint(3, sf::Vector2f(70.0f, 170.0f));
	shape2.setPointCount(4);
	shape2.setPosition(sf::Vector2f(100.0f, 200.0f));
	shape2.setPoint(0, sf::Vector2f(0.0f, 0.0f));
	shape2.setPoint(1, sf::Vector2f(50.0f, 150.0f));
	shape2.setPoint(2, sf::Vector2f(60.0f, 160.0f));
	shape2.setPoint(3, sf::Vector2f(70.0f, 170.0f));
	shape2.setRotation(35.0f);		//to change the position of triangle like 180degree or something
	shape3.setPointCount(4);
	shape3.setPosition(sf::Vector2f(200.0f, 400.0f));
	shape3.setPoint(0, sf::Vector2f(0.0f, 0.0f));
	shape3.setPoint(1, sf::Vector2f(50.0f, 150.0f));
	shape3.setPoint(2, sf::Vector2f(60.0f, 160.0f));
	shape3.setPoint(3, sf::Vector2f(70.0f, 170.0f));
	shape4.setPointCount(4);
	shape4.setPosition(sf::Vector2f(100.0f, 400.0f));
	shape4.setPoint(0, sf::Vector2f(0.0f, 0.0f));
	shape4.setPoint(1, sf::Vector2f(50.0f, 150.0f));
	shape4.setPoint(2, sf::Vector2f(60.0f, 160.0f));
	shape4.setPoint(3, sf::Vector2f(70.0f, 170.0f));
	shape4.setRotation(35.0f);		//to change the position of triangle like 180degree or something
	while (window.isOpen())
	{
		sf::Event event;	    //run the program as long as the window is open
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear(sf::Color::Blue);
		window.draw(tri);
		window.draw(shape);
		window.draw(shape2);
		window.draw(rec);
		window.draw(shape3);
		window.draw(shape4);
		window.display();
		}
	return 0;
}