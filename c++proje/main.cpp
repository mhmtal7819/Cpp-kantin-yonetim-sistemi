#include <iostream>
#include "satis.h"
#include "uruntedarik.h"
#include <string>
//#include <cctype>
using namespace std;
 void print(uruntedarik &x){
	cout<<"Urun ismi: "<<x.geturunad()<<endl;
	cout<<"Tedarikci: "<<x.gettedarikci()<<endl;
	cout<<"KDV: "<<x.getkdv()<<endl;
	cout<<"Satis Fiyati: "<<x.getfiyat()<<endl;
}
int main() {
	char ch;
	string urunAd;
	string tedarikciAd;
	int urunFiyat;
	
	cout<<"Urun giriniz.."<<endl;
	cout<<"Urunun adi: ";
	cin>>urunAd;
	cout<<endl;
	cout<<"Tedarikci ad: ";
	cin>>tedarikciAd;
	cout<<endl;
	cout<<"Urunun fiyatini giriniz: ";
	cin>>urunFiyat;
	cout<<endl; 
	uruntedarik urun1(urunAd,tedarikciAd,urunFiyat);
	

    
    
	
	
	satis satis;

     
     
     	do
	{
		system("cls"); 
		cout<<"\n\n\n\tANA MENU";
		cout<<"\n\n\t01. FATURA GIRME";
		cout<<"\n\n\t02. FATURA BILGISI";
		cout<<"\n\n\t03. URUN BILGISI";
		cout<<"\n\n\t04. CIKIS";
	
	
		cout<<"\n\n\tSECIM YAPINIZ (1-4) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case '1':
			cout<<"Fatura bilgilerini giriniz (musteri adi // urun adedi): ";
        	cin>>satis;   //fatura girme
			break;
		case '2':
		   	cout<<"Fatura: ";
	cout<<satis<<endl;
	cout<<"Urun adi: ";
	satis.seturunname();
	cout<<endl;
	cout<<"Fatura no: ";
	cout<<urun1.getfaturano();
	cout<<endl;
	cout<<"Ucret: ";
	satis.setfaturaucret(); //fatura bilgisi
            break;
		case '3':
            print(urun1); //urun bilgisi
			break;
	
	
			
	
		 case '4':
			cout<<"\n\n\tTESEKKURLER";
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='4'); 
}
