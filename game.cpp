#include "game.h"

void DrawWheels(Vehicle& ve) //This will go in whatever class I decide to put it in
{
    std::vector<Wheel>* a = ve.GetWheels();
    size_t page = 1;
    size_t max = 0;
    if ((page + 1) * 10 < a->size()) max = (page + 1) * 10;
    else max = a->size();
    for (size_t i = page * 10; i < max; i++)
    {
        std::cout << (i + 1) << ".) " << "Wheel Name: " << a->at(i).GetName() << "\n";
        a->at(i).CalculateEfficiency();
    }
}

Game::Game()
{
    this->_running = false;
    this->_player = Player("INDEX", 0);
}

Game::~Game()
{

}

void Game::Start()
{
    this->_running = true;
}

void Game::Update()
{
    //Add GameLoop
    while (this->_running)
    {
        system("cls");
        this->_gs->Update();
        int input;
        //Vehicle v = Vehicle(Fueltank("FairRunner 20 Liter", 10, 190), "Truck", 10, 18, Wheel("10X FairRunner", 100, 20.1, 10, 100));;
    }
    system("cls");
}

void Game::Dispose()
{

}

void Game::SetState(BaseGameState* bgs) 
{
    this->_gs = bgs;
}