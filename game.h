#pragma once
#include <iostream>
#include "utils.h"
#include "city.h"
#include "person.h"
#include "player.h"
#include "vehicle.h"
#include "mainmenustate.h"
class Game
{
public:
	Game();
	~Game();
	void Start();
	void Update();
	void Dispose();
	void SetState(BaseGameState* bgs);
private:
	BaseGameState* _gs;
	bool _running;
	Player _player;

};