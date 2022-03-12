#pragma once
#include <iostream>
#include "utils.h"
#include "city.h"
#include "person.h"
#include "player.h"
#include "vehicle.h"
class Game
{
public:
	Game();
	~Game();
	void Start();
	void Update();
	void Dispose();

	void UpdateScreen();
	void MainMenu();
	void SetupNewGame();
	void BusinessScreen();
private:
	int _sceneId;
	bool _running;
	Player* _player;
};