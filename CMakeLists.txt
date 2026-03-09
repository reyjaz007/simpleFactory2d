cmake_minimum_required(VERSION 3.10.0)
project(simpleFactory2d VERSION 0.1.0 LANGUAGES CXX)

# Find SFML

add_executable(simpleFactory2d
    src/main/main.cpp
    src/game/simpleFactory.cpp
    src/platform/sfmlWindow.cpp
)

set(SFML_DIR "${CMAKE_SOURCE_DIR}/external/SFML/lib/cmake/SFML")

find_package(SFML 3.0.2 COMPONENTS Graphics Window System REQUIRED)

target_link_libraries(simpleFactory2d
    sfml-graphics
    sfml-window
    sfml-system
)