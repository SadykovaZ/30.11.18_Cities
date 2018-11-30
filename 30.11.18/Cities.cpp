#include "Cities.h"
#include<algorithm>
void Cities::loadFromFile(string dir, string fileName)
{
	cities.insert(make_pair("123", '1'));
	fstream file(dir + "\\" + fileName, ios::in);
	if (!file)
		throw exception("Файл не найден!!");

	while (!file.eof())
	{
		string s;
		getline(file, s);
		if (s.length() > 0);
		{
			s = s.substr(s.rfind(';') + 2);
			s.erase(end(s) - 1);
			cities.insert(make_pair(s, '0'));

		}
	}

}

void Cities::setCurrentLetter(char l)
{
	this->currentLetter = l;
}

char Cities::getCurrentLetter() const
{
	return this->currentLetter;
}

void Cities::search(string city)
{
	if (cities.count(city) == 0)
		throw exception("Город не найден!");
	if (cities[city] == '1')
		throw exception("Город уже был!");
	if (city[0] != currentLetter)
		throw exception("Буква не совпадает!");
	cities[city] = '1';
	char ch = city[city.size() - 1];
	if (ch == 'ь' || ch == 'ъ')
		currentLetter = city[city.size() - 2] - 32;
	else
		currentLetter = city[city.size() - 1] - 32;
}
