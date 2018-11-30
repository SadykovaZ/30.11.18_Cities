#include "CitiesConsole.h"

void CitiesConsole::start()
{
	try {
		c.loadFromFile();
	}
	catch (exception&e)
	{
		cout << e.what();
		cout << "���������� ���������� ����!";
		system("pause");
		exit(0);
	}
}

void CitiesConsole::game()
{
	int player = 1;
	while (1)
	{
		try
		{
			cout << "����� " << player << " �����\n";
			cout << "����� �� ����� " << c.getCurrentLetter() << endl;
			string s;
			getline(cin, s);
			c.search(s);
			player++;
			if (player == 3)
				player = 1;
		}
		catch (exception&e)
		{
			cout << e.what();
			system("pause");
		}

	}
}
