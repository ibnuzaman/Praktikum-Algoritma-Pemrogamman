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
  string A[100][100],B[100][100],C[100][100],z;
  int i,j,k,jumlah;
};

void Daftar::input(){
  string A[3][3]={{"Novel","Laut Bercerita","Leila S.Chudori"},{"Novel","Azzamine","Shopie Aulia"},{"Novel","Matahari","Tere Liye"}};
  string B[3][3]={{"Komik","Doraemon","Fujiko F.Fujio"},{"Komik","Detektif Conan","Aoyama Gosho"},{"Komik","Miko","Ono Eriko"}};
  string C[3][3]={{"Ensiklopedia","Ensiklopedia Sains","Usborne"},{"Ensiklopedia","Ensiklopedia Kiamat","TIM Gema Insani"},{"Ensiklopedia","Ensiklopedia Akhir Zaman","Abu Fatiah Al-Adnani"}};
  };

void Daftar::proses(){
  cin.ignore();
  cout<<"Judul yang dicari : ";
  getline(cin,z);
  
  cari();
}
void Daftar::cari(){
  for(i=0; i<3; i++){
    for(j=0; i<3; j++){
      if(z==A[i][j]){
        cout<<"Jenis Buku   : "<<A[i][0]<<endl;
        cout<<"Judul Buku   : "<<A[i][1]<<endl;
        cout<<"Penulis Buku : "<<A[i][2]<<endl;
      }
    }
  }
  for(i=0; i<3; i++){
    for(j=0; i<3; j++){
      if(z==B[i][j]){
        cout<<"Jenis Buku   : "<<A[i][0]<<endl;
        cout<<"Judul Buku   : "<<A[i][1]<<endl;
        cout<<"Penulis Buku : "<<A[i][2]<<endl;
      }
    }
  }
  for(i=0; i<3; i++){
    for(j=0; i<3; j++){
      if(z==C[i][j]){
        cout<<"Jenis Buku   : "<<A[i][j]<<endl;
        cout<<"Judul Buku   : "<<A[i][j]<<endl;
        cout<<"Penulis Buku : "<<A[i][j]<<endl;
      }
    }
  }
}

}