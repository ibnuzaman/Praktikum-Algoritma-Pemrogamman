#include <string.h>
#include <iostream>
using namespace std;

class ResponsiA{
	private:
		int nis[50], nis1, cari;
		int tanggal[10], tanggal1, jumlah[50], jumlah1;
		string nama[100], nama1, kelas[10], kelas1;
	public:
		void input(){
			for(int i=0; i<4; i++){
			cout<<"Tanggal Bayar : "; cin>>tanggal[i];
			cout<<"NIS           : "; cin>>nis[i];
			cin.ignore();
			cout<<"Nama          : "; getline(cin, nama[i]);
			cout<<"Kelas         : "; cin>>kelas[i];
			cout<<"Jumlah        : "; cin>>jumlah[i];
			cout<<endl;
			}
		}
		void sorting(){
			for(int i=0; i<4; i++){
			    for(int j=0; j<4-i-1; j++){
			      if(tanggal[j]>tanggal[j+1]){
			      	tanggal1=tanggal[j];
			      	tanggal[j]=tanggal[j+1];
			      	tanggal[j+1]=tanggal1;
			      	
			      	nis1=nis[j];
			      	nis[j]=nis[j+1];
			      	nis[j+1]=nis1;
					
			        nama1=nama[j];
			        nama[j]=nama[j+1];
			        nama[j+1]=nama1;
			        
			        kelas1=kelas[j];
					kelas[j]=kelas[j+1];
					kelas[j+1]=kelas1;
			        
			        jumlah1=jumlah[j];
					jumlah[j]=jumlah[j+1];
					jumlah[j+1]=jumlah1;
			      }
			    }
		  	}
		  	cout<<"Output Sorting"<<endl<<endl;
            cout<<"-------------------------------------------------------------------------------------------------\n";
		  	cout<<"|Tanggal Pembayaran\t|\tNIS\t|\tNama\t\t|\tKelas\t|\tJumlah\t|"<<endl;
            cout<<"-------------------------------------------------------------------------------------------------\n";
		  	for(int i=0; i<4; i++){
		  		cout<<"|\t"<<tanggal[i]<<"\t\t|\t"<<nis[i]<<"\t|\t"<<nama[i]<<"\t\t|\t"<<kelas[i]<<"\t|\t"<<jumlah[i]<<"\t|"<<endl;
			}
            cout<<"-------------------------------------------------------------------------------------------------\n";
		}
		void searching(){
			cout<<"Cari : "; cin>>cari;
			cout<<"Ditemukan :"<<endl;
			for(int i=0; i<4; i++){
		  		if(cari==nis[i]){
		  			cout<<"Pembayaran Tanggal "<<tanggal[i]<<endl;
		  			cout<<"   NIS              : "<<nis[i]<<endl;
		  			cout<<"   Nama             : "<<nama[i]<<endl;
		  			cout<<"   Kelas            : "<<kelas[i]<<endl;
		  			cout<<"   Total Pembayaran : "<<jumlah[i]<<endl;
		  		}
		  	}
		}
};

int main(){
	ResponsiA x;
	x.input();
	x.sorting();
	x.searching();
	return 0;
}