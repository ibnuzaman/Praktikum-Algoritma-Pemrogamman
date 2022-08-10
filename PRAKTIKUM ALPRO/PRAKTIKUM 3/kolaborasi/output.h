using namespace std;

class Output{
  public:
    void cetak(){
    cout<<"Struk Pembayaran Kelompok \n";
    cout<<"Daftar menu yang dibeli \n";
    cout<<"Ayam Geprek "<<data_file[0]<<endl;
    cout<<"Ayam Goreng "<<data_file[1]<<endl;
    cout<<"Udamg Goreng "<<data_file[2]<<endl;
    cout<<"Cumi Goreng "<<data_file[3]<<endl;
    cout<<"Ayam Goreng "<<data_file[4]<<endl;
    cout<<"Total Harga "<<data_file[5]<<endl;
    cout<<"Total Diskon "<<data_file[6]<<endl;
    cout<<"Jumlah yang harus dibayar : "<<data_file[7]<<endl;
  }
void getData(){
    ambil_data.open("../dummy/out.proses.txt");
    while(!ambil_data.eof()){
      ambil_data>>data_file[index];
      index += 1;
     
    }
    ambil_data.close();
  }
  private:
    ifstream ambil_data;
    string data_file[40];
    int index = 0;
};