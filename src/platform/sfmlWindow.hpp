#pragma once

//sfml
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


class SfmlWindow {
private:
    unsigned int WIDTH;
    unsigned int HEIGHT;
    std::string TITLE;
    bool isFullscreen;

    sf::RenderWindow *window;
    sf::Event event;


    void initWindow(const unsigned int width, const unsigned int height, const std::string &title);
    void resize();

    void eventSwitch();
   
public:
    void pollEvent();
    bool shouldClose();

    void draw(sf::Sprite &sprite);
    void render();
    void display();

    SfmlWindow(const unsigned int width, const unsigned int height, const std::string &title);
    ~SfmlWindow();
};


