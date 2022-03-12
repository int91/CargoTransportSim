#include "scene_switcher.h"

SceneSwitcher::SceneSwitcher(Game* g)
{
	this->_g = g;
}

Game* SceneSwitcher::GetGame()
{
	return this->_g;
}

void SceneSwitcher::ChangeScene(BaseGameState* bgs)
{
	this->_g->SetState(bgs);
}