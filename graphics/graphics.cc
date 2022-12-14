#include <SFML/Graphics.hpp>
#include "graphics.hh"

sf::RenderWindow w;
sf::Event event;
std::chrono::time_point<std::chrono::high_resolution_clock> g_timer = std::chrono::high_resolution_clock::now();


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

//DLC
uint32_t graph_get_time()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - g_timer).count();
}

void graph_put_pixel_colour(int x, int y, int32_t r, int32_t g, int32_t b, int32_t t)
{
    sf::Color color(r,g,b,t);
    sf::Vertex vertex({(float) x, (float) y}, color);
    w.draw(&vertex, 1, sf::Points);
}
