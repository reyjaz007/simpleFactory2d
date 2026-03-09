#include <iostream>
#include "../platform/sfmlWindow.hpp"

class Game {
public:
    const unsigned int WIDTH = 1280;
    const unsigned int HEIGHT = 720;
    const std::string TITLE = "Simple Factory 2D";

    void run();
private:
    SfmlWindow window {WIDTH, HEIGHT, TITLE};
    
    void initialize();

    void gameloop();
    
    void update();
    void render();
};