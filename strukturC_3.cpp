#inlcude <iostream>

using namespace std;

struct DetaliAlamat{
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
    Mahasiswa mhs;

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

    cout << endl;
    cout <<"\n NIM: "<<mhs.nim;
    cout << "\n Nama: "<< mhs.nama;
    cout << "in Alamat:";
    cout << "\n \t Desa: "<< mhs.alamat.desa;
    cout << "\n \t Kota: "<< mhs.alamat.kota;
    cout << "in mur: "<< nhs.umur;
}
}