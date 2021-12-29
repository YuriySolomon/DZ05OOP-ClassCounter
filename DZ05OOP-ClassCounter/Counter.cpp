#include "Counter.h"

Counter::Counter() : Counter(0, 99999, 0, 1) {}
Counter::Counter(int step) : Counter(0, 99999, 0, step)
{

}
Counter::Counter(int current, int maximum, int minimum, int step)
{
	SetCurrent(current);
	SetMaximum(maximum);
	SetMinimum(minimum);
	SetStep(step);
}
Counter::Counter(const Counter& original)
{	
	SetMinimum(original.minimum);
	SetMaximum(original.maximum);
	SetCurrent(original.current);
	SetStep(original.step);
}

void Counter::SetCurrent(const int current)
{
	if (current <= minimum)
	{
		this->current = minimum;
	}
	else if (current >= maximum)
	{
		this->current = maximum;
	}
	else
	{
		this->current = current;
	}
}
void Counter::SetMaximum(const int maximum)
{
	if (maximum >= 10000 && maximum <= 99999 && maximum > minimum && maximum > current)
	{
		this->maximum = maximum;
	}
}
void Counter::SetMinimum(const int minimum)
{
	if (minimum >= 0 && minimum < 99999 && minimum < maximum && minimum <= current)
	{
		this->minimum = minimum;
	}
}
void Counter::SetStep(const int step)
{
	if (step > 0 && step <= 10)
	{
		this->step = step;
	}
	else
	{
		this->step = 1;
	}	
}

int Counter::GetCurrent() const
{
	return current;
}
int Counter::GetMaximum() const
{
	return maximum;
}
int Counter::GetMinimum() const
{
	return minimum;
}
int Counter::GetStep() const
{
	return step;
}

void Counter::ShowCounter()
{
	printf("current = %05d", current);
	cout << endl;
	printf("minimum = %05d", minimum);
	cout << endl;
	printf("maximum = %05d", maximum);
	cout << endl;
	printf("step    = %05d", step);
	cout << endl;
}
void Counter::MoreCounterOne() //увеличение текущего значения счётчика на 1
{
	SetCurrent(++current);
}
void Counter::MoreCounter(int number) //увеличение значения на заданную величину 
{

	SetCurrent(current);
}
void Counter::ResetCounter() //сброс (обнуление) счётчика
{
	current = 0;
	maximum = 99999;
	minimum = 0;
	step = 1;
}