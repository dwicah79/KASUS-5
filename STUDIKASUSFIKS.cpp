#include<iostream>
using namespace std;

class baseproject{
	public:
		void mk(int);
		void output(int);
	private:
		string mk1[100];
		int n;
		int sks[100];
		int biaya,disc,totalsemua,totalsementara,totalsks, disc2;
};

void baseproject::mk(int n){
	if(n==0){

	}
	else{
		cout<<"\nNama Matkul\t: "; cin>>mk1[n];
		cout<<"Banyak sks\t: ";cin>>sks[n];
		(mk(n-1));
	}
}

void baseproject::output(int n){	
	cout<<"\nNo.\tDaftar Matkul\tsks"<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<"\t"<<mk1[i+1]<<"\t\t"<<sks[i+1]<<endl;
		totalsks+=sks[i+1];
	}
	cout<<"\nTotal SKS = "<<totalsks;
	cout<<"\n================================"<<endl;
	biaya = totalsks * 120000;
	disc = biaya * 0.10;
	totalsementara= biaya - disc;
	disc2 = totalsementara * 0.05;
	totalsemua=totalsementara -disc2;
	cout<<"TOTAL : "<<biaya<<endl;
	cout<<"DISKON 1, Sebesar 10% : "<<disc<<endl;
	cout<<"Total sementaranya yaitu : "<<totalsementara<<endl;
	cout<<"DISKON 2, Sebesar 5%  : "<<disc2<<endl;
	cout<<"Total Seluruh :  "<<totalsemua<<endl;
	
}
int main(){
	int n;
	long nim;
	string nama;
	baseproject sks;
	cout<<"Masukkan Nama\t: "; cin>>nama;
	cout<<"Masukkan Nim\t: "; cin>>nim;
	cout<<"Masukkan jumlah matkul : "; cin>>n;
	sks.mk(n);
	cout<<"================================="<<endl;
	cout<<"Nama mahasiswa : "<<nama<<endl;
	cout<<"Nim mahasiswa : "<<nim<<endl;
	sks.output(n);
	return 0;
}
