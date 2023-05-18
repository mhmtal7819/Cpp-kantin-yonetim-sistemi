#include <iostream>
#include <iomanip>
#include "satis.h"
#include "uruntedarik.h"
#include <string>
using namespace std;

ostream &operator<<(ostream &output,const satis &fatura)
{
	output<<fatura.musteriad<<"//"<<fatura.urunadet;
	return output;
}
istream &operator>>(istream &input, satis &fatura){
	input>>fatura.musteriad;
	input.ignore();
	
	input>>fatura.urunadet;
	return input;
	
}


void satis::setfaturaucret() {
	double Ucret= urunadet*urun.getfiyat();
     cout<<Ucret;

}

void satis::seturunname(){
	 urun.yazdir();
}

void satis::setfaturano(){
	cout<<urun.getfaturano();
}





