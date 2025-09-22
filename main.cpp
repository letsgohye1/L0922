#include <iostream>
using namespace std;
/*
int main()
{
	int Num = 0;
	int OneToHundreadSum = 0;
	int MultipleSum = 0;

	for (int j = 1; j < 100; j++)
	{
		Num = Num + 1;
		OneToHundreadSum = OneToHundreadSum + Num;

		if (Num % 3 == 0)
		{
			MultipleSum = MultipleSum + Num;
		}
	}

	cout << "1부터 100까지의 합: " << OneToHundreadSum << endl;
	cout << "1부터 100까지의 3의 배수의 합: " << MultipleSum << endl;

	return 0;

}
*/

/*
int main()
{
	int Sum = 0;
	int OneToHundreadSum = 0;
	int MultipleSum = 0;

	for (int j = 1; j < 100; j++)
	{
		Sum += j;
	}
	cout << "1부터 100까지의 합: " << Sum << endl;

	Sum = 0;
	for (int j = 3; j < 100; j+=3)
	{
		Sum += j;
	}
	cout << "1부터 100까지의 3의 배수의 합: " << Sum << endl;

	return 0;

}
*/

/*
int main()
{
	int Number[10] = { 0, };
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++)
		{
			Number[i] = i + 1;
			cout << Number[i] << ' ';
		}
		cout << endl;
	}
}
*/

/*
int main()
{
	//*****
	//****
	//***
	//**
	//*

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}
*/

/*
int main()
{
	//*****
	// ****
	//  ***
	//   **
	//    *
	for (int i = 0; i < 5; i++)
	{

		for (int p = 0; p < i; p++)
		{
			cout << ' ';
		}
		for (int j = 0; j < 5 - i; j++)
		{
			cout << '*';
		}
		cout << endl;

	}
	return 0;
}

*/

/*
int main()
{
	//*******
	//8*****8
	//88***88
	//888*888

	int count = 0;
	cin >> count;

	for (int i = 1; i <= count/2+1; i++)
	{

		for (int p = 1; p < i; p++)
		{
			cout << '8';
		}

		for (int j = 0; j <= count - (i*2)+1; j++)
		{
			cout << '*';
		}

		for (int p = 1; p < i; p++)
		{
			cout << '8';
		}

		cout << endl;

	}
	return 0;
}
*/

/*
#define Count 10
int main()
{
	//********** 10
	//*88888888*
	//*88888888*
	//*88888888*
	//*88888888*
	//*88888888*
	//*88888888*
	//*88888888*
	//*88888888*
	//********** 
	//10

	char World[Count][Count] = { '0' };
	int PlayerX = 0;
	int PlayerY = 0;
	char playerShape = 'p';

	//사상(Mapping)
	char Sprites[10] = { ' ', '*' };


	//Render
	for (int i = 0; i < Count; i++)
	{
		for (int j = 0; j < Count; j++)
		{	
			if (PlayerX == i && PlayerY == j)
			{
				cout << playerShape;

			}
			if (i == 0 || i == 9 || j == 0 || j == 9)
			{
				World[i][j] = 1;
				cout << World[i][j];
			}
			else
			{
				World[i][j] = 0;
				cout << World[i][j];
			}
		}
		cout << endl;
	}
}
*/


#include <conio.h> //c standard


int World[10][10] =
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 1, 0, 1, 0, 1},
	{1, 0, 0, 0, 0, 1, 1, 1, 0, 1},
	{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

bool bIsRunning = true;

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

//»ç»ó(Mapping)
char Sprites[10] = { ' ', '*', }; //±×¸²À¸·Î ¹Ù²ÙÀÚ.

int KeyCode;

bool Predict(int NewX, int NewY)
{
	if (World[NewY][NewX] == 0)
	{
		return true;
	}

	return false;
}

void Input()
{
	KeyCode = _getch();

	return;
}

void Process()
{
	if (KeyCode == 'w')
	{
		if (Predict(PlayerX, PlayerY - 1))
		{
			PlayerY--;
		}
	}
	else if (KeyCode == 's')
	{
		if (Predict(PlayerX, PlayerY + 1))
		{
			PlayerY++;
		}
	}
	else if (KeyCode == 'a')
	{
		if (Predict(PlayerX - 1, PlayerY))
		{
			PlayerX--;
		}
	}
	else if (KeyCode == 'd')
	{
		if (Predict(PlayerX + 1, PlayerY))
		{
			PlayerX++;
		}
	}
	else if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}
			else //other
			{
				cout << Sprites[World[Y][X]];
			}

		}
		cout << endl;
	}
}

int main()
{
	//frame, deltaseconds
	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}

	return 0;
}


