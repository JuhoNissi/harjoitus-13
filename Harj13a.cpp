/******************************
*Teht�v�: Harjoitus 13 (Palautus vko 44)
*Tekij�: Juho Nissi
*Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
*lopuksi nayt�lle.
*
*a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
*tehd�ksesi merkkijonojen yhdist�misen
*Versio 1.0
*P�iv�ys: 22.10.2014
******************************/
#include <iostream>
using namespace std;
#include <cstring>
void main()
{
	char etunimi[50];
	char sukunimi[50];

	cout << "\nAnna etunimesi: ";
	cin.getline(etunimi, 50);
	cout << "\nAnna sukunimesi: ";
	cin.getline(sukunimi, 50);

	strcat_s(etunimi, " ");
	strcat_s(etunimi, sukunimi);
	cout << "Nimesi oli " << etunimi << endl;
}