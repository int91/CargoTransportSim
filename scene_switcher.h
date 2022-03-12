#pragma once
#include <iostream>
#include "game.h"
class SceneSwitcher
{
public:
	SceneSwitcher(Game* g);
	Game* GetGame();
	void ChangeScene(BaseGameState* bgs);
private:
	Game* _g;
};