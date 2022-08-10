#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

class Daftar{
  public:
    void input();
    void output();
    void proses();
    void cari();
  private:
  int i, j, a, jumlah, buku, temp1, kode[100][100];
  string judul[100][100], penulis[100][100];
  string jenis[100], temp2, temp3;
};

// Input
void Daftar::input(){
  cout<<" Masukkan Jumlah Jenis Buku : "; cin>>jumlah;
    for(i=0; i<jumlah; i++){
      cout<<" Masukkan Nama Jenis Buku : "; cin>>jenis[i];
      cout<<" Masukkan Jumlah Buku     : "; cin>>buku;
    for(j=0; j<buku; j++){
      cout<<" Kode Buku    : "; cin>>kode[i][j];
      cin.ignore();
      cout<<" Judul Buku   : "; getline(cin,judul[i][j]);
      cout<<" Penulis Buku : "; getline(cin,penulis[i][j]);
    }
    cout<<endl;
  }
  cout<<endl;
}

//proses
void Daftar::proses(){
  for(i=0; i<jumlah;i++){
  for(j=0; j<buku; j++){
    for(int k=0; k<jumlah; k++){
    for(int l=0; l<buku; l++){
         if(kode[i][j]<kode[k][l]){
          temp1=kode[i][j];     
            kode[i][j]=kode[k][l];
            kode[k][l]=temp1;
               
          temp2=judul[i][j];     
            judul[i][j]=judul[k][l];
            judul[k][l]=temp2;

          temp3=penulis[i][j];
            penulis[i][j]=penulis[k][l];
            penulis[k][l]=temp3;
         }
        }
      }
    }
  }
}

//output
void Daftar::output(){ cout<<"==================================================================="<<endl;
  cout<<"|   Jenis Buku   |      Kode Buku      |      Judul     |    Penulis   |"<<endl;
  cout<<"==================================================================="<<endl;
  for(i=0; i<jumlah; i++){
    cout<<" "<<jenis[i]<<"\t\t";
    for(j=0; j<buku; j++){
      cout<<"\t\t" <<kode[i][j];
      cout<<"\t\t" <<judul[i][j];
      cout<<"\t\t" <<penulis[i][j];
      cout<<endl;
    }
    cout<<endl;
  }
}