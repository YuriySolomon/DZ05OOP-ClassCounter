#include "Counter.h"

int main()
{
    setlocale(0, "");
    Counter c1;
    c1.ShowCounter();
    cout << "\n";
    
    c1.SetCurrent(55055);
    c1.SetMinimum(30000);
    c1.SetMaximum(60000);
    c1.ShowCounter();
    cout << "\n";
    
    Counter c2 = c1;
    c2.SetStep(10);
    c2.ShowCounter();
    c2.SetStep(11);
    c2.ShowCounter();
    cout << "\n";
       
    system("pause >> NULL");
}