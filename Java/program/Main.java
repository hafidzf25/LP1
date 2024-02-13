// import library

package Java.program;
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // [Method #1] : Instansiasi object menggunakan default constructor dan setter getter

        Dpr Susilo = new Dpr();
        Susilo.setName("Susilo");
        Susilo.setid("1");
        Susilo.setBidang("Mikat");
        Susilo.setPartai("KEMAKOM");

        // [Method #2] : Instansiasi objek menggunakan konstruktor dengan parameter
        Dpr Mega = new Dpr("Mega", "3", "IT", "PDI");
        Dpr Ganjra = new Dpr("Ganjra", "2", "Farmasi", "PDI");

        // Another method, deklarasi i dan n untuk keperluan crud nanti, deklarasi string untuk data si dpr
        int i, n = 0;
        String name, id, bidang, partai;

        // Another useful data structure u can use
        ArrayList<Dpr> list = new ArrayList<>();
        list.add(Susilo); list.add(Ganjra); list.add(Mega); // Memasukkan data yang sudah dibuat ke dalam list

        int pjgName = 6, pjgId = 4, pjgBidang = 8, pjgPartai = 8; // Template panjang table untuk masing masing kolom

        // Proses pembuatan table

        for(i = 0; i < list.size(); i++) {
            if (list.get(i).getid().length() + 2 > pjgId)
            {
                pjgId = list.get(i).getid().length() + 2;
            }
            if (list.get(i).getName().length() + 2 > pjgName)
            {
                pjgName = list.get(i).getName().length() + 2;
            }
            if (list.get(i).getBidang().length() + 2 > pjgBidang)
            {
                pjgBidang = list.get(i).getBidang().length() + 2;
            }
            if (list.get(i).getPartai().length() + 2 > pjgPartai)
            {
                pjgPartai = list.get(i).getPartai().length() + 2;
            }
        }

        for (int table = 0; table < pjgId + pjgName + pjgBidang + pjgPartai + 5; table++)
        {
            System.out.print("=");
        }
        System.out.print("\n| ID");
        for (int table = 0; table < pjgId - 3; table++)
        {
            System.out.print(" ");
        }
        System.out.print("| Nama");
        for (int table = 0; table < pjgName - 5; table++)
        {
            System.out.print(" ");
        }
        System.out.print("| Bidang");
        for (int table = 0; table < pjgBidang - 7; table++)
        {
            System.out.print(" ");
        }
        System.out.print("| Partai");
        for (int table = 0; table < pjgPartai - 7; table++)
        {
            System.out.print(" ");
        }
        System.out.print("|\n");
        for (int table = 0; table < pjgId + pjgName + pjgBidang + pjgPartai + 5; table++)
        {
            System.out.print("=");
        }
        System.out.print("\n");

        for (i = 0; i < list.size(); i++)
        {
            System.out.print("| " + list.get(i).getid());
            for (int table = 0; table < (pjgId - list.get(i).getid().length() - 1); table++)
            {
                System.out.print(" ");
            }
            System.out.print("| " + list.get(i).getName());
            for (int table = 0; table < pjgName - list.get(i).getName().length() - 1; table++)
            {
                System.out.print(" ");
            }
            System.out.print("| " + list.get(i).getBidang());
            for (int table = 0; table < pjgBidang - list.get(i).getBidang().length() - 1; table++)
            {
                System.out.print(" ");
            }
            System.out.print("| " + list.get(i).getPartai());
            for (int table = 0; table < pjgPartai - list.get(i).getPartai().length() - 1; table++)
            {
                System.out.print(" ");
            }
            System.out.print("|\n");
        }
        for (int table = 0; table < pjgId + pjgName + pjgBidang + pjgPartai + 5; table++)
        {
            System.out.print("=");
        }
        System.out.print("\n\n");

        int loop = 1; // Variabel penentu loop dalam program nanti
        Scanner sc = new Scanner(System.in); // Scan yang akan digunakan

        // Loop program
        while (loop == 1) {
            

             // Penampilan fitur yang disediakan ke user
            System.out.println("====================================");
            System.out.println("=            LIST FITUR            =");
            System.out.println("====================================");
            System.out.println("= 1. Menambah Data                 =");
            System.out.println("= 2. Mengubah Data                 =");
            System.out.println("= 3. Menghapus Data                =");
            System.out.println("= 4. Menampilkan Data              =");
            System.out.println("= 5. Keluar                        =");
            System.out.println("====================================");
            System.out.print("= Pilih nomor fitur yang digunakan : ");
            int input = sc.nextInt();
            
            // Apabila fitur yang dipilih adalah nomor 1, adalah menambah data
            if (input == 1) {
                System.out.print("Masukkan ID : ");
                id = sc.next(); // Masukkan ID yang ingin ditambahkan
                int cek = 1;
                // Pengecekan apakah sudah ada dalam list
                for(i = 0; i < list.size(); i++) { 
                    if (id.equals(list.get(i).getid())) {
                        cek = 0; // Apabila sudah ada, maka set false agar tidak menambahkan data baru
                    }
                }
                if(cek == 1) { // Apabila true, maka lanjut menambahkan data baru
                    System.out.print("Masukkan Nama : ");
                    name = sc.next();
                    System.out.print("Masukkan Bidang : ");
                    bidang = sc.next();
                    System.out.print("Masukkan Partai : ");
                    partai = sc.next();
                    Dpr temp = new Dpr(); // Temp untuk menampung datanya sebelum dimasukkan ke dalam list
                    temp.setName(name); temp.setid(id);
                    temp.setBidang(bidang); temp.setPartai(partai);
                    list.add(temp); // Memasukkan object ke dalam list

                    System.out.println("\n==============================");
                    System.out.println("= Berhasil menambahkan ~     =");
                    System.out.println("==============================\n");
                }
                else { // apabila false, maka keluarkan output ini
                    System.out.println("\n==============================");
                    System.out.println("= Mohon maaf, ID sudah ada ~ =");
                    System.out.println("==============================\n");
                }
            }
            else if (input == 2) { // Apabila fitur yang dipilih adalah nomor 2, yaitu mengubah data
                System.out.print("Masukkan ID yang ingin diubah : ");
                id = sc.next(); // Input id yang ingin diubah
                int cek = 0;
                // Proses pencarian id yang ingin diubah
                for(i = 0; i < list.size(); i++) {
                    if (id.equals(list.get(i).getid())) { // Apabila ditemukan, maka ubah data nya
                        System.out.print("Masukkan Nama : ");
                        name = sc.next();
                        System.out.print("Masukkan Bidang : ");
                        bidang = sc.next();
                        System.out.print("Masukkan Partai : ");
                        partai = sc.next();
                        list.get(i).setName(name); list.get(i).setid(id);
                        list.get(i).setBidang(bidang); list.get(i).setPartai(partai);

                        cek = 1; // Set true agar menandakan bahwa terdapat perubahan data

                        System.out.println("\n==============================");
                        System.out.println("= Berhasil merubah ~         =");
                        System.out.println("==============================\n");
                    }
                }
                if(cek == 0) { // Apabila false, maka data tidak ada yang diubah
                    System.out.println("\n==============================");
                    System.out.println("= ID tidak ditemukan ~       =");
                    System.out.println("==============================\n");
                }
            }
            else if(input == 3) { // Apabila fitur yang dipilih adalah nomor 3, yaitu menghapus data
                System.out.print("Masukkan ID yang ingin dihapus : ");
                id = sc.next(); // Input id yang ingin dihapus
                int cek = 0; 
                // Proses pencarian ID yang ingin dihapus
                for(i = 0; i < list.size(); i++) {
                    if (id.equals(list.get(i).getid())) { // Apabila ditemukan, maka pada list akan dihapus
                        list.remove(i);
                        cek = 1; // Set true menandakan terdapat data yang dihapus dalam list

                        System.out.println("\n==============================");
                        System.out.println("= Berhasil menghapus ~         =");
                        System.out.println("==============================\n");
                    }
                }
                if(cek == 0) { // Apabila false, maka tidak ada data yang dihapus
                    System.out.println("\n==============================");
                    System.out.println("= ID tidak ditemukan ~       =");
                    System.out.println("==============================\n");
                }
            }
            else if(input == 4) { // Apabila fitur yang dipilih adalah nomor 4, yaitu menampilkan data
                
                // Proses penghitungan panjang table segala macem terus diprint, gitu aja ya. kepanjangan hehe
                System.out.print("\n\n");
                pjgName = 6;
                pjgId = 4;
                pjgBidang = 8;
                pjgPartai = 8; 

                for(i = 0; i < list.size(); i++) {
                    if (list.get(i).getid().length() + 2 > pjgId)
                    {
                        pjgId = list.get(i).getid().length() + 2;
                    }
                    if (list.get(i).getName().length() + 2 > pjgName)
                    {
                        pjgName = list.get(i).getName().length() + 2;
                    }
                    if (list.get(i).getBidang().length() + 2 > pjgBidang)
                    {
                        pjgBidang = list.get(i).getBidang().length() + 2;
                    }
                    if (list.get(i).getPartai().length() + 2 > pjgPartai)
                    {
                        pjgPartai = list.get(i).getPartai().length() + 2;
                    }
                }
        
                for (int table = 0; table < pjgId + pjgName + pjgBidang + pjgPartai + 5; table++)
                {
                    System.out.print("=");
                }
                System.out.print("\n| ID");
                for (int table = 0; table < pjgId - 3; table++)
                {
                    System.out.print(" ");
                }
                System.out.print("| Nama");
                for (int table = 0; table < pjgName - 5; table++)
                {
                    System.out.print(" ");
                }
                System.out.print("| Bidang");
                for (int table = 0; table < pjgBidang - 7; table++)
                {
                    System.out.print(" ");
                }
                System.out.print("| Partai");
                for (int table = 0; table < pjgPartai - 7; table++)
                {
                    System.out.print(" ");
                }
                System.out.print("|\n");
                for (int table = 0; table < pjgId + pjgName + pjgBidang + pjgPartai + 5; table++)
                {
                    System.out.print("=");
                }
                System.out.print("\n");
                
                if (list.size() > 0) {
                    for (i = 0; i < list.size(); i++)
                    {
                        System.out.print("| " + list.get(i).getid());
                        for (int table = 0; table < (pjgId - list.get(i).getid().length() - 1); table++)
                        {
                            System.out.print(" ");
                        }
                        System.out.print("| " + list.get(i).getName());
                        for (int table = 0; table < pjgName - list.get(i).getName().length() - 1; table++)
                        {
                            System.out.print(" ");
                        }
                        System.out.print("| " + list.get(i).getBidang());
                        for (int table = 0; table < pjgBidang - list.get(i).getBidang().length() - 1; table++)
                        {
                            System.out.print(" ");
                        }
                        System.out.print("| " + list.get(i).getPartai());
                        for (int table = 0; table < pjgPartai - list.get(i).getPartai().length() - 1; table++)
                        {
                            System.out.print(" ");
                        }
                        System.out.print("|\n");
                    }
                }
                else {
                    System.out.println("= Data tidak ada.");
                }

                for (int table = 0; table < pjgId + pjgName + pjgBidang + pjgPartai + 5; table++)
                {
                    System.out.print("=");
                }
                System.out.print("\n\n");
            }
            else if(input == 5) { // Apabila fitur yang dipilih adalah nomor 5, maka keluar dari program
                System.out.println("\n==============================");
                System.out.println("= Selamat tinggal ~          =");
                System.out.println("==============================\n");
                loop = 0;
            }
            else { // Apabila selain 1 - 5, maka ulang 
                System.out.println("\n==============================");
                System.out.println("= Nomor yang diinput tidak valid ~ =");
                System.out.println("==============================\n");
            }
        }

        sc.close(); // Penutupan scan
    }
}
