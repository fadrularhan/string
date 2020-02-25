#include <iostream>
#include <conio.h>
using namespace std;

//prototype fungsi 
void garis();
void tampilkan_judul();

//fungsi utama
int main()
{
	tampilkan_judul();
	garis(10);
	return 0;
}

//definisi fungsi
void garis()
{
	cout<<"============================"<<endl;
}

void tampilkan_judul()
{
	cout<<"PT. JAYA SELALU"<<endl;
	cout<<"Jl. Buntu No. 76"<<endl;
	cout<<"Yogyakarta" <<endl;
	return; 
}
