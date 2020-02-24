#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
	char text1[30],pilih, yn, keluar;
	
	cout<<"Masukkan Teks Anda : ";
	cin.getline(text1,sizeof(text1));
	
	do 
	{
		menu:
		system("cls");
		cout<<"Menu String : Saya sedang belajar Pemrograman"<<endl;
		cout<<"============================================="<<endl;
		cout<<"1. huruf kecil"<<endl;
		cout<<"2. Huruf Besar"<<endl;
		cout<<"3. Huruf besar awal kalimat"<<endl;
		cout<<"4. Huruf Besar Awal Kata"<<endl;
		cout<<"5. hURUF bESAR sELAIN aWAL kATA"<<endl;
		cout<<"6. Selesai"<<endl;
		cout<<endl;
		cout<<"Pilihan Anda [1..6]"<<endl;
		cout<<"Pilihan :  "<<endl;
		cin>>pilih;
		system("cls");
		
		switch(pilih)
		{
			case '1' : // huruf kecil
			{
				for(int i=0; i<text1[i]; i++)
				text1[i]=tolower(text1[i]);
				cout<<text1<<endl;
				cout<<"selesai ? [y/n] ";
				cin>>yn;
				if(yn=='y')
				goto keluar;
				else goto menu;
				break;		
			}
			
			case '2' : // HURUF BESAR
			{
				for(int i=0; i<text1[i];i++)
				text1[i]=toupper(text1[i]);
				cout<<text1<<endl;
				cout<<"selesai ?[y/n] ";
				cin>>yn;
				if(yn=='y')
				goto keluar;
				else goto menu;
				break;	
			}
			
			case '3' : //
			{
				text1[0]= toupper(text1[0]);
				for (int i=1; i<text1[i]; i++){
					text1[i]=tolower(text1[i]);
				}
				cout<<text1<<endl;
				cout<<"selesai ?[y/n] ";
				cin>>yn;
				if(yn=='y')
				goto keluar;
				else goto menu;
				break;
			}
			
			case '4' :  // Huruf Besar Di Awal Kata
           		 	text1[0] = toupper( text1[0] );
				for(int i=1; i<text[i]; i++)
           		 	text1[i] = tolower(text1[i]);
  				}
  				for(int i=1; i<text1[i]; i++){
  					if(text1[i] == ' '){
  						text1[i+1]=toupper(text1[i+1]);
					  }
				  }
  				cout<<text1<<endl;
  				cout<<"selesai ?[y/n] ";
				cin>>yn;
				if(yn=='y')
				goto keluar;
				else goto menu;
				break;
				}
				
			case '5' :
				{
					text1[0]=tolower(text1[0]);
					for(int i=1; i<text1[i]; i++){
						text1[i]=toupper(text1[i]);
					}
					for (int i=1; i<text1[i]; i++)
					if(text1[i]==' '){
						text1[i+1]=tolower(text1[i+1]);
					}
					cout<<text1<<endl;
					cout<<"selesai ?[y/n] ";
					cin>>yn;
					if(yn=='y')
					goto keluar;
					else goto menu;
					break;
				}
				
			case '6' :
				{
					goto keluar;
					getch();
					break;
				}
		}
		
	} 
	while (pilih!='6');
	
						keluar :
						system ("cls");
						cout<<"  sesien..... "<<endl;
						getch();
						
	return 0;
}
