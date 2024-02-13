<?php

// Deklarasi Class
class Dpr {
    private $nama;
    private $id;
    private $bidang;
    private $partai;
    private $fotoProfil;

    // Konstruktor
    public function __construct($nama, $id, $bidang, $partai, $fotoProfil) {
        $this->nama = $nama;
        $this->id = $id;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->fotoProfil = $fotoProfil;
    }

    // Getter dan Setter
    
    // Get nama
    public function getNama() {
        return $this->nama;
    }

    // Set nama
    public function setNama($nama) {
        $this->nama = $nama;
    }

    // Get id
    public function getId() {
        return $this->id;
    }

    // Set id
    public function setId($id) {
        $this->id = $id;
    }

    // Get bidang
    public function getBidang() {
        return $this->bidang;
    }

    // Set bidang
    public function setBidang($bidang) {
        $this->bidang = $bidang;
    }

    // Get partai
    public function getPartai() {
        return $this->partai;
    }

    // Set partai
    public function setPartai($partai) {
        $this->partai = $partai;
    }

    // Get foto profil
    public function getFotoProfil() {
        return $this->fotoProfil;
    }

    // Set pfoto profil
    public function setFotoProfil($fotoProfil) {
        $this->fotoProfil = $fotoProfil;
    }
}