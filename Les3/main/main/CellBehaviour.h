#pragma once


class CellBehaviour
{
public:
	CellBehaviour();
	~CellBehaviour();

	virtual double change() = 0;
};

