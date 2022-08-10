#include <iomanip>
#include <iostream>
using namespace std;

struct alpro{
  char kelas;
  string nim, nama, status;
  int nilai;
};

class responsi{
  private :
    alpro mhs[25];
    int n;
    string cari;

  public :
    void input(){
      cout<<"Masukkan jumlah data yang di input : "; cin>>n;
      for(int i = 0; i < n; i++){
        cout<<"Masukkan kelas  : "; cin>>mhs[i].kelas;
        cout<<"Masukkan Nama   : "; cin.ignore();getline(cin,mhs[i].nama);
        cout<<"Masukkan NIM    : "; cin>>mhs[i].nim;
        cin.ignore();
        cout<<"Masukkan nilai  : "; cin>>mhs[i].nilai;
        cin.ignore();
		cout<<"Masukkan Status : "; getline(cin,mhs[i].status); 
		cout<<endl;      
      }
      cout<<endl;
    }
    void proses(){
    	input();
    	int nil;
		string nim, nama, stat;
		char kel;
    	for (int i = 1; i < n; i++){
			for (int j = 0; j < n - i; j++){
				if (mhs[j].nilai < mhs[j+1].nilai){
					nim = mhs[j].nim;
					kel = mhs[j].kelas;
					nama = mhs[j].nama; 
					nil = mhs[j].nilai;
					stat = mhs[j].status;
					
					mhs[j].nim = mhs[j+1].nim;
					mhs[j].kelas = mhs[j+1].kelas;
					mhs[j].nama = mhs[j+1].nama;
					mhs[j].nilai = mhs[j+1].nilai;
					mhs[j].status = mhs[j+1].status;
					
					mhs[j+1].nim = nim;
					mhs[j+1].kelas = kel;
					mhs[j+1].nama = nama;
					mhs[j+1].nilai = nil;
					mhs[j+1].status = stat;
				}
			}
		}
		cout<<"OUTPUT SORTING : "<<endl;
		cout<<"|------------------------------------------------------------------------------|"<<endl;
		cout<<"|"<<setw(7)<<"NIM"<<setw(7)<<"|"<<setw(5)<<"KELAS"<<setw(3)<<"|"<<setw(15)<<"NAMA"<<setw(20)<<"|"<<setw(5)<<" NILAI"<<setw(3)<<"|"<<setw(10)<<"STATUS"<<setw(10)<<endl;
		cout<<"|------------------------------------------------------------------------------|"<<endl;
		 for(int i = 0; i < n; i++){
        cout<<"|"<<setw(5)<<mhs[i].nim<<setw(4)<<"|"<<setw(5)<<mhs[i].kelas<<setw(3)<<"|"<<setw(15)<<mhs[i].nama<<setw(20)<<"|"<<setw(5)<<mhs[i].nilai<<setw(3)<<"|"<<setw(10)<<mhs[i].status<<setw(10)<<endl;
        cout<<"|------------------------------------------------------------------------------|"<<endl;
      }
      cout<<endl;
	}
	void search(){
		cout<<"OUTPUT SEARCING"<<endl;
		cout<<"Cari      : "; getline(cin, cari);
		cout<<"Ditemukan : "<<endl;
		cout<<"|------------------------------------------------------------------------------||"<<endl;
		cout<<"|"<<setw(7)<<"NIM"<<setw(7)<<"|"<<setw(5)<<"KELAS"<<setw(3)<<"|"<<setw(15)<<"NAMA"<<setw(20)<<"|"<<setw(5)<<" NILAI"<<setw(3)<<"|"<<setw(10)<<"STATUS"<<setw(10)<<endl;
		cout<<"|------------------------------------------------------------------------------|"<<endl;
		for(int i = 0; i < n; i++){
			if(cari == mhs[i].status){
			cout<<"|"<<setw(5)<<mhs[i].nim<<setw(4
			)<<"|"<<setw(5)<<mhs[i].kelas<<setw(3)<<"|"<<setw(15)<<mhs[i].nama<<setw(20)<<"|"<<setw(5)<<mhs[i].nilai<<setw(3)<<"|"<<setw(10)<<mhs[i].status<<setw(10)<<endl;
        	cout<<"|------------------------------------------------------------------------------||"<<endl;	
			}
		}
	}
};

int main() {
  system("cls");
  responsi a;  
  a.proses();
  a.search();
  }