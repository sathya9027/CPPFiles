////drawing window
//#include<SFML/Graphics.hpp>
//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(700, 700), "MY WINDOW", sf::Style::Default);
//	window.setFramerateLimit(70.0f);
//	sf::CircleShape cir(50.0f);			//<-this
//	//sf::CircleShape cir;				//or <-this
//	//cir.setRadius(50.0f);
//	cir.setFillColor(sf::Color(188, 177, 0, 200));
//	cir.setPosition(sf::Vector2f(150.0f, 150.0f));
//	cir.setOrigin(sf::Vector2f(100.0f, 100.0f));
//	//sf::RectangleShape rec;
//	//rec.setSize(sf::Vector2f(100.0f, 80.0f));
//	sf::RectangleShape rec(sf::Vector2f(120.0f, 100.0f));
//	rec.setFillColor(sf::Color(177, 244, 0, 200));
//	rec.setPosition(sf::Vector2f(200.0f, 200.0f));
//	rec.setOrigin(sf::Vector2f(150.0f, 100.0f));
//	while (window.isOpen())
//	{
//		sf::Event event;	    //run the program as long as the window is open
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//			{
//				window.close();
//			}
//		}
//		cir.move(0.0f, 0.0f);
//		cir.rotate(2.0f);
//		rec.rotate(2.0f);
//		window.clear(sf::Color::Blue);
//		window.draw(cir);
//		window.draw(rec);
//		window.display();
//		}
//	return 0;
//}