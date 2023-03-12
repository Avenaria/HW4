#pragma once
#include <iostream>
#include <string>
#include"apartment.h"
#include"house.h"
using namespace std;
class human
{
	 string name;
	int age;
public:
	human() {};
	human(string n, int a) : name{ n }, age{ a } {}
	human(human& pipl ) {
		name = pipl.name;
		age = pipl.age;
	}
	~human() {};

};

