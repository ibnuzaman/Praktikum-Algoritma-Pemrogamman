#include<iomanip>
#include <iostream>
using namespace std;

class UAS{
	public :
		void input();
		void proses();
		void output();
	private :
		int tmp,n;
		string nim[15],nama[20],status[10], kelas[5];
		int nilai[10];
		string cari;
};

void UAS::input(){
	cout << "Masukkan jumlah data mahasiswa : ";
	cin >> n;
	for(int i=0;i<n;i++){
		cout<<"Masukkan Data ke "<<i+1<<endl;;
		cout<<"Masukan NIM\t\t: "; cin>>nim[i];
		cout<<"Masukan Kelas\t\t: "; cin>>kelas[i];
		cout<<"Masukan Nama\t\t: "; 
		cin.ignore(); getline(cin,nama[i]);
		cout<<"Masukan Nilai\t\t: "; cin>>nilai[i];
		cout<<"Masukan Status\t\t: "; 
		cin.ignore(); getline(cin,status[i]);
	}
}

void UAS::proses(){
	cout<<"\n";
	cout<<"Output sebelum di sorting"<<endl;
	cout<<"=========================================================================================\n";
	cout<<"NIM\t\tKELAS\t\tNAMA\t\tNilai\tStatus"<<endl;
	cout<<"=========================================================================================\n";
	for(int i=0;i<n;i++){
		cout<<nim[i]<<"\t"<<kelas[i]<<"\t\t"<<nama[i]<<"\t"<<nilai[i]<<"\t"<<status[i]<<endl;
	}
	
	// proses sorting
	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j<2; j++)
		{
			if (nilai[i]<nilai[j])
			{
				nim[i].swap (nim[j]);
				kelas[i].swap (kelas[j]);
				nama[i].swap (nama[j]);
				status[i].swap (status[j]);
				tmp=nilai[i];
				nilai[i]=nilai[j];
				nilai[j]=tmp;
			}
		}
	}
	
	cout<<"\nOutput setelah di sorting"<<endl;
	cout<<"=========================================================================================\n";
	cout<<"NIM\t\tKELAS\t\tNAMA\t\tNilai\tStatus"<<endl;
	cout<<"=========================================================================================\n";
	for(int i=0;i<n;i++){
		cout<<nim[i]<<"\t"<<kelas[i]<<"\t\t"<<nama[i]<<"\t"<<nilai[i]<<"\t"<<status[i]<<endl;
	}
	cout<<"=========================================================================================\n";
	cout<<endl<<endl;
	// proses searching
	cout<<"Cari 	 : "; getline(cin,cari);
	cout<<"Ditemukan : \n";
	cout<<"=========================================================================================\n";
	cout<<"| NIM\t\t|\tKELAS\t|\tNAMA\t\t|\tNilai\t|\tStatus\t|"<<endl;
	cout<<"=========================================================================================\n";
	for(int i=0;i<n;i++){
		if(status[i]==cari){
			cout<<"| "<<nim[i]<<"\t\t"<<kelas[i]<<"\t\t"<<nama[i]<<"\t\t"<<nilai[i]<<"\t\t"<<status[i]<<"\t|"<<endl;
			
		}
	}
	cout<<"=========================================================================================\n\n\n";
}

int main(){
	UAS a;
	a.input();
	a.proses();
	return 0;
}