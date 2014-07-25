#include <iostream>
#include <math.h>
#include <cstdlib>
#include "calculator.h"

using namespace std;

calculator::calculator()
{
	x = 0;
	y = 0;
	answer = 0;
	oper = 0;
	repeat = true;
}

void calculator::display()
{
	system("CLS");
	cout<< "\t\t A calculator program!!\n";
	cout<< "Enter in two numbers and then the number of the operation you want to perform:\n\n";
	cout<< "NUM 1: " << x << "\n";
	cout<< "NUM 2: " << y << "\n";
	cout<< "Operation: " << oper << "\n";
	cout<< "ANSWER = " << answer << "\n\n";
	cout<< "*********************************************************************\n";
	cout<< "Available operations:\n";
	cout<< "1) add \n";
	cout<< "2) subtract \n";
	cout<< "3) multiply \n";
	cout<< "4) divide \n";
	cout<< "5) powr \n";
	cout<< "6) square root \n";
	cout<< "7) convert to HEX \n";
	cout<< "8) convert to DECIMAL \n";
	cout<< "9) convert to BINARY \n";
	cout<< "10 quit\n\n\n";

}

bool calculator::getrepeat()
{
	bool temp;
	temp = repeat;
	return temp;
}

void calculator::getnum()
{	

	cout<<"NUM1: ";
	cin>> x;
	cout<<"\nNUM2: ";
	cin>> y;
	cout<<"\nOPERATION: \n";
	cin>> oper;
}


void calculator::compute()
{
	switch (oper)
	{
		case 1:
			add(x,y);
			break;
		case 2:
			sub(x,y);
			break;
		case 3:
			mult(x,y);
			break;
		case 4:
			div(x,y);
			break;
		case 5:
			pwr(x,y);
			break;
		case 6:
			sqrt(x);
			break;
		case 7:
			hex(x);
			break;
		case 8:
			dec(x);
			break;
		case 9:
			bin(x);
			break;
		case 10:
			repeat = false;
			break;
		default:
			cout<<"OPER ERROR\n";
	}
}

//float calculator::getx()
//{
//	return x;
//}
//
//float calculator::gety()
//{
//	return y;
//}
//
//float calculator::getanswer()
//{
//	return answer;
//}
//
//int calculator::getoper()
//{
//	return oper;
//}
//
//void calculator::setx(float n)
//{
//	x = n;
//}
//
//void calculator::sety(float n)
//{
//	y = n;
//}
//
//void calculator::setanswer(float n)
//{
//	answer = n;
//}
//
//void calculator::setoper(int n)
//{
//	oper = n;
//}

float calculator::add(float a, float b)
{	
	answer = a+b;
	return 0;
}

float calculator::sub(float a, float b)
{
	answer = a-b;
	return 0;
}

float calculator::mult(float a, float b)
{
	answer = a*b;
	return 0;
}

float calculator::div(float a, float b)
{
	if(b == 0)
		answer = 0;
	else 
		a/b;

	return 0;
}

float calculator::pwr(float a, float b)
{
	answer = pow(a,b);

	return 0;
}

float calculator::sqrt(float)
{
	answer = sqrt(x);
	return 0;
}

float calculator::hex(float)
{

	return 0;
}

float calculator::dec(int)
{

	return 0;
}

float calculator::bin(int)
{

	return 0;
}

calculator::~calculator()
{
}