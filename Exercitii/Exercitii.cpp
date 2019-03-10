// Exercitii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <fstream>


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
		cout << 255 - r << " ";
		cout << 255 - g << " ";
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
		double l = 0;
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

void nrGloburi()
{
	int a;
	cin >> a;
	if (a < 2 || a>1000)
		cout << "Nu se afla in interval";
	else
		cout << a + (a * 2) + (2 * a - 3);

}

void nrAnimale()
{
	int c, p, g;
	cin >> c;
	p = 2 * c;
	g = 2 * p;
	if (c < 2 || c>1000)
		cout << "Nu se afla in interval";
	else
		cout << c + p + g;

}

void nrTone()
{
	int t1, t2, n, m, z;
	cin >> t1 >> t2 >> n >> m >> z;
	if (t1 < 2 || t1>100 ||
		t2 < 2 || t2>100 ||
		n < 2 || n>100 ||
		m < 2 || m>100 ||
		z < 2 || z>30)
		cout << "nu se afla in interval";
	else
		cout << (n*t1 + m * t2)*z;
}

void tripluNr()
{
	int x, y;
	cin >> x;
	cin >> y;
	if (x < 1 || x>100000000 ||
		y < 1 || y>100000000)
		cout << "Nu se afla in interval";
	else
		cout << (3 * y) - x;
}

void nrLazi()
{
	long l, h, n;
	cin >> l;
	cin >> h;
	if ((l < 1 || l>1000000) ||
		(h < 1 || h>1000000))
		cout << "Nu se afla in interval";
	else
	{
		n = h / l;
		cout << n;
	}

}

void trenJaponez()
{
	int n, m, I;
	cin >> n >> m;
	if (n < 1 || n>1000000 ||
		m < 1 || m>1000000 ||
		n > m)
		cout << "nu respecta restrictiile";
	else
	{
		I = m / n;
		cout << I;
	}
}

void sumaDoua()
{
	long n, s;
	cin >> n;
	s = 0;
	if (n < 9 || n>1000000000)
		cout << "nu se afla in interval";
	else
	{
		s = (n % 10) + (n % 100 / 10);
		cout << s;
	}

}

void strangeriMana()
{
	double n;
	cin >> n;
	if (n < 1 || n> 1000000000)
		cout << "nu se afla in interval";
	else
		cout << n * ((n - 1) / 2);
}

void taieturaHartie()
{
	int N, M, S;
	cin >> N;
	cin >> M;
	if ((N < 1 || N>1000000) ||
		(M < 1 || M>1000000))
		cout << "Nu se afla in interval";
	else
	{
		S = (N*M) - 1;
		cout << S;
	}

}

void pisiciSoareci()
{
	/*long long n, m, T;
	cin >> n;
	cin >> m;
	if ((n < 1 || n>1000000000000) ||
		(m < 1 || m>1000000000000))
		cout << "nu se afla in interval";
	else
	{
		T = (n*m) / n;
		cout << T;
	}*/

}

void sumaVectoriSiPari()
{
	int v[100];
	int i, n, S = 0;
	cin >> n;
	for (i = 0; i <= n - 1; i++)
	{
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	for (i = 0; i <= n - 1; i++)
	{
		if (i % 2 == 0)
			S = S + v[i];
	}
	cout << S;
}

void sortareVectori()
{
	int v[100];
	int i, j, n, aux;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			if (v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	for (i = 0; i < n; i++)
		cout << v[i] << endl;
}

void maxVector()
{
	int v[100];
	int i, n, max;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	max = v[0];
	for (i = 1; i < n; i++)
	{
		if (v[i] > max)
			max = v[i];
	}
	cout << max;
}

void difParImpar()
{
	int v[100], n, i, contorP, contorI, C;
	cin >> n;
	contorP = 0;
	contorI = 0;

	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}
	for (i = 0; i < n; i++)
	{
		if (v[i] % 2 == 0)
			contorP++;
		else
			contorI++;
	}
	if (contorP > contorI)
		C = contorP - contorI;
	else
		C = contorI - contorP;
	cout << C;

}

void temaUnu()
{
	int v[100];
	int i, j, n, aux;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			if (v[i] < v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	for (i = 0; i < n; i++)
		cout << v[i] << endl;
}

void multipliiElement()
{
	int v[100], n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}
	for (i = 0; i < n; i++)
	{
		if (v[i] % v[n - 1] == 0)
			cout << v[i] << " ";
	}
}

void indiciPariSiImpari()
{
	int v[100], i, n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			cout << v[i] << " ";
	}
	cout << endl;
	for (i = n - 1; i >= 0; i--)
	{
		if (i % 2 != 0)
			cout << v[i] << " ";
	}
}

void urmatoareaOrdine()
{
	int v[100], n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}
	for (i = 0; i < n / 2; i++)
	{
		cout << v[i] << " ";
		cout << v[n - i - 1] << " ";
	}
	if (n % 2 == 1)
		cout << v[n / 2];
}

void numereReale()
{
	int n, i, C = 0;
	double v[200];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> v[i];
	if (v[0] < v[n - 1])
	{
		for (i = 1; i <= n - 2; i++)
		{
			if ((v[i] >= v[0]) &&
				(v[i] <= v[n - 1]))
				C++;
		}
	}
	else
	{
		for (i = 1; i <= n - 2; i++)
		{
			if ((v[i] <= v[0]) &&
				(v[i] >= v[n - 1]))
				C++;
		}
	}
	cout << C;
}

void testVectori()
{
	int v[100], n, i, sumValoriPare = 0, sumValoriIndexPar = 0, sumValoriDiv10 = 0, sumValDiv3IndexImpar = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> v[i];
	for (i = n - 1; i >= 0; i--)
	{
		cout << v[i] << " ";

		if (v[i] % 2 == 0)
			sumValoriPare = sumValoriPare + v[i];

		if (i % 2 == 0)
			sumValoriIndexPar = sumValoriIndexPar + v[i];
		else
			if (v[i] % 3 == 0)
				sumValDiv3IndexImpar = sumValDiv3IndexImpar + v[i];
		if (v[i] % 10 == 0)
			sumValoriDiv10 = sumValoriDiv10 + 1;
	}

	cout << endl;
	cout << sumValoriPare << endl;
	cout << sumValoriIndexPar << endl;
	cout << sumValoriDiv10 << endl;
	cout << sumValDiv3IndexImpar;
}

void egalDepartate()
{
	int v[200], n, C = 0, i, a, b, r;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> v[i];

	for (i = 0; i <= n / 2 - 1; i++)
	{
		a = v[i];
		b = v[n - 1 - i];
		while (b)
		{
			r = a % b;
			a = b;
			b = r;
		}
		if (a == 1)
			C++;
	}
	cout << C;

}

void perechiPrime()
{
	int v[200], n, i, j, C = 0, a, b, r;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> v[i];
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			a = v[i];
			b = v[j];
			while (b)
			{
				r = a % b;
				a = b;
				b = r;
			}
			if (a == 1)
				C++;
		}
	}
	cout << C;
}

void doiVectori()
{
	long x[200], y[200];
	int n, i, s = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> x[i];
	for (i = 0; i < n; i++)
	{
		int a = x[i];
		while (a != 0)
		{
			s = s + a % 10;
			a = a / 10;
		}
		y[i] = x[i] % s;
		s = 0;
		cout << y[i] << " ";
	}

}

void blackFriday()
{
	ifstream bfIn;
	ofstream bfOut;
	bfIn.open("blackfriday.in");
	int n, i, max = 0, k = 0;
	long x[10], y[10];
	double procent;
	bfIn >> n;
	for (i = 0; i < n; i++)
		bfIn >> x[i];
	for (i = 0; i < n; i++)
		bfIn >> y[i];
	bfIn.close();
	for (i = 0; i < n; i++)
	{
		procent = 100 - (100 / ((double)x[i] / (double)y[i]));
		if (procent > max)
		{
			max = procent;
			k = i;
		}
	}
	bfOut.open("blackfriday.out");
	bfOut << k << endl;
	bfOut.close();
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
	//nrGloburi();
	//nrAnimale();
	//nrTone();
	//tripluNr();
	//nrLazi();
	//trenJaponez();
	//timpSoareci();
	//sumaDoua();
	//strangeriMana();
	//taieturaHartie();
	//pisiciSoareci();
	//sumaVectoriSiPari();
	//sortareVectori();
	//maxVector();
	//difParImpar();
	//temaUnu();
	//multipliiElement();
	//***indiciPariSiImpari();
	//urmatoareaOrdine();
	//numereReale();
	//testVectori();
	//egalDepartate();
	//perechiPrime();
	//doiVectori();
	blackFriday();

	return 0;

}


