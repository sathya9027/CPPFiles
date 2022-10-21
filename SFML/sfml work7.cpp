//drawing window
#include<SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "MY WINDOW", sf::Style::Default);
    window.setFramerateLimit(60.0f);
    while (window.isOpen())
    {
        sf::Event event;    //run the program as long as the window is openq
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape){
              window.close();
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Right){
                window.close();
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                window.close();
            }
        }
        window.clear(sf::Color::Red);
        window.display();
    }
    return 0;
}