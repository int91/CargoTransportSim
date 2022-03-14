#include "game.h"

Game::Game()
{
    _sceneId = 0;
    _running = false;
    
    //Vehicle truck = Vehicle(Fueltank("FairRunner 20 Liter", 10, 190), "Truck", 10, 18, Wheel("10X FairRunner", 100, 20.1, 10, 100));
    _jobMarket = JobMarket();
    _player = Player("INDEX", 0);
}

Game::~Game()
{

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
    case 3:
        AgencyJobsMarketScreen();
        break;
    case 4:
        DrivingScreen();
        break;
    case 7:
        DrivingRewardScreen();
            break;
    }
}

void Game::MainMenu()
{
    std::cout << "Cargo Transport Simulator\n1.) New Game\n2.) Load Game\n3.) Quit Game\n";
    int input = GetInput();
    if (input != NULL)
    {
        switch(input)
        {
        case 1:
            _sceneId = 1;
            break;
        case 2:
            
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
    std::cout << nme << " - " << bnme << " are these names correct?\n1.) Yes\n2.) No\n";
    int input = GetInput();
    if (input != NULL)
    {
        switch (input)
        {
        case 1:
            _player.SetData(nme, bnme);
            _sceneId = 2;
            break;
        }
    }
}

void Game::BusinessScreen()
{
    std::cout << _player.GetBusinessName() << "'s Screen\nWelcome Back " << _player.GetName() << "\n";
    std::cout << "1.) Browse Jobs\n2.) Browse Cargo Market\n10.) Main Menu\n";
    int input = GetInput();
    if (input != NULL)
    {
        switch (input)
        {
        case 1:
            _sceneId = 3;
            break;
        case 2:
            break;
        case 10:
            _sceneId = 0;
            break;
        }
    }
}

void Game::AgencyJobsMarketScreen()
{
    std::cout << "Available Jobs\n"; //Have this print out available jobs (Use my custom inv list system
    //Create a job market class where the player can pick out jobs and eventually post job listings.
    std::vector<Contract> cons = *_jobMarket.GetContracts();
    for (size_t i = 0; i < cons.size(); i++)
    {
        std::cout << i+1 << ".) " << cons[i].GetName() << "\n";
    }
    std::cout << "20.) Go Back\n";
    int input = GetInput();
    if (input != NULL)
    {
        input--;
        if (input >= _jobMarket.GetPage() && input <= (_jobMarket.GetPage() + 1))
        {
            size_t index = (size_t)input;
            Contract* c =  _jobMarket.GetContractAt(index);
            std::cout << "\nTo: " << c->GetStartLocation()->GetName() << "\nFrom: " << c->GetEndLocation()->GetName() << "\nTotal Distance: " << c->GetTotalDistance() << "\n--------------------------------------------\n";
            std::cout << "1.) Start Job\n";
            int in = GetInput();
            if (in == 1)
            {
                _player.StartContract(c);
                _sceneId = 4;
            }
        }
    }
}

void Game::DrivingScreen()
{
    //Add a check to see if the player has a contract and then show that contract info if needed
    //Show GPS location (X, Y) Coords
    Position* pPos = _player.GetPos();
    Contract c = _player.GetContract();
    Vehicle* vh = _player.GetCurVehicle();
    bool atDest = c.AtDestination(*pPos);
    int TotalDist = (c.GetEndLocation()->GetPos().x - pPos->x) + (c.GetEndLocation()->GetPos().y - pPos->y);

    std::cout << "Driving\n-----------------------------------------------\n";
    if (c.GetName() != "NoName") std::cout << "Contract: " << c.GetName() << "\n";
    std::cout << "Current Location: " << "\n";
    std::cout << "GPS Location:  X:" << pPos->x << "  Y: " << pPos->y << "\n";
    std::cout << "Miles To Destination: " << TotalDist << "\n"; //Implement this
    std::cout << "Fuel Left: " << vh->GetTank().GetFuelPercent() << "%" << "\n";

    std::cout << "1.) Drive\n2.) Check Laptop\n"; //Check laptop is for if you own one
    if (atDest)
    {
        std::cout << "3.) Try To Park Trailer\n4.) Have Company Park Trailer\n";
    }

    //Display driving options
    int input = GetInput();
    if (input != NULL) 
    {
        switch (input)
        {
        case 1:
            vh->MoveTowards(*c.GetEndLocation(), 50);
            pPos->Equ(vh->GetPos());
            break;
        case 3:
            if (atDest)
            {

            }
            break;
        case 4:
            if (atDest)
            {
                //Go To Driving Rewards Screen
                _sceneId = 7;
            }
            break;
        }
    }
}

void Game::DrivingRewardScreen()
{
    if (_player.GetContract().GetName() != "NoName")
    {
        _player.CompleteContract();
        std::cout << "Contract Complete!\n";
    }

    

    int input = GetInput();
    
}