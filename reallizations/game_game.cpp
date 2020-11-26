#include<iostream>
#include"../game/game.h"

Game::Game()
{
    std::cout << "constructor\n";
}

void Game::init_all()
{
    std::cout << "initializing\n";
}

void Game::start()
{
    std::cout << "Start!\n";
}
