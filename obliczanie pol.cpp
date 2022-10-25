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
			cout << "Czy chcesz kontynuowaæ jeœli tak wciœnij [T/N] " << endl;
			cin >> znak;
		}while (znak!='T' && znak!='t' && znak!='n' && znak!='N');
	
	}while(znak=='T' || znak=='t');
	
	system("pause");
}
void initMenuBox()
{
	cout << "Wybierz opcje: " << endl;
	cout << "1. Pole ko³a" << endl;
	cout << "2. Pole kwadratu" << endl;
	cout << "3. Pole prostok¹ta" << endl;
	cout << "4. Pole trójk¹ta" << endl;
}
void menuDecision(int wybor)
{
	double a, b, h, r;
	switch(wybor)
	{
		case 1:
			cout << "Podaj promieñ: " << endl;
			cin >> r;
			poleKola(r);
			break;
		case 2:
			cout << "Podaj bok: " << endl;
			cin >> a;
			poleKwadratu(a);
			break;
		case 3:
			cout << "Podaj szer. oraz wysokoœæ prostok¹ta: " << endl;
			cin >> a >> b;
			poleProstokata(a,b);
			break;
		case 4:
			cout << "Podaj podstawe oraz wysokoœæ trójk¹ta: " << endl;
			cin >> a >> h;
			poleTrojkata(a,h);
			break;
		default:
			cout << "Napewno nie wybra³eœ poprawnej opcji z menu" << endl;
	}
}
double poleKola(double r)
{
	double wynik = PI * r * r;
	
	cout << " Pole ko³a o promieniu " << r << " jest równe " << wynik << endl;
	
	return wynik;
}
double poleKwadratu(double a)
{
	double wynik = a * a;
	
	cout << " Pole kwadratu o boku " << a << " jest równe " << wynik << endl;
	
	return wynik;
}

double poleProstokata(double a, double b)
{
	double wynik = a * b;
	
	cout << " Pole prostok¹ta o boku " << a << " oraz boku " << b << " jest równe " << wynik << endl;
	
	return wynik;
}

double poleTrojkata(double a, double h)
{
	double wynik = a * h * 0.5;
	
	cout << " Pole trójk¹ta o boku " << a << " oraz wysokoœci " << h << " jest równe " << wynik << endl;
	
	return wynik;
}























