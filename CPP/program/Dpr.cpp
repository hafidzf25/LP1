// Import Library
#include <iostream>
#include <string>

// Using standard namespace
using namespace std;

// Deklarasi Class, di C++ tidak perlu kapital, tetapi lebih baik menggunakannya.
class DPR {

    // Private attribut untuk anggota DPR
    private:
        string id, nama, bidang, partai;

    // Public attribut untuk anggota DPR
    public:

        // Constructor Blank/Kosong, yang tidak mengembalikan suatu nilai terhadap atribut
        DPR() {
            this->id = "";
            this->nama = "";
            this->bidang = "";
            this->partai = "";
        }

        // Constructor dengan parameter, yang dimana akan memberikan nilai terhadap atribut tersebut
        DPR(string id, string nama, string bidang, string partai) {
            // Objek atribut tersebut akan diberikan nilai sesuai dengan bawaan dari parameter
            this->id = id;
            this->nama = nama;
            this->bidang = bidang;
            this->partai = partai;
        }

        // Getter and Setter

        // Get id 
        string get_id() {
            return this->id;
        }

        // Set id
        void set_id(string id) {
            this->id = id;
        }

        // Get name
        string get_name() {
            return this->nama;
        }

        // Set name
        void set_name(string nama) {
            this->nama = nama;
        }

        // Get bidang
        string get_bidang() {
            return this->bidang;
        }

        // Set bidang
        void set_bidang(string bidang) {
            this->bidang = bidang;
        }

        // Get partai
        string get_partai() {
            return this->partai;
        }

        // Set partai
        void set_partai(string partai) {
            this->partai = partai;
        }

        // Set semua atribut sesuai dengan parameter yang dibawa
        void set_semua(string id, string nama, string bidang, string partai) {
            set_id(id), set_name(nama), set_bidang(bidang), set_partai(partai);
        }

        // Destructors 
        ~DPR() {

        }
};