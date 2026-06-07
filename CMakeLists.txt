cmake_minimum_required(VERSION 3.11)
project(simpleFactory2d VERSION 0.1.0 LANGUAGES CXX)

include(FetchContent)

if(WIN32)
    set(SFML_DIR "${CMAKE_SOURCE_DIR}/external/SFML/SFML-3.0.2/lib/cmake/SFML")
    find_package(SFML 3.0.2 COMPONENTS Graphics Window System REQUIRED)
else()
    find_package(SFML 3 COMPONENTS Graphics Window System)
    if(NOT SFML_FOUND)
        message(STATUS "SFML not found on system. Downloading and building SFML from source...")
        FetchContent_Declare(
            sfml
            GIT_REPOSITORY https://github.com/SFML/SFML.git
            GIT_TAG 3.0.2
        )
        set(SFML_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
        set(SFML_BUILD_TESTS OFF CACHE BOOL "" FORCE)
        set(SFML_BUILD_DOC OFF CACHE BOOL "" FORCE)
        FetchContent_MakeAvailable(sfml)
    endif()
endif()

add_executable(simpleFactory2d
    src/main/main.cpp
    src/game/simpleFactory.cpp
    src/platform/sfmlWindow.cpp
    src/entities/primitive/entity.cpp
    src/entities/player/player.cpp
    src/entities/handlers/entitiesHandler.cpp
    src/entities/primitive/tile.cpp
    src/logic/event.cpp
    src/logic/movement/movement.cpp
)

target_link_libraries(simpleFactory2d PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
)

file(COPY ${CMAKE_SOURCE_DIR}/assets DESTINATION ${CMAKE_BINARY_DIR})

if(WIN32)
    file(COPY
        ${CMAKE_SOURCE_DIR}/external/SFML/bin/sfml-graphics-3.dll
        ${CMAKE_SOURCE_DIR}/external/SFML/bin/sfml-window-3.dll
        ${CMAKE_SOURCE_DIR}/external/SFML/bin/sfml-system-3.dll
        ${CMAKE_SOURCE_DIR}/external/mingw64/bin/libgcc_s_seh-1.dll
        ${CMAKE_SOURCE_DIR}/external/mingw64/bin/libstdc++-6.dll
        ${CMAKE_SOURCE_DIR}/external/mingw64/bin/libwinpthread-1.dll
        DESTINATION ${CMAKE_BINARY_DIR}
    )
endif()
