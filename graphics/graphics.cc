#include <SFML/Graphics.hpp>
#include "graphics.hh"

sf::RenderWindow w;
sf::Event event;

void graph_init(size_t horiz, size_t vertic)
{
    w.create(sf::VideoMode(horiz, vertic), "Game of Trigraphs");
    srand(time(NULL));
}


void graph_is_closed()
{
    while (w.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            w.close();
    }
}

void graph_put_pixel(int x, int y, int state)
{
    sf::Color color = state ? sf::Color::Cyan : sf::Color::Black;
    sf::Vertex vertex({(float) x, (float) y}, color);
    w.draw(&vertex, 1, sf::Points);
}

void graph_flush()
{
    w.display();
}

void graph_print(int val)
{
    std::cout << val << std::endl;
}

void graph_clear()
{
    w.clear(sf::Color::Black);
}

int graph_rand()
{
    return rand() % 2;
}
