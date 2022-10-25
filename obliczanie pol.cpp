#include <iostream>
#define PI 3.14

using namespace std;

void initMenuBox();
void menuDecision(int);
double poleKola(double);
double poleKwadratu(double);
double poleProstokata(double, double);
double poleTrojkata(double, double);

int main()
{
	system("chcp 1250");
	char znak = 'T';
	int wybor;
	
	do
	{
		system("cls");
		initMenuBox();
		
		cin >> wybor;
	
		menuDecision(wybor);
		
		do
		{
			cout << "Czy chcesz kontynuowa� je�li tak wci�nij [T/N] " << endl;
			cin >> znak;
		}while (znak!='T' && znak!='t' && znak!='n' && znak!='N');
	
	}while(znak=='T' || znak=='t');
	
	system("pause");
}
void initMenuBox()
{
	cout << "Wybierz opcje: " << endl;
	cout << "1. Pole ko�a" << endl;
	cout << "2. Pole kwadratu" << endl;
	cout << "3. Pole prostok�ta" << endl;
	cout << "4. Pole tr�jk�ta" << endl;
}
void menuDecision(int wybor)
{
	double a, b, h, r;
	switch(wybor)
	{
		case 1:
			cout << "Podaj promie�: " << endl;
			cin >> r;
			poleKola(r);
			break;
		case 2:
			cout << "Podaj bok: " << endl;
			cin >> a;
			poleKwadratu(a);
			break;
		case 3:
			cout << "Podaj szer. oraz wysoko�� prostok�ta: " << endl;
			cin >> a >> b;
			poleProstokata(a,b);
			break;
		case 4:
			cout << "Podaj podstawe oraz wysoko�� tr�jk�ta: " << endl;
			cin >> a >> h;
			poleTrojkata(a,h);
			break;
		default:
			cout << "Napewno nie wybra�e� poprawnej opcji z menu" << endl;
	}
}
double poleKola(double r)
{
	double wynik = PI * r * r;
	
	cout << " Pole ko�a o promieniu " << r << " jest r�wne " << wynik << endl;
	
	return wynik;
}
double poleKwadratu(double a)
{
	double wynik = a * a;
	
	cout << " Pole kwadratu o boku " << a << " jest r�wne " << wynik << endl;
	
	return wynik;
}

double poleProstokata(double a, double b)
{
	double wynik = a * b;
	
	cout << " Pole prostok�ta o boku " << a << " oraz boku " << b << " jest r�wne " << wynik << endl;
	
	return wynik;
}

double poleTrojkata(double a, double h)
{
	double wynik = a * h * 0.5;
	
	cout << " Pole tr�jk�ta o boku " << a << " oraz wysoko�ci " << h << " jest r�wne " << wynik << endl;
	
	return wynik;
}























