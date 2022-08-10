#include <iostream>

using namespace std;

class Project{
	
  public:
    void input();
    void prosesa();
    void prosesd();
    void output();
    void pencarianBiner();
  private:
    int nim[10], max, cari, hasil, low, high, middle;
    string nama[10];
};

void Project::input(){
  cout << "--------------------------------------" << endl;
  cout << "||       PROGRAM DATA MAHASISWA     ||" << endl;
  cout << "--------------------------------------" << endl;
  cout << "Masukkan jumlah mahasiswa : "; cin >> max;
  cout << "--------------------------------------" << endl;
  for (int i = 0; i < max; i++){
    cout << "Masukkan NIM  : "; cin >> nim [i];
    cin.ignore();
    cout << "Masukkan nama : "; getline(cin,nama[i]);
    cout << "--------------------------------------" << endl;
  }
}

void Project::prosesa(){
  for(int i = 1; i < max; i++){
		int key = nim[i];
		int j = i - 1;
		while (j >= 0 && nim[j] > key){
			nim[j + 1] = nim[j];
			j--;
		}
		nim[j + 1] = key;	
	}
}

void Project::output(){
  prosesa();
  cout << "Hasil Urut NIM secara ascending : " << endl;
	  for(int i = 0;i < max; i++){
	  cout << nim[i] << " ";
  }
  cout << endl;

  cout << endl << "--------------------------------------" << endl;
}

void Project::pencarianBiner(){
	int middle, kunciPencarian;
	cout<<"\nMasukkan data yang dicari : ";
	cin>>kunciPencarian;
	low = 0;
	high = (max-1);
	middle = (low+high)/2;
	
	while (low <= high){
	middle = (low+high)/2;

		if (kunciPencarian == nim[middle]){
			cout<<nim[middle]<<endl;
			cout<<nama[middle]<<endl;
			break;
		} else if (kunciPencarian < nim[middle]){
			high = middle-1;
		} else {
			low = middle+1;
		}
	}
	
	if(low>high){          
		cout<<"Data tidak ada "<<endl;
	}
}