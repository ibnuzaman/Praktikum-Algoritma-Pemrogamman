#include <iostream>
#include <fstream>

using namespace std;

class UTS{
public:
  void login();
  void menu();
  void potong();
  void kurir();
  void assuransi();
  void pembayaran();
  
  void garis(int x){
    for(int a=0; a<x; a++){
        cout<<"-";
      }
    cout<<endl;
    }
  
  void senddata(){
    ofstream TulisData;
    cout << endl;
    TulisData.open("struk.txt");
    TulisData <<" +---------------------------------------+ "<< endl;
    TulisData <<"            Daftar orderan            "<< endl;
    TulisData <<" +---------------------------------------+ "<< endl;
    TulisData << "Jumlah yang dipesan\t\t          : "<<endl;
    for(int i = 0 ; i <=top ; i++){
      TulisData << " " << i+1 <<". "<< keranjang[i] << " = " << jumlah[i] << endl;
    }
      TulisData << "Total harga                     : " << total2 << endl;
      TulisData << "Alamat yang tercantum           : " << alamat << endl;
      TulisData << "Eksepedisi yang dipakai         : ";
      if (opsi1==1){
        TulisData << "J&T" << endl;
      }else{
        TulisData << "J&E" << endl;
      }
    TulisData << "Biaya ongkir                    : " << ongkir << endl;
    TulisData << "Potongan Ongkir                 : " << potongan << endl;
    TulisData << "Anda mendapatkan Potongan Harga : " << diskon << endl;
    TulisData << "Total pembayaran                : " << total << endl;
    TulisData << "Sisa Saldo anda                 : " << bayar << endl;
    TulisData.close();
  }

private:
  string nama, alamat, cari, temp, jawab, asuransi, pilih2;
  int pass, pilih, no_index, pilihan, total=0, total2=0, kode, diskon, opsi1, opsi2, ass, potongan=0;
  long int harga, ongkir;
  float saldo, bayar;
  int max = 100;
  int top = -1;
  int jumlah[100];
  string keranjang[100];
  
  ofstream TulisData;
};

// Login
  void UTS::login(){
  
ulang:
  cout <<" +---------------------------------------+ "<< endl;
  cout <<" |        PROGRAM PEMBELIAN BARANG       | "<< endl;
  cout <<" +---------------------------------------+ "<< endl;
  cout <<"  Username       : "; getline(cin,nama);
  cout <<"  Password       : "; cin>>pass;
  cin.ignore();
  cout <<" +---------------------------------------+ "<< endl;

    if(nama=="Ibnu")
    {
      if(pass==150)
      {
        saldo = 300000;
        cout<<"  Alamat Yang Tersimpan\n   1.Yogyakarta\n   2.Sukabumi \n +---------------------------------------+ \n  Pilihan : "; 
		cin>>pilih;
        if(pilih==1)
        {
          alamat = "Yogyakarta";
        }
        else{
          alamat = "Sukabumi";
        }
        
        
      }
      else
      {
        cout << "Username atau Password salah \n";
        
        
		goto ulang;
      }
    }
    else if(nama=="Faris")
    {
      if(pass==169)
      {
        saldo = 100000;
        cout<<"  Alamat Yang Tersimpan\n   1.Karawang\n   2.Bandung \n +---------------------------------------+ \n  Pilihan : "; 
		cin>>pilih;
        if(pilih==1)
        {
          alamat = "Karawang";
        }
        else{
          alamat = "Bandung";
        }
        
        
      }
      else
        {
        cout<<" Username atau Password salah \n";
        
		
		goto ulang;
        }
    }
    else if(nama=="Arisandi")
    {
      if(pass==160){
        saldo = 200000;
        cout<<"  Alamat Yang Tersimpan\n   1.Kebumen\n   2.Belitung \n +---------------------------------------+ \n  Pilihan : ";
		cin>>pilih;
        if(pilih==1)
        {
          alamat = "Kebumen";
        }
        else{
          alamat = "Belitung";
        }
        
        
      }
      else
      {
        cout << "Username atau Password salah \n";
        
		
		goto ulang;
      }
    }
    else
    {
      cout << "Username atau Password salah \n";
      
	  
	  goto ulang;
    }		
}

// Menu
  void UTS::menu(){

  	cin.ignore();

menu1:
	cout <<" +---------------------------------------+ "<< endl;
	cout <<" |        PROGRAM PEMBELIAN BARANG       | "<< endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  Nama 	 : "<<nama<<endl;
	cout <<"  Alamat : "<<alamat<<endl;
 	cout <<"  Saldo  : "<<saldo<<endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"             Perlengkapan Toko             "<< endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  1.Kebutuhan Mandi "<<endl;
	cout <<"  2.Kebutuhan Pria  "<<endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  Pencarian Barang : "; getline(cin,cari);
	cout <<" +---------------------------------------+ "<< endl;
		
menu2:
	if(cari=="Kebutuhan Mandi" || cari=="1" ){
	
	cout <<" +---------------------------------------+ "<< endl;
	cout <<" |        PROGRAM PEMBELIAN BARANG       | "<< endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  Nama 	 : "<<nama<<endl;
	cout <<"  Alamat : "<<alamat<<endl;
 	cout <<"  Saldo  : "<<saldo<<endl;
	cout <<" +---------------------------------------+ "<< endl;	
	cout <<" |              Daftar Barang            | "<< endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  1.SABUN CITRA\t\t\t= Rp.3.000\n";
	cout <<"  2.PEPSODENT (KECIL)\t= Rp.8.000\n";
	cout <<"  3.SIKAT GIGI (1 PACK)\t= Rp.9.000\n";
	cout <<"  4.SAMPO CLEAR (400ml)\t= Rp.10.000\n";
	cout <<"  5.SABUN LIFEBOY\t\t= Rp.3.000\n";
	cout <<" +---------------------------------------+ "<< endl;
	}
	else{
		cout<<" Menu sedang dalam pengembangan "<<endl;
		

		goto menu1;
	}

	do{
	cout<<"  Pilihan\n  1.Beli Barang\n  2.Selesai\n";
	cout<<" +---------------------------------------+ "<<endl;
	cout<<"  Pilihan : "; cin>>pilihan;
	cout<<" +---------------------------------------+ "<<endl;

cin.ignore();
		
		switch (pilihan)
		{
		case 1:
			if(top==max-1){
			cout <<"Keranjang Penuh" << endl;
			} 
			else
			{
			top++;
      		cout<<" *Masukan nama barang dengan huruf kapital\n ";
      		cout<<"+---------------------------------------+ "<<endl;
      		cout<<"  Contoh SABUN LIFEBOY, SIKAT GIGI, dll\n ";
      		cout<<"+---------------------------------------+ "<<endl;
			cout<<"  Pilih Barang  : "; getline(cin,keranjang[top]);
			cout<<" +---------------------------------------+ "<<endl;
			cout<<"  Jumlah Barang : "; cin >> jumlah[top];
			cout<<" +---------------------------------------+ "<<endl;
			
			for(int a = 0; a<=top; a++)
			if(keranjang[a]=="SABUN CITRA" || keranjang[a]=="1")
			{
				harga=3000*jumlah[a];
			}
			else if(keranjang[a]=="PEPSODENT" || keranjang[a]=="2"){
				harga=8000*jumlah[a];
			}
			else if(keranjang[a]=="SIKAT GIGI" || keranjang[a]=="3"){
				harga=9000*jumlah[a];
			}
			else if(keranjang[a]=="SAMPO CLEAR" || keranjang[a]=="4"){
				harga=10000*jumlah[a];
			}
			else if(keranjang[a]=="SABUN LIFEBOY" || keranjang[a]=="5"){
				harga=3000*jumlah[a];
			}
		
			else{
				cout<<" Barang Tidak ada "<<endl;
				harga=0;
			}
				
		cout << " Barang berhasil ditambah\n ";
		cout << endl << endl;
		cout << " Isi keranjang  "<< endl;
		
		for(int a = 0; a<=top; a++){
			cout <<" "<<a+1<<". "<<keranjang[a]<<" = "<<jumlah[a]<<endl;
		}
	
	total2+=harga;	
	total+=harga;
					
			
			
			goto menu2;
			break;
		}
	
		case 2:
		cout << "\n Isi keranjang  "<< endl;
		
		for(int a = 0; a<=top; a++){
			cout <<" "<<a+1<<". "<<keranjang[a]<<" = "<<jumlah[a]<<endl;
		}
			break;
		
		default:
			cout <<" Pilihan salah\n ";
			
			
			goto menu2;
		}
		
	cout<<" Total Harga : "<<total<<endl;
	
	}while(pilihan !=2);
  	
  } 

// Diskon
  void UTS::potong(){
  	
cout<<" \n Gunakan Kode Voucher untuk pembelian lebih murah "<<endl;
cout<<" Apakah anda ingin melihat kode voucher yang tersedia ? "<<endl<<endl;

cout<<" Jawaban ( Y/N ) : "; cin>>jawab;


cout<<endl;

if(jawab=="Y" || jawab=="y"){
	cout <<" +--------------------------------------------------------------------------------------------------------------+ "<< endl;
	cout <<" |                                              List Kode Voucher                                               | "<< endl;
	cout <<" +--------------------------------------------------------------------------------------------------------------+ "<< endl;
	cout <<"  1. Diskon 10% s/d 20 rb "<<endl;
	cout <<"     Ketentuan Berlaku : Kode Voucher dapat digunakan untuk daerah Yogyakarta, Bandung, Jakarta, Bangka, Belitung "<<endl;
	cout <<"  2. Gratis ongkir minimal pembelian 50 rb "<<endl;
	cout <<"     Ketentuan Berlaku : Kode Voucher dapat digunakan untuk pengiriman ke berbagai daerah di Indonesia "<<endl;
	cout <<" +--------------------------------------------------------------------------------------------------------------+ "<< endl;
	cout <<"  Kode Voucher : "; cin>>kode;
	cout <<" +--------------------------------------------------------------------------------------------------------------+ "<< endl;

if(kode==1){
	if(alamat=="Yogyakarta" || alamat=="Bandung" || alamat=="Jakarta" || alamat=="Bangka" || alamat=="Belitung"){
		if(total*0.1>20000){
			diskon=20000;
		}
		else{
			diskon=total*0.1;
		}
		cout<<"  Kode voucher berhasil digunakan "<<endl;
		
		}
	else{
	cout<<"  Maaf anda tidak dapat menggunakan voucher diskon ini "<<endl;
	
	}
	kurir();
}
else if(kode==2){
	if(total>=50000){
		cout<<"  Kode voucher berhasil digunakan "<<endl;
		
		kurir();
		potongan=ongkir;
		
		total-=potongan;
	
	}
	else{
	cout<<"  Maaf anda tidak dapat menggunakan voucher diskon ini "<<endl;
	
	kurir();
	}
}	
}
else{
	diskon=0;
}

	total-=diskon;
	
}

// Ekspedisi
  void UTS::kurir(){
	cout <<" +---------------------------------------+ "<< endl;	
	cout <<" |            Daftar Ekspedisi           | "<< endl;
	cout <<" +---------------------------------------+ "<< endl;
  	cout <<"  1.J&T\n  2.JnE\n";
  	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  Pilih jasa pengirim : ";
	cin >> opsi1;
	cout <<" +---------------------------------------+ "<< endl;
	
	if(opsi1==1){
		cout <<"  1.Reguler\t = Rp16.000\n";
		cout <<"  2.Kargo\t = Rp20.000\n";
		cout <<"  3.Express\t = Rp25.000\n";
		cout <<" +---------------------------------------+ "<< endl;
    cout <<"  Pilih paket : ";
		cin >> opsi2;
		switch (opsi2){
			case 1:
				ongkir=16000;
				break;
			case 2:
				ongkir=20000;
				break;
			case 3:
				ongkir=25000;
			default:
				cout << "  Paket tidak ditemukan "<<endl;
		}
	}else{
		cout <<"  1.Reguler\t = Rp15.000\n";
		cout <<"  2.Kargo\t = Rp20.000\n";
		cout <<"  3.Express\t = Rp25.000\n";
		cout <<" +---------------------------------------+ "<< endl;
    cout <<"  Pilih paket : ";
		cin >> opsi2;
		switch (opsi2){
			case 1:
				ongkir=15000;
				break;
			case 2:
				ongkir=20000;
				break;
			case 3:
				ongkir=25000;
			default:
				cout << "  Paket tidak ditemukan "<<endl;
		}
	}

	total+=ongkir;
	cout<<endl;
  }

// Asuransi
void UTS::assuransi()
{
	cout << " Apakah anda ingin menambahkan asuransi ? "<<endl;;
	cout << " Jawaban ( Y/N ) : ";
    cin >> asuransi;
    if(asuransi=="Y" || asuransi=="y"){
cout << " +---------------------------------------+ "<< endl;	
cout << " |               Asuransi                | "<< endl;
cout << " +---------------------------------------+ "<< endl;
cout << "  Biaya Assurasi = 1000 "<<endl;
cout << "  Biaya Admin    = 500  "<<endl;
        ass=1500;
    }else{
        ass=0;
    }

	total+=ass;	

}

// Pembayaran
void UTS::pembayaran(){

cin.ignore();
	
bayar:	
	cout <<" +---------------------------------------+ "<< endl;	
	cout <<" |               Pembayaran              | "<< endl;
	cout <<" +---------------------------------------+ "<< endl;
	cout <<"  Metode pembayaran yang ingin digunakan \n  1.Tunai ( COD )\n  2.Saldo Account\n +---------------------------------------+ "<<endl;
	cout <<"  Pilihan : "; getline(cin,pilih2);
	cout <<" +---------------------------------------+ "<< endl;
  
	if(pilih2=="Tunai" || pilih2=="1")
	{
		cout<<"  Harga Barang    : "<<total2<<endl;
		cout<<"  Diskon          : "<<diskon<<endl;
		cout<<"  Ongkir          : "<<ongkir<<endl;
		cout<<"  Potongan Ongkir : "<<potongan<<endl<<endl;
		cout<<"  Total Biaya     : "<<total<<endl<<endl;
		cout<<"  Dibayarkan kepada Kurir saat barang sampai "<<endl;
	}
	else if(pilih2=="Saldo Account" || pilih2=="2"){
		if(saldo<total){
			cout<<"  Saldo Account anda tidak cukup "<<endl;
		}
		else if(saldo>=total)
		{
		
		bayar=saldo-total;
		
		cout<<"  Harga Barang    : "<<total2<<endl;
		cout<<"  Diskon          : "<<diskon<<endl;
		cout<<"  Ongkir          : "<<ongkir<<endl;
		cout<<"  Potongan Ongkir : "<<potongan<<endl<<endl;
		cout<<"  Total Biaya     : "<<total<<endl<<endl;
		cout<<"  Sisa saldo      : "<<bayar<<endl;
		}
	}
	else
	{
		cout<<"  Metode pembayaran tidak tersedia "<<endl;
		goto bayar;
	}
}

int main() {
  
  UTS a;
  a.login();
  a.menu();
  a.potong();
  a.assuransi();
  a.pembayaran();
  a.senddata();

}