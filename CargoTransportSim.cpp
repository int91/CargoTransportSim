#include <iostream>
#include "game.h"

int main()
{
    
    Game g = Game();
    MainMenuState* bgs = new MainMenuState();
    g.SetState(bgs);
    g.Start();
    g.Update();
    g.Dispose();
    std::cout << "Game Closed, Press Enter To Exit";
    std::cin.clear();
    std::cin.ignore();
    std::cin.get();
    return 0;
}

