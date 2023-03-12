#pragma once
#include <iostream>
#include <cstring>
#include"human.h"
using namespace std;

class apartment
{
	int Number;
	int residents;
	human* pipl;
public:
	apartment(){}
	apartment(int n, int r=1) : Number(n), residents(r) {
		pipl = new human[residents];
	}
	apartment(const apartment& pipl) {
		Number = pipl.Number;
		residents = pipl.residents;
		pipl = new human[residents];
		for (int i{ 0 }; i < residents; i++) {
			pipl.[i] = pipl.pipl[i];
		}
	}

};

