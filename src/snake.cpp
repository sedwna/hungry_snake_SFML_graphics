#include "../include/snake.hpp"

void Snake::set_snakeSpeed()
{
    snakeSpeed += 1;
}
int Snake::get_snakeSpeed()
{
    return snakeSpeed;
}
void Snake::reset_snakeSpeed()
{
    snakeSpeed = 10;
}
