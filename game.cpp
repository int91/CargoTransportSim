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
    delete a;
}

Game::Game()
{
    _sceneId = 0;
    _running = false;
    
    Vehicle* truck = new Vehicle(Fueltank("FairRunner 20 Liter", 10, 190), "Truck", 10, 18, Wheel("10X FairRunner", 100, 20.1, 10, 100));
    _player = new Player("INDEX", 0, truck);
}

Game::~Game()
{
    delete _player;
}

void Game::Start()
{
    _running = true;
}

void Game::Update()
{
    while (_running)
    {
        ClearScr();
        UpdateScreen();
    }
    ClearScr();
}

void Game::Dispose()
{
}

void Game::UpdateScreen()
{
    switch (_sceneId)
    {
    case 0:
        MainMenu();
        break;
    case 1:
        SetupNewGame();
        break;
    case 2:
        BusinessScreen();
        break;
    }
}

void Game::MainMenu()
{
    std::cout << "Cargo Transport Simulator\n1.) New Game\n2.) Load Game\n3.) Quit Game\n->";
    int input = GetInput();
    if (input != NULL)
    {
        switch(input)
        {
        case 1:
            _sceneId = 1;
            break;
        case 2:
            //GO TO LOAD GAME
            break;
        case 3:
            _running = false;
            break;
        }
    }
}

void Game::SetupNewGame()
{
    std::cout << "What is your name?\n->";
    std::string nme;
    std::cin >> nme;
    std::cout << "What is your business name?\n->";
    std::string bnme;
    std::cin >> bnme;
    std::cout << nme << " - " << bnme << " are these names correct?\n1.) Yes\n2.) No\n->";
    int input = GetInput();
    if (input != NULL)
    {
        switch (input)
        {
        case 1:
            _player->SetData(nme, bnme);
            _sceneId = 2;
            break;
        }
    }
}

void Game::BusinessScreen()
{
    std::cout << _player->GetBusinessName() << "'s Screen\nWelcome Back " << _player->GetName() << "\n";
    std::cout << "1.) Browse Jobs\n2.) Browse Cargo Market\n";
    std::cout << "->";
    int input = GetInput();
    if (input != NULL)
    {
        switch (input)
        {
        case 1:
            
            break;
        }
    }
}