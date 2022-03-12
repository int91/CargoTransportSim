#include <iostream>
#include "game.h"

void DebugClose()
{
    std::cout << "Game Closed, Press Enter To Exit";
    std::cin.clear();
    std::cin.ignore();
    std::cin.get();
}

int main()
{
    Game* g = new Game();
    g->Start();
    g->Update();
    g->Dispose();
    delete g;
    if (DEBUGMODE) DebugClose();
    return 0;
}
