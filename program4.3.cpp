#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void dellyr () 
{
	system("cls");
}

void stp()
{
getch();
}

// prototipe fungsi mencetak pada koordinat tertentu 
void cetak(int klm, int brs, char * teks);

void cetakc(int brs, char *teks);

int main()
{
	dellyr();
	cetakc(1, " TULISAN INI TERCETAK DI TENGAH LAYAR");
	cetakc(2, "=====================================");
	cetak(3,4, "Tlsan ini terctak pd brs 4 klm 3");
	stp();
}

//definisi fungsi
void cetak(int klm, int brs, char *teks)
{
	gotoxy(klm,brs);cout<<teks;
}

void cetakc(int brs, char *teks)
{
	gotoxy(40-strlen(teks)/2,brs);cout<<teks;
}


