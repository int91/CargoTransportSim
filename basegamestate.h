#pragma once
#include <iostream>
class BaseGameState
{
public:
	BaseGameState();
	virtual void OnSwitch() = 0;
	virtual void Update() = 0;
	virtual void Dispose() = 0;
private:
};