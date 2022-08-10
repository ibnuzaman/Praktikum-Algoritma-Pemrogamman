#include <iostream>
using namespace std;

class Project{
  public:
    void input();
    void proses();
    void output();
    void tukar();
  private:
    string namaA[5], namaB[5], namaC[5], dataA[5][2], dataB[5][2], dataC[5][2], idA[5], idB[5], idC[5];
    int n, temp1, temp2;
};

void Project::input(){
  cout << "------------- Input Data -------------" << endl;
  
  //dapartemen kesehatan
  cout << "Masukkan jumlah data yang ingin di input : "; cin >> n;
  cout << "Masukkan data untuk  Dapartemen kesehatan " << endl << endl;
  for (int i = 0; i < n; i++){
    cout << "Masukkan data Id karyawan" << i+1 << "\t: "; cin >> idA[i];
    cout << "Masukkan data nama ke-" << i+1 << "\t: "; cin.ignore(); getline(cin,namaA[i]);
  }
  cout << "--------------------------------------" << endl;
  
  //dapartemen teknologi
  cout << "Masukkan data untuk dapartemen teknologi" << endl << endl;
  for (int i = 0; i < n; i++){
    cout << "Masukkan data Id Karyawan" << i+1 << "\t: "; cin >> idB[i];
    cout << "Masukkan data nama ke-" << i+1 << "\t: ";cin.ignore(); getline(cin,namaB[i]);
  }
  cout << "--------------------------------------" << endl;
  
  //dapartemen pangan
  cout << "Masukkan data untuk dapartemen pangan" << endl << endl;
  for (int i = 0; i < n; i++){
    cout << "Masukkan data Id karyawan" << i+1 << "\t: "; cin >> idC[i];
    cout << "Masukkan data nama ke-" << i+1 << "\t: "; cin.ignore(); getline(cin,namaC[i]);
  }
  cout << "--------------------------------------" << endl;
}

void Project::proses(){
  
  //dapartemen kesehatan
  int k = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      if (j == 0){
        dataA[i][j] = idA[k];
      }
      else{
        dataA[i][j] = namaA[k];
      }
    }
    k++;
  }
  
  //dapartemen teknologi
  k = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      if (j == 0){
        dataB[i][j] = idB[k];
      }
      else{
        dataB[i][j] = namaB[k];
      }
    }
    k++;
  }
  
  //dapartemen pangan
  k = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      if (j == 0){
        dataC[i][j] = idC[k];
      }
      else{
        dataC[i][j] = namaC[k];
      }
    }
    k++;
  }
}

void Project::output(){
  cout << "Tampilan tabel menggunakan array 1d : " << endl << endl;
  cout << "|Departemen|\t\t" << "|ID karyawan|\t\t" << "|NAMA|\t" << endl;
  cout << "-----------------------------------------------------------" << endl;
  
  //dapartemen kesehatan
  cout << " Kesehatan\t";
  for (int i = 0; i < n; i++){
    if (i == 0){
      cout << "\t" << idA[i] << "\t\t\t" << namaA[i] <<"\t\t" << endl;
    } 
    if(i >= 1){
      cout << "\t\t\t" << idA[i] << "\t\t\t" << namaA[i]<<"\t\t" << endl;
    }
  }
  cout << endl;
  
  //dapartemen teknologi
  cout << " Teknologi\t";
  for (int i = 0; i < n; i++){
    if (i == 0){
      cout << "\t" << idB[i] << "\t\t\t" << namaB[i]<<"\t\t" << endl;
    } 
    if(i >= 1){
      cout << "\t\t\t" << idB[i] << "\t\t\t" << namaB[i]<<"\t\t" << endl;
    }
  }
   cout << endl;
  
  //dapartemen pangan
  cout << " Pangan\t\t";
  for (int i = 0; i < n; i++){
    if (i == 0){
      cout << "\t" << idC[i] << "\t\t\t" << namaC[i] <<"\t\t"<< endl;
    } 
    if(i >= 1){
      cout << "\t\t\t" << idC[i] << "\t\t\t" << namaC[i]<<"\t\t" << endl;
    }
  }
  cout << endl;
  cout << endl << "--------------------------------------------------" << endl;
  cout << "Tampilan tabel menggunakan array 2d : " << endl << endl;
  cout << "|Departemen|\t\t" << "|ID karyawan|\t\t" << "|NAMA|\t" << endl;
  cout << "-----------------------------------------------------------" << endl;
  
  //dapartemen kesehatan
  cout << " Kesehatan\t";
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      if (i == 0){
        cout << "\t" << dataA[i][j]<<"\t\t";
      } 
      if(i >= 1){
        if(j == 0){
          cout << "\t\t\t" << dataA[i][j]<<"\t\t";
        }
        else{
          cout << "\t" << dataA[i][j]<<"\t\t";
        }
      }
    }
    cout << endl;
  }
  cout << endl;
  
  //dapartemen teknologi
  cout << " Teknologi\t";
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      if (i == 0){
        cout << "\t" << dataB[i][j]<<"\t\t";
      } 
      if(i >= 1){
        if(j == 0){
          cout << "\t\t\t" << dataB[i][j]<<"\t\t";
        }
        else{
          cout << "\t" << dataB[i][j]<<"\t\t";
        }
      }
    }
    cout << endl;
  }
  cout << endl;
  
  //dapartemen pangan
  cout << " Pangan\t\t";
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 2; j++){
      if (i == 0){
        cout << "\t" << dataC[i][j]<<"\t\t";
      } 
      if(i >= 1){
        if(j == 0){
          cout << "\t\t\t" << dataC[i][j]<<"\t\t";
        }
        else{
          cout << "\t" << dataC[i][j]<<"\t\t";
        }
      }
    }
    cout << endl;
  }
  cout << endl;
}

int main (){
    Project a;
    a.input();
    a.proses();
    a.output();
    return 0;
}