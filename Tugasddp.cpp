#include <iostream>
using namespace std;

int main() {
	int detik_input;

cout<<"Masukkan bilangan >1 (satuan detik)"<<endl;
cin>>detik_input;
int jam= 0, menit= 0, detik = 0;

while (detik_input >= 3600){
	 jam++;
    detik_input -= 3600;
}

while (detik_input >= 60){
	menit++;
	    detik_input -= 60;

}
detik = detik_input;

cout<<"\nHasil Konversi:"<<endl;
cout<<jam<<"jam"<<endl;
cout<<menit<<"menit"<<endl;
cout<<detik<<"Detik"<<endl;

return 0;
}

