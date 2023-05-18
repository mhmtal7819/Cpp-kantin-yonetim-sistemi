#ifndef URUNTEDARIK_H
#define URUNTEDARIK_H
#include <iostream>
#include <string>

using namespace std;
 
 class uruntedarik{
 	friend void print(uruntedarik &x);
 	private:
 		
 		string urunad;
 		string tedarikci;
 		int fiyat;
 		int kdv;
 		static int faturano;
 		void setkdv();
 		public:
 			
 			
 			explicit uruntedarik(string _urunad,string _tedarikci,int _fiyat);
 			
 			~uruntedarik();	
 		     
			 
			 void seturunbilgi(string _urunad,string _tedarikci,int _fiyat);
			 void seturunad(string _urunad);
			 void settedarikci(string _tedarikci);
			 void setfiyat(int _fiyat);
			
			 
			 
			 string geturunad();
			 string gettedarikci();
			 int getfiyat();
			 int getkdv() ;
			 static int getfaturano();
			 void yazdir();
			 	
			 
			 
 	
 };
 
 
 #endif
