// SFML - Simple and Fast Multimedia Library
#include <SFML/Graphics.hpp>

#include "sfmlWindow.hpp"

SlmlWindow::SlmlWindow(const unsigned int width, const unsigned int height, const std::string &title) {
    this->WIDTH = width;
    this->HEIGHT = height;
    this->TITLE = title;

    initWindow(WIDTH, HEIGHT, TITLE);
}

bool SlmlWindow::shouldClose() {
    return !window->isOpen();
}

SlmlWindow::~SlmlWindow() {
    delete window;
}

void SlmlWindow::initWindow(const unsigned int width, const unsigned int height, const std::string &title) {
    window = new sf::RenderWindow(sf::VideoMode({width, height}), title);
}