

#include <iostream>
#include "uruntedarik.h"
#include <string>
using namespace std;


class satis{
	
	friend ostream &operator<<(ostream &output, const satis &fatura);
	friend istream &operator>>(istream &input, satis &fatura);
	public:

	
	
		void setfaturaucret();
		void seturunname();
		void setfaturano();
		private:
			string musteriad;
			
			int urunadet;
			uruntedarik urun;
};




