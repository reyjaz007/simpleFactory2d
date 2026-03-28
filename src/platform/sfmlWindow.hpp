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
    sf::Image icon;

    //window initialization
    void initWindow(const unsigned int width, const unsigned int height, const std::string &title);
    void setImageIcon(); //sets the window icon, called by initWindow()
    
    //private window functions (switch, resize)
    void eventSwitch(); //handles events, called by pollEvent()
    void resize(); //resizes the window when the user resizes it, called by eventSwitch()
   
public:
    //window functions (events)
    void pollEvent(); //the main event loop, calls eventSwitch() to handle events
    bool shouldClose(); //returns true if the window should close

    //window functions (rendering)
    void draw(sf::Sprite sprite); //draws a sprite to the window
    void clear();  //clears the window with a white background
    void display(); //displays the rendered frame to the window

    SfmlWindow(const unsigned int width, const unsigned int height, const std::string &title);
    ~SfmlWindow();
};


