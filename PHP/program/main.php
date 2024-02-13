<?php

require ('Dpr.php');

// Membuat objek anggota DPR dan menambahkannya
$dpr1 = new Dpr("Amies", "1", "Medis", "Golkar", "foto1.png");
$dpr2 = new Dpr("Owo", "2", "AD", "PKS", "foto2.jpg");
$dpr3 = new Dpr("Banjir", "3", "Kejedot Bel", "PDI", "foto3.jpg");

// Mendeklarasikan array dan memasukkan object yang telah dibuat
$daftarAnggota = [];
array_push($daftarAnggota, $dpr1);
array_push($daftarAnggota, $dpr2);
array_push($daftarAnggota, $dpr3);

// Menampilkan hasil tambah data 

echo "Menambahkan data dan menampilkan daftar anggota DPR";

echo "<table border='2'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>Nama</th>";
echo "<th>Bidang</th>";
echo "<th>Partai</th>";
echo "<th>Foto Profil</th>";
echo "</tr>";

foreach ($daftarAnggota as $anggota) {
    echo "<tr>";
    echo "<td>" . $anggota->getId() . "</td>";
    echo "<td>" . $anggota->getNama() . "</td>";
    echo "<td>" . $anggota->getBidang() . "</td>";
    echo "<td>" . $anggota->getPartai() . "</td>";
    echo "<td><img src='" . $anggota->getFotoProfil() . "' alt='Foto Profil' width='100' height='100'></td>";
    echo "</tr>";
}
echo "</table>";

// Mengubah data yang telah dibuat

$dpr1->setNama("Amiez");
$dpr1->setId("01");
$dpr1->setBidang("Rohani");
$dpr1->setPartai("Laskar");
$dpr1->setFotoProfil("foto2.jpg");

// Menampilkan hasil

echo "Mengubah data id ke 1 dan menampilkan daftar anggota DPR";

echo "<table border='2'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>Nama</th>";
echo "<th>Bidang</th>";
echo "<th>Partai</th>";
echo "<th>Foto Profil</th>";
echo "</tr>";

foreach ($daftarAnggota as $anggota) {
    echo "<tr>";
    echo "<td>" . $anggota->getId() . "</td>";
    echo "<td>" . $anggota->getNama() . "</td>";
    echo "<td>" . $anggota->getBidang() . "</td>";
    echo "<td>" . $anggota->getPartai() . "</td>";
    echo "<td><img src='" . $anggota->getFotoProfil() . "' alt='Foto Profil' width='100' height='100'></td>";
    echo "</tr>";
}
echo "</table>";

// Menghapus data id nomer 1

// Mencari dengan loop ke array daftar anggota
foreach ($daftarAnggota as $key => $anggota) {
    if ($anggota->getId() == "1") {
        unset($daftarAnggota[$key]);
    }
}

// Menampilkan hasil

echo "Menghapus data id ke 1 dan menampilkan daftar anggota DPR";

echo "<table border='2'>";
echo "<tr>";
echo "<th>ID</th>";
echo "<th>Nama</th>";
echo "<th>Bidang</th>";
echo "<th>Partai</th>";
echo "<th>Foto Profil</th>";
echo "</tr>";

foreach ($daftarAnggota as $anggota) {
    echo "<tr>";
    echo "<td>" . $anggota->getId() . "</td>";
    echo "<td>" . $anggota->getNama() . "</td>";
    echo "<td>" . $anggota->getBidang() . "</td>";
    echo "<td>" . $anggota->getPartai() . "</td>";
    echo "<td><img src='" . $anggota->getFotoProfil() . "' alt='Foto Profil' width='100' height='100'></td>";
    echo "</tr>";
}
echo "</table>";

?>