#pragma once
#include "AllLibraries.h"

class Counter
{
	int current = 0;
	int maximum = 99999;
	int minimum = 0;
	int step = 1;

public:
	Counter();
	Counter(int step);
	Counter(int current, int maximum, int minimum, int step);
	Counter(const Counter& original);
	
	void SetCurrent(const int current);
	void SetMaximum(const int maximum);
	void SetMinimum(const int minimum);
	void SetStep(const int step);

	int GetCurrent() const;
	int GetMaximum() const;
	int GetMinimum() const;
	int GetStep() const;

	void ShowCounter();
	void MoreCounterOne(); //увеличение текущего значения счётчика на 1
	void MoreCounter(int number); //увеличение значения на заданную величину 
	void ResetCounter(); //сброс (обнуление) счётчика

};

