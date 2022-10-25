#include <iostream>
#include <cmath>
using namespace std;

main()
{ // start
	system("chcp 1250");
	
	poczatek:
		
	cout << "------------------------------------" << endl;
	cout << "| Witaj u¿ytkowniku w kalkulatorze |" << endl;
	cout << "| by Olaf Kondla                   |" << endl;
	cout << "------------------------------------" << endl;
	
	double a, b;
		
	cout << "Podaj pierwsz¹ liczbê " << endl;
	cin >> a;
	cout << "Podaj drug¹ liczbê " << endl;
	cin >> b;
	
	cout << "Jaka operacje chcesz wykonaæ na liczbach? " << endl;
	cout << "+ - dodawanie" << endl;
	cout << "- - odejmowanie" << endl;
	cout << "* mno¿enie" << endl;
	cout << "/ dzielenie" << endl;
	
	char znak;
	cin >> znak;
	
	if (znak == '+')
		cout << a << " + " << b << " = " << (a+b) << endl;
	else if (znak == '-')
		cout << a << " - " << b << " = " << (a-b) << endl;
	else if (znak == '*')
		cout << a << " * " << b << " = " << (a*b) << endl;
	else if (znak == '/')
		cout << a << " / " << b << " = " << (a/b) << endl;
	else
		cout << "b³¹d" << endl;
	
	char t;	
	cout << "Jesli chcesz zacz¹æ od pocz¹tku wpisz T, jeœli nie wpisz N " << endl;
	cin >> t;
	if (t=='t' || t=='T'){
	goto poczatek;
	}
	else
	system("pause");	
} //koniec
