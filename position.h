#pragma once
struct Position
{
	int x;
	int y;

	void Add(const Position& a)
	{
		this->x += a.x;
		this->y += a.y;
	}

	void Sub(const Position& a)
	{
		this->x -= a.x;
		this->y -= a.y;
	}

	void Mult(const Position& a)
	{
		this->x *= a.x;
		this->y *= a.y;
	}

	void Div(const Position& a)
	{
		this->x /= a.x;
		this->y /= a.y;
	}

	void Equ(const Position& a)
	{
		this->x = a.x;
		this->y = a.y;
	}
};