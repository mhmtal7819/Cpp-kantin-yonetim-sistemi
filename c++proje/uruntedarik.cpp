#include "uruntedarik.h"
#include <iostream>
#include <string>
using namespace std;

uruntedarik::uruntedarik(string _urunad,string _tedarikci,int _fiyat){
	seturunbilgi(_urunad, _tedarikci, _fiyat);
}
uruntedarik::~uruntedarik(){
	cout<<urunad<<" "<<"urunu siliniyor..."<<endl;
} 


int uruntedarik::faturano=0;

void uruntedarik::seturunbilgi(string _urunad,string _tedarikci,int _fiyat){
	seturunad(_urunad);
	settedarikci(_tedarikci);
	setfiyat(_fiyat);
	
}
void uruntedarik::seturunad(string _urunad){
	urunad=_urunad;
}
void uruntedarik::settedarikci(string _tedarikci){
	tedarikci=_tedarikci;
}
void uruntedarik::setfiyat(int _fiyat){
fiyat=_fiyat;

	
}
void uruntedarik::setkdv(){
	if(tedarikci=="bim"){
		kdv=2;
	}
	if(tedarikci=="a101"){
		kdv=3;
	}
	if(tedarikci=="file"){
		kdv=4;
	}
}

string uruntedarik::gettedarikci(){
	return tedarikci;
}
string uruntedarik::geturunad(){
	return urunad;
}
int uruntedarik::getkdv() {
	return kdv;
}
int uruntedarik::getfiyat(){
	return fiyat;
}
 int uruntedarik::getfaturano(){
 	faturano++;
	return faturano ;
}
void uruntedarik::yazdir(){
	cout<<geturunad();
}

