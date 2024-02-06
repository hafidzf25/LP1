// Import library and files
#include <bits/stdc++.h>
#include "Dpr.cpp"

// Using standard namespace
using namespace std;

int main() {
    
    // Deklarasi list untuk data anggota DPR
    list<DPR> llist;

    // Instansiasi objek untuk penyimpanan sementara
    DPR temp;

    // String yang akan digunakan untuk menampung atribut id, nama, bidang, partai sebelum dimasukkan ke dalam object
    string id, nama, bidang, partai;

    // Choose untuk memilih nomor fitur CRUD, ind untuk penentu suatu persyaratan (if), i untuk loop
    int choose = 0, ind = 0, i = 0;  

    // Instansiasi objek menggunakan konstruktor parameternya
    DPR Megilitik("1", "Megawati", "Kesehatan", "PKM");

    DPR Ganjra; // Instansiasi objek menggunakan konstruktor default
    Ganjra.set_id("2"); // Set id objek Ganjra
    Ganjra.set_name("Ganjar"); // Set nama objek Ganjra
    Ganjra.set_bidang("Kesakitan"); // Set bidang objek Ganjra
    Ganjra.set_partai("PKL"); // Set partai objek Ganjra

    // Instansiasi objek menggunakan konstruktor parameternya
    DPR Abdul("3", "Abdullah", "Kesaktian", "DPMB");

    // Memasukkan objek yang sudah dibuat tadi ke dalam list
    llist.push_back(Megilitik);
    llist.push_back(Ganjra);
    llist.push_back(Abdul);

    system("cls"); // reset tampilan

    // Proses pembuatan tabel 

    int pjgID = 4, pjgNama = 6, pjgBidang = 8, pjgPartai = 8;
            
    for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        if (it->get_id().length() + 2 > pjgID)
        {
            pjgID = it->get_id().length() + 2;
        }
        if (it->get_name().length() + 2 > pjgNama)
        {
            pjgNama = it->get_name().length() + 2;
        }
        if (it->get_bidang().length() + 2 > pjgBidang)
        {
            pjgBidang = it->get_bidang().length() + 2;
        }
        if (it->get_partai().length() + 2 > pjgPartai)
        {
            pjgPartai = it->get_partai().length() + 2;
        }
    }
    
    for (int table = 0; table < pjgID + pjgNama + pjgBidang + pjgPartai + 5; table++)
    {
        cout << "=";
    }
    cout << "\n| ID";
    for (int table = 0; table < pjgID - 3; table++)
    {
        cout << " ";
    }
    cout << "| Nama";
    for (int table = 0; table < pjgNama - 5; table++)
    {
        cout << " ";
    }
    cout << "| Bidang";
    for (int table = 0; table < pjgBidang - 7; table++)
    {
        cout << " ";
    }
    cout << "| Partai";
    for (int table = 0; table < pjgPartai - 7; table++)
    {
        cout << " ";
    }
    cout << "|" << endl;
    for (int table = 0; table < pjgID + pjgNama + pjgBidang + pjgPartai + 5; table++)
    {
        cout << "=";
    }

    for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << "\n| " << it->get_id();
        for (int table = 0; table < (pjgID - it->get_id().length() - 1); table++)
        {
            cout << " ";
        }
        cout << "| " << it->get_name();
        for (int table = 0; table < pjgNama - it->get_name().length() - 1; table++)
        {
            cout << " ";
        }
        cout << "| " << it->get_bidang();
        for (int table = 0; table < pjgBidang - it->get_bidang().length() - 1; table++)
        {
            cout << " ";
        }
        cout << "| " << it->get_partai();
        for (int table = 0; table < pjgPartai - it->get_partai().length() - 1; table++)
        {
            cout << " ";
        }
        cout << "|";
    }
    cout << endl;
    for (int table = 0; table < pjgID + pjgNama + pjgBidang + pjgPartai + 5; table++)
    {
        cout << "=";
    }
    cout << endl << endl;
    
    // Proses pengulangan fitur yang akan digunakan pada program
    do
    {
        // Penampilan fitur yang disediakan ke user
        cout << "=====================================" << endl;
        cout << "=             LIST FITUR            =" << endl;
        cout << "=====================================" << endl;
        cout << "= 1. Menambah Data                  =" << endl; 
        cout << "= 2. Mengubah Data                  =" << endl;
        cout << "= 3. Menghapus Data                 =" << endl;
        cout << "= 4. Menampilkan Data               =" << endl;
        cout << "= 5. Keluar                         =" << endl;
        cout << "=====================================" << endl;
        cout << "= Pilih nomor fitur yang digunakan : ";
        cin >> choose; // Input int untuk menentukan fitur yang akan digunakan

        if (choose == 1) // Apabila fitur yang dipilih adalah Create Data
        {
            system("cls"); // pembersihan tampilan
                
            cout << "Masukkan ID : ";
            cin >> id; // Input ID dulu, untuk mengecek apakah ID sudah ada dalam data
            ind = 0; // inisialisasi penentu apakah akan lanjut create Data

            // Perulangan untuk mencari si ID yang ingin di Create
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++) 
            {
                if (it->get_id() == id) // Apabila object id sekarang sama dengan id yang ingin di create
                {
                    ind = 1; // maka set 1 si penentu
                }
            }

            // Apabila tidak ada / 0, maka lanjut input data untuk dimasukkan ke dalam suatu object, lalu ke list
            if (ind == 0) { 
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan Bidang : ";
                cin >> bidang;
                cout << "Masukkan Partai : ";
                cin >> partai;

                temp.set_semua(id, nama, bidang, partai); // Memanggil method set semua atribut
                llist.push_back(temp); // Masukkan object baru ke dalam list

                system("cls");

                // Display berhasil
                cout << "=====================================" << endl;
                cout << "= Data berhasil ditambahkan." << endl; 
                cout << "=====================================" << endl << endl;
            }
            // Apabila ID yang diinput sudah ada dalam list
            else {
                // Display gagal create
                cout << "=====================================" << endl;
                cout << "= Mohon maaf, id sudah ada dalam data." << endl; 
                cout << "=====================================" << endl << endl;
            }
        }
        else if(choose == 2) { // Apabila fitur yang ingin dipilih adalah Update Data
            system("cls");

            // Pencarian ID data yang ingin diubah
            cout << "Masukkan ID dari Anggota DPR yang ingin diubah : ";
            cin >> id;

            // Inisialisasi iterator list dari awal
            list<DPR>::iterator it = llist.begin();
            ind = 0; // penentu

            // Proses pencarian data yang ingin diubah
            while (ind == 0 && it != llist.end())
            {
                if (it->get_id() == id) // Apabila dalam list terdapat id yang sama dengan id yang ingin di update
                {
                    cout << "\n=====================================" << endl;
                    cout << "= ID ditemukan! Silahkan update." << endl; 
                    cout << "=====================================" << endl << endl;

                    // Input nama, bidang, partai yang baru (update)
                    cout << "Masukkan Nama : ";
                    cin >> nama;
                    cout << "Masukkan Bidang : ";
                    cin >> bidang;
                    cout << "Masukkan Partai : ";
                    cin >> partai;

                    // Set atribut diatas dengan yang baru ke dalam list tersebut
                    it->set_name(nama); 
                    it->set_bidang(bidang);
                    it->set_partai(partai);

                    ind = 1; // Memberhentikan proses perulangan
                }
                it++; // Iterasi ke elemen list selanjutnya
            }

            system("cls");

            if (ind == 0) { // Apabila tidak terdapat ID yang ingin diubah / update
                cout << "=====================================" << endl;
                cout << "= Mohon maaf, id tidak ditemukan." << endl; 
                cout << "=====================================" << endl << endl;
            }
            else // Apabila terdapat ID yang ingin diubah
            {
                cout << "=====================================" << endl;
                cout << "= Data berhasil diubah." << endl; 
                cout << "=====================================" << endl << endl;
            }
        }
        else if(choose == 3) { // Apabila fitur yang ingin dipilih adalah Delete Data
            auto hapus = llist.begin(); // Inisialisasi ke awal list
            system("cls");

            // Proses pencarian ID dari anggota yang ingin dihapus
            cout << "Masukkan ID dari Anggota DPR yang ingin dihapus : ";
            cin >> id;
            ind = 0;

            // Looping untuk mencari anggota yang ingin dihapus
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                if (it->get_id() == id) // Apabila ditemukan dalam list nya
                {
                    hapus = it; // catat posisi dalam list tersebut
                    ind = 1; // Set 1 untuk menandakan bahwa ada data yang dihapus
                }
            }

            system("cls");

            if(ind == 1) { // Apabila ada data yang ingin dihapus, maka lakukan erase dalam list
                cout << "=====================================" << endl;
                cout << "= Data berhasil dihapus." << endl; 
                cout << "=====================================" << endl << endl;
                llist.erase(hapus);
            }
            else // Apabila tidak ada, maka display gagal hapus
            {
                cout << "=====================================" << endl;
                cout << "= Data tidak ditemukan, tidak ada yang dihapus." << endl; 
                cout << "=====================================" << endl << endl;
            }
        }
        else if(choose == 4) { // // Apabila fitur yang ingin dipilih adalah Read Data
            system("cls");

            // Proses pembuatan tabel beserta penampilan data anggota DPR

            pjgID = 4, pjgNama = 6, pjgBidang = 8, pjgPartai = 8;
            
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                if (it->get_id().length() + 2 > pjgID)
                {
                    pjgID = it->get_id().length() + 2;
                }
                if (it->get_name().length() + 2 > pjgNama)
                {
                    pjgNama = it->get_name().length() + 2;
                }
                if (it->get_bidang().length() + 2 > pjgBidang)
                {
                    pjgBidang = it->get_bidang().length() + 2;
                }
                if (it->get_partai().length() + 2 > pjgPartai)
                {
                    pjgPartai = it->get_partai().length() + 2;
                }
            }
            
            for (int table = 0; table < pjgID + pjgNama + pjgBidang + pjgPartai + 5; table++)
            {
                cout << "=";
            }
            cout << "\n| ID";
            for (int table = 0; table < pjgID - 3; table++)
            {
                cout << " ";
            }
            cout << "| Nama";
            for (int table = 0; table < pjgNama - 5; table++)
            {
                cout << " ";
            }
            cout << "| Bidang";
            for (int table = 0; table < pjgBidang - 7; table++)
            {
                cout << " ";
            }
            cout << "| Partai";
            for (int table = 0; table < pjgPartai - 7; table++)
            {
                cout << " ";
            }
            cout << "|" << endl;
            for (int table = 0; table < pjgID + pjgNama + pjgBidang + pjgPartai + 5; table++)
            {
                cout << "=";
            }

            i = 0;

            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << "\n| " << it->get_id();
                for (int table = 0; table < (pjgID - it->get_id().length() - 1); table++)
                {
                    cout << " ";
                }
                cout << "| " << it->get_name();
                for (int table = 0; table < pjgNama - it->get_name().length() - 1; table++)
                {
                    cout << " ";
                }
                cout << "| " << it->get_bidang();
                for (int table = 0; table < pjgBidang - it->get_bidang().length() - 1; table++)
                {
                    cout << " ";
                }
                cout << "| " << it->get_partai();
                for (int table = 0; table < pjgPartai - it->get_partai().length() - 1; table++)
                {
                    cout << " ";
                }
                cout << "|";
                i++;
            }
            cout << endl;
            for (int table = 0; table < pjgID + pjgNama + pjgBidang + pjgPartai + 5; table++)
            {
                cout << "=";
            }
            cout << endl << endl;

            if (i == 0)
            {
                cout << "Data tidak ada." << endl;
            }

            cout << "=====================================" << endl;
            cout << "Rekap berhasil ditampilkan." << endl << endl; 
        }
        else if(choose == 5) { // Apabila fitur yang ingin dipilih adalah Exit Program
            system("cls"); 
            cout << "Selamat beristirahat~" << endl;
        }
        else // Apabila masukan selain dari nomor yang terdapat dalam rincian fitur di atas
        {
            system("cls");
            cout << "=====================================" << endl;
            cout << "= Maaf, nomor fitur yang dipilih tidak ada." << endl; 
            cout << "=====================================" << endl << endl;   
        }
    } while (choose != 5); // Looping program

    return 0;
}