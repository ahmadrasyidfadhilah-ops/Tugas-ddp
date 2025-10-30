#include <iostream>
using namespace std;

int main() {
	long long detik;
	
	cout<<"Masukkan angka >1 (dalam satuan detik) =";
	cin>>detik;
	
	long long hari = detik / 86400;
	long long sisa_detik = detik % 86400;
	long long jam = sisa_detik / 3600;
	sisa_detik = sisa_detik % 3600;
	long long menit = sisa_detik / 60;
	sisa_detik = sisa_detik % 60;
	long long sisa_akhir_detik = sisa_detik % 60;
	
	cout<<endl;
	cout<<"Hasil konversi :"<<endl;
	cout<<hari<<" "<<"Hari, "<<jam<<" "<<"Jam, "<<menit<<" "<<"Menit, "<<sisa_akhir_detik<<" "<<"Detik, "<<endl;
	
	return 0;
	
}
