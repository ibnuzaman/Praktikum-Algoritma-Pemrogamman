#include <iostream>
#include <fstream>
using namespace std;

int main (){

  string jenis[20];
  int pilih1,bayar,kembalian,harga,total,menu,jarak;
  float diskon;
	cout << "RUMAH MAKAN AYAM MAHAL" << endl;
  cout << "========================" << endl;
  cout << "\nMenu Makanan dan Harga : " << endl;
  cout << "\n1. Ayam Geprek  : Rp21.000" << endl;
  cout << "2. Ayam Goreng  : Rp17.000" << endl;
  cout << "3. Udang Goreng : Rp19.000" << endl;
  cout << "4. Cumi Goreng  : Rp20.000" << endl;
  cout << "5. Ayam Bakar   : Rp25.000" << endl;
  ofstream hsl;
  hsl.open("struct.txt", ios::out);
  hsl << "RUMAH MAKAN SEDERHANA" << endl;
  hsl << "========================" << endl;
  hsl << "\nMenu Makanan dan Harga : " << endl;
  hsl << "\n1. Ayam Geprek  : Rp21.000" << endl;
  hsl << "2. Ayam Goreng  : Rp17.000" << endl;
  hsl << "3. Udang Goreng : Rp19.000" << endl;
  hsl << "4. Cumi Goreng  : Rp20.000" << endl;
  hsl << "5. Ayam Bakar   : Rp25.000" << endl;
  hsl.close();
  cout <<"\nBanyak pesanan : ";
  cin >> menu;
  
  ofstream h;
  h.open("struct.txt", ios::app);
  h << "======================"<< endl;
  h << "menu yang di pesan: "<<endl;
  h.close(); 
  for(int a=1;a<=menu;++a){
    
  cout << "\nSilahkan Pilih Menu Anda : ";
  cin >> pilih1;
  
  if (pilih1==1){
    cout << "1. Ayam Geprek : Rp21.000" << endl;
    harga=harga+21000;
    ofstream hsl;
  hsl.open("struct.txt", ios::app);
  hsl << "1. Ayam Geprek : Rp21.000"<<endl;
  hsl.close(); 
  }
  else if(pilih1==2){
    cout << "2. Ayam Goreng : Rp17.000" << endl;
    harga=harga+17000;
    hsl.open("struct.txt", ios::app);
    hsl << "2. Ayam Goreng : Rp17.000"<<endl;
    hsl.close(); 
  }
  else if(pilih1==3){
    cout << "3. Udang Goreng : Rp19.000" << endl;
    harga=harga+19000;
    hsl.open("struct.txt", ios::app);
    hsl << "3. Udang Goreng : Rp19.000"<<endl;
    hsl.close(); 
  }
  else if(pilih1==4){
    cout << "4. Cumi Goreng : Rp20.000" << endl;
    harga=harga+20000;
    hsl.open("struct.txt", ios::app);
    hsl << "4. Cumi Goreng : Rp20.000"<<endl;
    hsl.close(); 
  }
  else if(pilih1==5){
    cout << "5. Ayam Bakar : Rp25.000" << endl;
    harga=harga+25000;
    hsl.open("struct.txt", ios::app);
    hsl << "5. Ayam Bakar : Rp25.000"<<endl;
    hsl.close(); 
  }
  
    }

  cout << "Masukkan Jarak dari Restoran ke Rumah Anda (dalam KM) : ";
  cin >> jarak;
  cout << "Jarak dari Restoran ke Rumah Anda adalah " << jarak << " Kilometer.";
  hsl.open("struct.txt", ios::app);
  hsl << "================================\n";
  hsl << "Jarak dari Restoran ke Rumah Anda adalah " << jarak << " Kilometer."<<endl;
  hsl.close();
  if (jarak <= 3){

  if (harga <= 25000){

    total = harga + 15000;
    
  }
    else  if (harga > 25000){

      cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 12000;
      hsl.open("struct.txt", ios::app);
      hsl << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      hsl.close();
    }
    else if (harga > 50000){

      cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 10000;
      hsl.open("struct.txt", ios::app);
      hsl << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      hsl.close();
        
    }

    else if ((harga > 150000)){

       cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 7000;
      hsl.open("struct.txt", ios::app);
      hsl << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      hsl.close();
    }
  }

  else if (jarak > 3){

    if (harga <= 25000){

    total = harga + 25000;
    
  }

     if ((harga > 25000) && (harga <= 50000)){

      cout << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 22000;
      hsl.open("struct.txt", ios::app);
      hsl << "\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      hsl.close();
    }
    else if ((harga > 50000) && (harga <= 150000)){

      cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 20000;
      hsl.open("struct.txt", ios::app);
      hsl << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      hsl.close();
  
  }

    else if ((harga > 150000)){

      cout << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 17000;
      hsl.open("struct.txt", ios::app);
      hsl << "\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      hsl.close();
      
    }
  }
  cout <<"\nTotal Harga : " << total;
  cout << "\nMasukkan Uang Anda : ";
  cin >> bayar;
  cout << "Kembalian : " << bayar - total;
  
  hsl.open("struct.txt", ios::app);
  hsl << "\n================================\n";
  hsl << "\nTotal Harga : " << total;
  hsl << "\nUang anda : " << bayar;
  hsl << " Kembalian : " << bayar - total;
  hsl.close();
  
  }