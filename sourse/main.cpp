#include <iostream>
#include <ctime>
#include <string>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main(int argc, char *argv[]) {

    sf::RenderWindow window(sf::VideoMode(1080, 720), "smth");
    window.setFramerateLimit(60);
    sf::Event event;

    sf::Shader shader;
    if(!sf::Shader::isAvailable()) {
        std::cout << "Hey! Shader not avaible!" << std::endl;
        exit(1);
    };
    if(!shader.loadFromFile("../resourses/shaders/shader.frag", sf::Shader::Fragment)) {
        std::cout << "Hey! Some problem with shader's loading!" << std::endl;
        exit(1);
    };

    sf::RectangleShape rect(sf::Vector2f(1080, 720));
    
    sf::RenderStates rs(&shader);


    while(window.isOpen()) {
        while(window.pollEvent(event)) {
            switch(event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                
                default:
                    break;
            }
        }

        window.clear(sf::Color(0, 0, 0));
        window.draw(rect, rs);
        window.display();
    }

    return 0;
}