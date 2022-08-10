#include"../library/base.h"

void Daftar::output(){
  cout<<"========================================================"<<endl;
  cout<<"|   Jenis Buku   |     Judul Buku      |   Penulis     |"<<endl;
  cout<<"========================================================"<<endl;
  
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        cout<<A[i][j]<<"\t|"<<endl;
      }
    }
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        cout<<B[i][j]<<"\t|"<<endl;
      }
    }
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        cout<<C[i][j]<<"\t|"<<endl;
      }
}
}