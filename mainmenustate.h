#pragma once
#include "basegamestate.h"
#include "utils.h"
class MainMenuState : public BaseGameState
{
public:
	MainMenuState();
	void OnSwitch();
	void Update();
	void Dispose();
};