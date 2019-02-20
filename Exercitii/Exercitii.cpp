// Exercitii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>


using namespace std;

// Calculare adunare, scadere, inmultire, impartire intre 2 numere intregi.
void asii()
{
	int a, b;
	cin >> a >> b;

	if (a > 500 || b > 500)
		cout << "Numerele nu se afla in interval.";
	else

	{
		cout << a + b << " ";
		cout << a - b << " ";
		cout << a * b << " ";
		cout << a / b;
	}

}

// Opusul culorii
void opusCuloare()
{
	int r, g, b;
	cin >> r >> g >> b;
	if ((r < 0 || r>255)
		|| (g < 0 || g>255)
		|| (b < 0 || b>255))
		cout << "Nu sunt in intervalul 0 - 255 .";
	else
	{
		cout << 255 - r <<" ";
		cout << 255 - g <<" ";
		cout << 255 - b;
	}
}

void unghiAdiacent()
{
	int x, y;
	cin >> x;
	if (x < 1 || x > 179)
		cout << "Nu se afla in interval.";
	else
	{
		y = 180 - x;
		cout << y;
	}


}

void ultimaCifraASumei()
{
	long x, y, s;
	cin >> x >> y;
	if ((x < 1 || x>1000000)
		|| (y < 1 || y>1000000))
		cout << "Nu se afla in interval.";
	else
	{
		s = x + y;
		cout << s % 10;
	}
}

void parImpar()
{
	long n;
	cin >> n;
	if (n > 1000000000)
		cout << "Nu se afla in interval.";
	else
	{
		if (n % 2 == 0)
			cout << "Numarul este par.";
		else
			cout << "Numarul este impar.";
	}
}

void maxDouaNumere()
{
	int x, y;
	cin >> x;
	cin >> y;
	if (x > y)
		cout << x;
	else
		cout << y;
}

void nrLitri()
{
	double x, y;
	double n;
	cin >> x;
	cin >> y;
	if ((x < 1 || x>1000000) ||
		(y < 1 || y>1000000))
		cout << "Nu se afla in interval.";
	else
	{
		//n = y / x;
		//cout << ceil(n) ;

		n = 0;
		int l=0;
		while (l < y)
		{
			l = l + x;
			n = n + 1;
		}
		cout << n;
		
	}
}

// Afisarea numerelor impare . 
// Se citeste de la tastatura un numar intre 10 - 50 .
// Sa se afiseze numerele impare intre 0 - nr citit .
int afisNrImpare()
{
	int n;
	int instructiune;


	// For infinit .
	for (;;)
	{
		cout << "instructiune = ";
		cin >> instructiune;

		switch (instructiune)
		{
		case 1: cout << "n = ";
			cin >> n;
			if (n < 10 || n>50)
			{
				cout << "Numarul nu se afla in interval.";
			}
			else
			{
				int i = 0;
				while (i <= n)
				{
					if (i % 2 == 1)
						cout << "i= " << i << "\n";

					i = i + 1;

				}

			}
			break;
		case 2: return 0;
		default: cout << "Te rog selecteaza 1 sau 2 .";
			break;
		}


	}

	// While infinit .
	// while(1){}




	return 0;
}

int main()
{
	//asii();
	//opusCuloare();
	//unghiAdiacent();
	//ultimaCifraASumei();
	//parImpar();
	//maxDouaNumere();
	//nrLitri();

	
	return 0;

}


