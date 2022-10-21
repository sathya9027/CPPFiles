#include<SFML/Graphics.hpp>
//Border and Circle Collision
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "MY WINDOW", sf::Style::Default);
	window.setFramerateLimit(60.0f);
	srand((unsigned)time(NULL));
	float widthWindow = window.getSize().x;
	float heightWindow = window.getSize().y;
	float x1 = widthWindow / 4.0f;
	float y1 = heightWindow / 2.0f;
	float x2 = widthWindow / 2.0f;
	float y2 = heightWindow / 4.0f;
	float dx1 = (rand() % 4) + 1;
	float dy1 = (rand() % 4) + 1;
	float dx2 = (rand() % 4) + 1;
	float dy2 = (rand() % 4) + 1;
	float rad1 = 50.0f;
	float rad2 = 25.0f;
	sf::Font font;
	sf::Text text;
	font.loadFromFile("28 Days Later.ttf");
	text.setFont(font);
	text.setString("No Collision");
	text.setPosition(300.0f, 30.0f);
	sf::CircleShape cir1;
	cir1.setRadius(rad1);
	cir1.setOrigin(rad1, rad1);
	cir1.setFillColor(sf::Color::Yellow);
	sf::CircleShape cir2;
	cir2.setRadius(rad2);
	cir2.setOrigin(rad2, rad2);
	cir2.setFillColor(sf::Color::Blue);

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
		//border collision
		x1 += dx1;
		y1 += dy1;
		if ((x1 + rad1 > widthWindow) || (x1 - rad1 < 0)) {
			dx1 =- dx1;
		}
		if ((y1 + rad1 > heightWindow) || (y1 - rad1 < 0)) {
			dy1 =- dy1;
		}
		x2 += dx2;
		y2 += dy2;
		if ((x2 + rad2 > widthWindow) || (x2 - rad2 < 0)) {
			dx2 = -dx2;
		}
		if ((y2 + rad2 > heightWindow) || (y2 - rad2 < 0)) {
			dy2 =- dy2;
		}
		//Circle-Circle Collision
		float diffx = x2 - x1;
		float diffy = y2 - y1;
		float distance = sqrt((diffx * diffx) + (diffy * diffy));
		if (distance < (rad1 + rad2)) {
			dx1 = 0.0f;
			dy1 = 0.0f;
			dx2 = 0.0f;
			dy2 = 0.0f;
			text.setString("Collision Found");
		}
		window.clear(sf::Color::Black);

		cir1.setPosition(x1, y1);
		cir2.setPosition(x2, y2);
		window.draw(cir1);
		window.draw(cir2);
		window.draw(text);
		window.display();
	}
	return 0;
}