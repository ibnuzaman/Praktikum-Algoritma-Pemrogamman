#include <iostream>
#include <string>
using namespace std;
void sub (int bar,int kol){
	int j,i,bar2,temp;
	int arr2 [50];
	int arr [bar][kol];
	i =1;
while (!(i>bar)){
	j =1;
while (!(j>kol)){
	cout <<"Data ["<<i<<","<<j<<"] = ";
	cin >> arr[i][j];
	j =j+1;
	}
	i =i+1;
	}
	cout << "Data Awal: " << endl;
	i =1;
while (!(i>bar)){
	j =1;
while (!(j>kol)){
	cout << arr[i][j]<<" ";
	j =j+1;
	}
	cout << " " << endl;
	i =i+1;
	}
	bar2 =1;
	i =1;
while (!(i>bar)){
	j =1;
while (!(j>kol)){
	arr2[bar2] = arr[i][j];
	bar2 =bar2+1;
	j =j+1;
	}
	i =i+1;
	}
	temp =0;
	i =1;
while (!(i>bar*kol)){
	j =i+1;
while (!(j>bar*kol)){
	if (arr2[i]>arr2[j]){
	temp =arr2[i];
	arr2[i] = arr2[j];
	arr2[j] = temp;
	}
else{
}j =j+1;
}
i =i+1;
}
bar2 =1;
i =1;
while (!(i>bar)){
j =1;
while (!(j>kol)){
	arr[i][j] = arr2[bar2];
	bar2 =bar2+1;
	j =j+1;
	}
	i =i+1;
	}
	cout << "Data setelah diurutkan: " << endl;
	i =1;
while (!(i>bar)){
j =1;
while (!(j>kol)){
	cout << arr[i][j]<<" ";
	j =j+1;
	}
	cout << " " << endl;
	i =i+1;
	}
}
int main(){
int kol;
int bar;
	cout <<"Jumlah baris: ";
	cin >> bar;
	cout <<"Jumlah kolom: ";
	cin >> kol;
	sub(bar,kol);
return 0;
}
