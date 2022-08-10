using namespace std;

class Input{
  public:
      void cetak (){
        cout<<"kedai ayam super manteb \n";
        cout<<"daftar menu  :\n";
        cout<<"1.ayam geprek  Rp.21000\n";
        cout<<"2.ayam goreng  Rp.17000\n";
        cout<<"3.udang goreng Rp.19000\n";
        cout<<"4.cumi goreng  Rp.20000\n";
        cout<<"5.ayam bakar   Rp.25000\n";
        cout<<"pesan ayam geprek  ="; cin >> bnyk_aymGP;
        cout<<"pesan ayam goreng  ="; cin >> bnyk_aymGR;
        cout<<"pesan udang goreng ="; cin >> bnyk_udGR;
        cout<<"pesan cumi goreng  ="; cin >> bnyk_cmGR;
        cout<<"pesan ayam bakar   ="; cin >> bnyk_aymBK;
      }
      void toFile(){
        tulis_data.open("../pra_data/input.txt");
        tulis_data << bnyk_aymGP << endl;
        tulis_data << bnyk_aymGR << endl;
        tulis_data << bnyk_udGR << endl;
        tulis_data << bnyk_cmGR << endl;
        tulis_data << bnyk_aymBK << endl;
        tulis_data.close();
      }
    private:
      ofstream tulis_data;
      int bnyk_aymGP,bnyk_aymGR,bnyk_udGR,bnyk_aymBK,bnyk_cmGR;
};