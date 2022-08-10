using namespace std;

class proses{
  public:
void getData(){
  ambil_data.open("../Dummy/out_input.txt");
  x=1;
  while(!ambil_data.eof()){
switch(x){
  case 1:
ambil_data>>banyak_ayamgpk;
  x++;
    break;
  
  case 2:
ambil_data>>banyak_ayamgr;
  x++;
    break;
  
  case 3:
ambil_data>>banyak_udanggr;
  x++;
    break;
  
  case 4:
ambil_data>>banyak_cumigr;
  x++;
    break;
  
  case 5:
ambil_data>>banyak_ayambk;
  x++;
    break;
    }
  }
  ambil_data.close();
}

void hitung(){
    if(harga>25000){
    potongan=ongkir-3000;
    total=harga;
}
  else if(harga>50000){
    potongan=ongkir-5000;
    diskon=(total*15)/100;
    total=harga-diskon;
}
  else if(harga>150000){
    potongan=ongkir-8000;
    diskon=(total*35)/100;
    total=harga-diskon;
}
}

void toFile(){
  harga = (hrg_ayamgr*banyak_ayamgr)+(hrg_ayamgpk*banyak_ayamgpk)+(hrg_ayambk*banyak_ayambk)+(hrg_udanggr*banyak_udanggr)+(hrg_cumigr*banyak_cumigr);

    tulis_data.open("../pra_data/proses.txt");
    tulis_data<<total<<endl;
    tulis_data<<diskon<<endl;
    tulis_data<<potongan<<endl;
    hitung();
    
    tulis_data.close();
}

  private:
ifstream ambil_data;
ofstream tulis_data;

int banyak_ayamgr;
int banyak_ayambk;
int banyak_udanggr;
int banyak_cumigr;
int banyak_ayamgpk;
int hrg_ayamgr = 17000;
int hrg_ayambk = 25000;
int hrg_udanggr = 19000;
int hrg_cumigr = 20000;
int hrg_ayamgpk = 21000;
int x, ongkir;
float diskon, total, potongan, harga;

};