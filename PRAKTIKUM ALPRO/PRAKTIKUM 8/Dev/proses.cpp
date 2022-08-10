#include"../library/base.h"
void Daftar::proses(){
  cin.ignore();
  cout<<"Judul yang dicari : ";
  getline(cin,z);
  
  cari();
}
void Daftar::cari(){
  for(i=0; i<3; i++){
    for(j=0; i<3; j++){
      if(z==A[i][1]){
        cout<<"Jenis Buku   : "<<A[i][0]<<endl;
        cout<<"Judul Buku   : "<<A[i][1]<<endl;
        cout<<"Penulis Buku : "<<A[i][2]<<endl;
      }
    }
  }
  for(i=0; i<3; i++){
    for(j=0; i<3; j++){
      if(z==B[i][1]){
        cout<<"Jenis Buku   : "<<A[i][0]<<endl;
        cout<<"Judul Buku   : "<<A[i][1]<<endl;
        cout<<"Penulis Buku : "<<A[i][2]<<endl;
      }
    }
  }
  for(i=0; i<3; i++){
    for(j=0; i<3; j++){
      if(z==C[i][1]){
        cout<<"Jenis Buku   : "<<A[i][0]<<endl;
        cout<<"Judul Buku   : "<<A[i][1]<<endl;
        cout<<"Penulis Buku : "<<A[i][2]<<endl;
      }
    }
  }
}