#pragma once
#include <iostream>
#include <cstring>
#include"apartment.h"
#include"human.h"
using namespace std;
class house
{
	int napart;
	int Aresid;
	apartment* poli;
public:
	house(){}
	house(int n = 0, int a = 0) : napart(n), Aresid(a) {
		poli = new apartment[napart];
		for (int i = 0; i < napart; i++) {
			napart[i] = apartment(i);
		}
	}
	house(const house& other) {
		napart = other.napart;
		Aresid = other.Aresid;
		napart = new apartment[napart];
		for (int i = 0; i < napart; i++) {
			napart[i] = other.napart[i];
		}
	}
};

