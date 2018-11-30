#pragma once
#include<map>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

class Cities
{
	map<string, char> cities;
	char currentLetter='À';
public:
	void loadFromFile(string dir, string fileName);
	void setCurrentLetter(char l);
	char getCurrentLetter() const;
	void search(string city) ;

};

