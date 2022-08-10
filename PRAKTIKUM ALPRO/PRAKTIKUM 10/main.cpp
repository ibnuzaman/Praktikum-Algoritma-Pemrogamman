 #include <iostream>

using namespace std;

class point{
public:
  void data_mhs();
  void prout();
private:
  string nama[10], *x[10];
  int nim[10], *y[10];
  int a, n;
};

      // Input
void point::data_mhs(){
      cout << "Program Menghitung jumlah mahasiswa lomba Parmatika\n";
      cout << "---------------------------------------------------\n";
      cout << "Masukan Jumlah Data Mahasiswa : ";
      cin >> n;
      for (int i=1; i<=n; i++){
        cout << endl;
        cout << "No : " << i << endl;
       // cin >> i;
        cout << "Masukan NAMA Mahasiswa : "; cin.ignore();
        getline(cin,nama[i]);
        cout << "Masukan NIM Mahasiswa  : ";
        cin >> nim[i];
        cout << endl;

        x[i]=&nama[i]; 
        y[i]=&nim[i];
      }
    cout << endl;
}

    // Proses dan Output
void point::prout(){
    cout << "----------------------------------------------------------------\n";
    cout << "No\t" << "Nama\t\t\t" << "NIM\t\t\t" << "Alamat NIM\n";
    cout << "-----------------------------------------------------------------\n";
    for (int i=1; i<=n; i++){
      cout << i << "\t" << *x[i] << "\t\t" << *y[i] << "\t\t\t" << y[i] << "\t";
      cout << endl;
    }
    cout << endl;
    }

int main(){
    point a;
    a. data_mhs();
    a. prout();
}