#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{	
	calculator calc;

	do{
	calc.display();
	calc.getnum();
	calc.compute();
	}while(calc.getrepeat());

	system("PAUSE");
return 0;
}