#pragma once
#ifndef GAME_H
#define GAME_H
#endif
#include <iostream>
#include "utils.h"
#include "city.h"
#include "person.h"
#include "player.h"
#include "vehicle.h"
#include "jobmarket.h"

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
	void AgencyJobsMarketScreen();
	void DrivingScreen();
	void DrivingRewardScreen();

private:
	int _sceneId;
	bool _running;
	JobMarket _jobMarket;
	Player _player;
};