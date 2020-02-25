#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

// prototype fungsi
void cetak(int jml);

int main()
{
	cetak(10);
}

void cetak(int jml)
{
	for (int i=1; i<=jml; i++)
	{
	cout<<setw(3)<<i<<". CETAK SEBANYAK "<<jml<<" kali"<<endl;
	}
	cout<<endl;
	for (int i=1; i<=jml; i++)
	{
	cout<<setw(3)<<i<<". ini cetakan ke -"<<i<<endl;
	}
	
}
