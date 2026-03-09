#include <SFML/Graphics.hpp>

class SlmlWindow {
private:
    unsigned int WIDTH;
    unsigned int HEIGHT;
    std::string TITLE;

    sf::RenderWindow* window;

    void initWindow(const unsigned int width, const unsigned int height, const std::string &title);
   
public:
    bool shouldClose();

    SlmlWindow(const unsigned int width, const unsigned int height, const std::string &title);
    ~SlmlWindow();
};


