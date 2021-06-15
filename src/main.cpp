#include <conio.h>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "gameOflife/matrix.h"
// #include <SFML/Audio.hpp>
Matrix *matrix = new Matrix(5);

int main()
{
  std::cout << "please give the H/W of the field" << std::endl;
  std::string inputString ="";
  while (1)
  {
    char input=std::getchar();
    if(input=='\n')
    {
        break;
    }
    else if((uint8_t)input >=48 && (uint8_t)input <= 57)//check is char is a number between 0 and 9
    {
        inputString += input;
        input=' ';
    }
  }
  std::cout << "return val= " << inputString << std::endl;
  
  sf::RenderWindow window(sf::VideoMode(1200, 1200), "Game of Life");
  // sf::CircleShape shape(600.f);
  sf::RectangleShape square(sf::Vector2f(120, 120));
  square.setFillColor(sf::Color::White);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
      }
      else if (event.type == sf::Event::KeyPressed)
      {
        std::cout << event.text.unicode << std::endl;
      }
    }

    window.clear();
    window.draw(square);
    window.display();
  }

  return 0;
}