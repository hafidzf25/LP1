# Import class file
from Dpr import Dpr

# Instansiasi tanpa argument untuk default
Owo = Dpr()
Owo.setName("Prabowo")
Owo.setId("2")
Owo.setBidang("Kesehatan")
Owo.setPartai("Laskar")
oTemp = Dpr()

# Instansiasi dengan argument untuk menentukan isi dari datanya
Amis = Dpr("Anies", "1", "Pendidikan", "Golkar")
Banjar = Dpr("Ganjar", "3", "Bel", "PDI")

# Array untuk menampung anggota DPR
anggotaDPR = []

# Memasukkan ke array
anggotaDPR.append(Amis)
anggotaDPR.append(Owo)
anggotaDPR.append(Banjar)

# Membuat Tabel
pjgID = int(4)
pjgName = int(6)
pjgBidang = int(8)
pjgPartai = int(8)

for Dpr in anggotaDPR:
    if (len(Dpr.getName()) + 2 > pjgName):
        pjgName = len(Dpr.getName()) + 2
    if (len(Dpr.getId()) + 2 > pjgID):
        pjgID = len(Dpr.getId()) + 2
    if (len(Dpr.getBidang()) + 2 > pjgBidang):
        pjgBidang = len(Dpr.getBidang()) + 2
    if (len(Dpr.getPartai()) + 2 > pjgPartai):
        pjgPartai = len(Dpr.getPartai()) + 2

for i in range(pjgID + pjgName + pjgBidang + pjgPartai + 5):
    print("=", end="")
print("\n| ID", end="")

for i in range(pjgID - 3):
    print(" ", end="")
print("| Nama", end="")

for i in range(pjgName - 5):
    print(" ", end="")
print("| Bidang", end="")

for i in range(pjgBidang - 7):
    print(" ", end="")
print("| Partai", end="")

for i in range(pjgPartai - 7):
    print(" ", end="")
print("|")

for i in range(pjgID + pjgName + pjgBidang + pjgPartai + 5):
    print("=", end="")
print("")

for Dpr in anggotaDPR:
    print("| " + Dpr.getId(), end="")
    for i in range(pjgID - len(Dpr.getId()) - 1):
        print(" ", end="")
    print("| " + Dpr.getName(), end="")
    for i in range(pjgName - len(Dpr.getName()) - 1):
        print(" ", end="")
    print("| " + Dpr.getBidang(), end="")
    for i in range(pjgBidang - len(Dpr.getBidang()) - 1):
        print(" ", end="")
    print("| " + Dpr.getPartai(), end="")
    for i in range(pjgPartai - len(Dpr.getPartai()) - 1):
        print(" ", end="")
    print("|")
    for i in range(pjgID + pjgName + pjgBidang + pjgPartai + 5):
        print("=", end="")
    print("")

# Loop untuk variabel penentu pada while
loop = int(1)

while loop == 1:
    print("\n====================================")
    print("=            LIST FITUR            =")
    print("====================================")
    print("= 1. Menambah Data                 =")
    print("= 2. Mengubah Data                 =")
    print("= 3. Menghapus Data                =")
    print("= 4. Menampilkan Data              =")
    print("= 5. Keluar                        =")
    print("====================================")
    fitur = int(input("= Pilih nomor fitur yang digunakan : "))

    if fitur == 1: # Fitur apabila menambah data
        id = input("Masukkan ID Baru : ") # Input ID Baru
        flag = 1 # Flag untuk menentukan apakah ditambah atau tidak
        for Dpr in anggotaDPR: # Pengecekan apakah sudah ada dalam array atau tidak
            if id == Dpr.getId():
                flag = 0 # False apabila sudah ditemukan datanya
        if flag == 1: # Apabila True, maka ditambahkan
            name = input("Masukkan Nama : ")
            bidang = input("Masukkan Bidang : ")
            partai = input("Masukkan Partai : ")
            oTemp.setName(name)
            oTemp.setId(id)
            oTemp.setBidang(bidang)
            oTemp.setPartai(partai)
            anggotaDPR.append(oTemp)
            print("\n====================================")
            print("= Berhasil menambahkan data")
            print("====================================")
        else: # Apabila False, data sudah ada dalam array
            print("\n====================================")
            print("= ID Sudah ada dalam data")
            print("====================================")
    elif fitur == 2: # Fitur untuk mengubah data
        id = input("Masukkan ID yang ingin diubah : ") # Input ID yang ingin diubah datanya
        flag = 0 # Flag untuk menentukan apakah akan diubah atau tidak
        for Dpr in anggotaDPR:
            if id == Dpr.getId(): # Apabila ditemukan dalam array, maka diubah
                name = input("Masukkan Nama : ")
                bidang = input("Masukkan Bidang : ")
                partai = input("Masukkan Partai : ")
                Dpr.setName(name)
                Dpr.setBidang(bidang)
                Dpr.setPartai(partai)
                print("\n====================================")
                print("= Berhasil mengubah data")
                print("====================================")
                flag = 1 # Set true
        if flag == 0: # Apabila false, tidak ada yg diubah
            print("\n====================================")
            print("= ID tidak ditemukan")
            print("====================================")
    elif fitur == 3: # Fitur untuk menghapus data
        id = input("Masukkan ID yang ingin dihapus : ") # Input ID yang ingin dihapus
        flag = 0
        for Dpr in anggotaDPR: # 
            if id == Dpr.getId(): # Apabila ID nya ditemukan dalam array, maka dihapus
                anggotaDPR.remove(Dpr) # Hapus data dalam array
                print("\n====================================")
                print("= Berhasil menghapus data")
                print("====================================")
                flag = 1
        if flag == 0:
            print("\n====================================")
            print("= ID tidak ditemukan")
            print("====================================")
    elif fitur == 4: # Fitur untuk menampilkan data

        # Proses pembuatan table, kaya biasa lah ya pls

        pjgID = int(4)
        pjgName = int(6)
        pjgBidang = int(8)
        pjgPartai = int(8)

        for Dpr in anggotaDPR:
            if (len(Dpr.getName()) + 2 > pjgName):
                pjgName = len(Dpr.getName()) + 2
            if (len(Dpr.getId()) + 2 > pjgID):
                pjgID = len(Dpr.getId()) + 2
            if (len(Dpr.getBidang()) + 2 > pjgBidang):
                pjgBidang = len(Dpr.getBidang()) + 2
            if (len(Dpr.getPartai()) + 2 > pjgPartai):
                pjgPartai = len(Dpr.getPartai()) + 2

        for i in range(pjgID + pjgName + pjgBidang + pjgPartai + 5):
            print("=", end="")
        print("\n| ID", end="")

        for i in range(pjgID - 3):
            print(" ", end="")
        print("| Nama", end="")

        for i in range(pjgName - 5):
            print(" ", end="")
        print("| Bidang", end="")

        for i in range(pjgBidang - 7):
            print(" ", end="")
        print("| Partai", end="")

        for i in range(pjgPartai - 7):
            print(" ", end="")
        print("|")

        for i in range(pjgID + pjgName + pjgBidang + pjgPartai + 5):
            print("=", end="")
        print("")

        for Dpr in anggotaDPR:
            print("| " + Dpr.getId(), end="")
            for i in range(pjgID - len(Dpr.getId()) - 1):
                print(" ", end="")
            print("| " + Dpr.getName(), end="")
            for i in range(pjgName - len(Dpr.getName()) - 1):
                print(" ", end="")
            print("| " + Dpr.getBidang(), end="")
            for i in range(pjgBidang - len(Dpr.getBidang()) - 1):
                print(" ", end="")
            print("| " + Dpr.getPartai(), end="")
            for i in range(pjgPartai - len(Dpr.getPartai()) - 1):
                print(" ", end="")
            print("|")
            for i in range(pjgID + pjgName + pjgBidang + pjgPartai + 5):
                print("=", end="")
            print("")
    elif fitur == 5: # Fitur untuk keluar dari program
        print("\n====================================")
        print("= Selamat tinggal ~")
        print("====================================\n")
        loop = 0
    else: # Fitur lainnya apabila mengetik angka selain 1 - 5
        print("\n====================================")
        print("= Mohon maaf, fitur tidak tersedia ~")
        print("====================================\n")