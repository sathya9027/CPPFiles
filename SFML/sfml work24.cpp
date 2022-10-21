#include<SFML/Graphics.hpp>
//Border Collision for Rectangle
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
	float wid1 = 100.0f;
	float hig1 = 50.0f;
	float wid2 = 75.0f;
	float hig2 = 125.0f;

	sf::Font font;
	sf::Text text;
	font.loadFromFile("28 Days Later.ttf");
	text.setFont(font);
	text.setString("No Collision");
	text.setPosition(300.0f, 30.0f);

	sf::RectangleShape rect1;
	rect1.setSize(sf::Vector2f(wid1, hig1));
	rect1.setFillColor(sf::Color::Yellow);

	sf::RectangleShape rect2;
	rect2.setSize(sf::Vector2f(wid2, hig2));
	rect2.setFillColor(sf::Color::Blue);

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

		if ((x1 + (wid1) > widthWindow) || (x1 < 0)) {
			dx1 =- dx1;
		}
		if ((y1 + (hig1) > heightWindow) || (y1 < 0)) {
			dy1 =- dy1;
		}

		x2 += dx2;
		y2 += dy2;

		if ((x2 + (wid2) > widthWindow) || (x2 < 0)) {
			dx2 =- dx2;
		}
		if ((y2 + (hig2) > heightWindow) || (y2 < 0)) {
			dy2 =- dy2;
		}

		//Rect-Rect Collision
		/*float diffx = x2 - x1;
		float diffy = y2 - y1;
		float distance = sqrt((diffx * diffx) + (diffy * diffy));
		if (distance < (wid1 + hig1)) {
			dx1 = 0.0f;
			dy1 = 0.0f;
			dx2 = 0.0f;
			dy2 = 0.0f;
			text.setString("Collision Found");
		}*/
		window.clear(sf::Color::Black);

		rect1.setPosition(x1, y1);
		rect2.setPosition(x2, y2);

		window.draw(rect1);
		window.draw(rect2);
		window.draw(text);

		window.display();
	}
	return 0;
}