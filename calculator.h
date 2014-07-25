#ifndef HEADER_H
#define HEADER_H

using namespace std;

class calculator
{
private:
	float x, y, answer;
	int oper;
	bool repeat;

public:
	calculator();
	void display();
	void getnum();
	void compute();
	bool getrepeat();

	//float getx();
	//float gety();
	//float getanswer();
	//int getoper();
	//void setx(float);
	//void sety(float);
	//void setanswer(float);
	//void setoper(int);

	float add(float, float);
	float sub(float, float);
	float mult(float, float);
	float div(float, float);
	float pwr(float, float);
	float sqrt(float);
	float hex(float);
	float dec(int);
	float bin(int);
	~calculator();

};
#endif