#include <iostream>

using namespace std;


struct DetailAlamat{
    string desa;
    string kota;
};

struct Mahasiswa{
     string nim;
    string nama;
    DetaliAlamat alamat;
    int umur;
};


int main(){
    Mahasiswa mhs[3];
    for (int i=0;i<3;i++){
        cout <<"Data ke-"<<(i+1)<<":"<<endl;
        cout << "Nomor Mahasiswa : ";
        getline(cin , mhs.nim);
        cout <<"Nama Mahasiswa : ";
        getline(cin , mhs.nama);



        cin >> mhs.nama;
        cout << "Alamat Mahasiswa "<<endl;
        cout << "it Nama Desa: ";
        cin >> mhs,alamat.desa;
        cout << "\t Nama Kota
        cin>> mhs.alamat.kota;

        cout << "Unur Mahasiswa: ";
        cin >> mhs.umur;
    }
    
    for (int i=0;i<3;i++){
        cout << endl;
        cout <<"Data Mahasiswa ke-"<<(i+1)<<":"<<endl
        cout <<"\n NIM: "<<mhs.nim;
        cout << "\n Nama: "<< mhs.nama;
        cout << "in Alamat:";
        cout << "\n \t Desa: "<< mhs.alamat.desa;
        cout << "\n \t Kota: "<< mhs.alamat.kota;
        cout << "in umur:"<<mhs.umur;
        cout<<endl;
    }
 }   
