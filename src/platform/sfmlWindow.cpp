// SFML - Simple and Fast Multimedia Library
#include <SFML/Graphics.hpp>

//std
#include <optional>

#include "sfmlWindow.hpp"

SfmlWindow::SfmlWindow(const unsigned int width, const unsigned int height, const std::string &title) {
    this->WIDTH = width;
    this->HEIGHT = height;
    this->TITLE = title;

    initWindow(WIDTH, HEIGHT, TITLE);
}

SfmlWindow::~SfmlWindow() {
    delete window;
}

void SfmlWindow::initWindow(const unsigned int width, const unsigned int height, const std::string &title) {
    window = new sf::RenderWindow(sf::VideoMode({width, height}), title);
    if (window == NULL) {
        throw std::runtime_error("Failed to create the window.");
    }
}

void SfmlWindow::render() {
    window->clear(sf::Color::Black);
}

void SfmlWindow::display(){
    window->display();
}

void SfmlWindow::rezised() {
    sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
    window->setView(sf::View(visibleArea));
}

bool SfmlWindow::shouldClose() {
    return !window->isOpen();
}

void SfmlWindow::pollEvent() {
    while(window->pollEvent(event)) {
        eventSwitch();
    }
}

void SfmlWindow::eventSwitch(){
    switch(event.type) {
        case sf::Event::Closed:
            window->close();
            break;  

        case sf::Event::Resized:
            rezised();
            break;

        case sf::Event::LostFocus:
            break;

        case sf::Event::GainedFocus:
            break;
    }
}

