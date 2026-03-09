//sfml
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


class SfmlWindow {
private:
    unsigned int WIDTH;
    unsigned int HEIGHT;
    std::string TITLE;

    sf::RenderWindow *window;
    sf::Event event;

    void initWindow(const unsigned int width, const unsigned int height, const std::string &title);
    void rezised();

    void eventSwitch();
   
public:
    void pollEvent();
    bool shouldClose();

    void render();
    void display();

    SfmlWindow(const unsigned int width, const unsigned int height, const std::string &title);
    ~SfmlWindow();
};


