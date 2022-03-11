#include "mainmenustate.h"

MainMenuState::MainMenuState()
{
	this->OnSwitch();
}

void MainMenuState::Update()
{
	std::cout << "Cargo Transport Simulator\n----------------------------------------\n";
	std::cout << "1.) New Game\n2.) Load Game\n3.) Quit\n";

	int input = GetInput();
	if (input != NULL)
		switch (input)
		{
		case 1:
			std::cout << "";
			break;
		}
}

void MainMenuState::OnSwitch()
{
	std::cout << "Balls";
}

void MainMenuState::Dispose()
{
	BaseGameState::Dispose();
}