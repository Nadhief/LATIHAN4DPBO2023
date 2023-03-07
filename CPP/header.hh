#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// class course
class Course
{
private:
    string nama_matkul;

public:
    Course();
    Course(string nama_matkul);

    string get_nama_matkul();
    void set_nama_matkul(string nama_matkul);

    ~Course();
};

// class Human
class Human
{
private:
    string nik;
    string nama;
    string jenis_kelamin;

public:
    Human(); // kosntruktor kosoong
    Human(string nik, string nama, string jenis_kelamin); // kosntruktor parameter
    
    string get_nik();
    void set_nik(string nik);
    string get_nama();
    void set_nama(string nama);
    string get_jenis_kelamin();
    void set_jenis_kelamin(string jenis_kelamin);

    ~Human(); // destruktor
};

//  kelas sivitas akademik inheritance human
class SivitasAkademik : public Human
{
private:
// atribut tambahan kelas sivitas akademik
    string asal_univ;
    string email_edu;

public:
    SivitasAkademik(); // konstrukto kosong
    SivitasAkademik(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu); // konstruktor parameter

    string get_asal_univ();
    void set_asal_univ(string asal_univ);
    string get_email_edu();
    void set_email_edu(string email_edu);

    ~SivitasAkademik();
};

// kelas doen inheritance sivitas akademik
class Dosen : public SivitasAkademik
{
private:
    string nip;
    string pend_terakhir;
    string keahlian;
    string fakultas;
public:
    Dosen(); // konstruktor ksong
    Dosen(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nip, string pend_terakhir, string keahlian, string fakultas); // konstruktor parameter

    string get_nip();
    void set_nip(string nip);
    string get_pend_terakhir();
    void set_pend_terakhir(string pend_terakhir);
    string get_keahlian();
    void set_keahlian(string keahlian);
    string get_fakultas();
    void set_fakultas(string fakultas);

    ~Dosen();
};

// kelas mahasiswa inheritance sivitas akdemik
class Mahasiswa : public SivitasAkademik
{
private:
    string nim;
    string fakultas;
public:
    Mahasiswa(); // konstruktor ksong
    Mahasiswa(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nim, string fakultas); // konstruktor parameter

    string get_nim();
    void set_nim(string nim);
    string get_fakultas();
    void set_fakultas(string fakultas);

    ~Mahasiswa();
};

// kelas prodi komposit course , mahasiswa, dan dosen
class Prodi 
{
private:
    string nama_prodi;
    string kode;
    Course course;
    Mahasiswa mahasiswa;
    Dosen dosen;

public:
    Prodi(); // kosntruktor kosong
    Prodi(string nama_prodi, string kode, Course course, Mahasiswa Mahasiswa, Dosen dosen   ); // kosntruktor parameter

    string get_nama_prodi();
    void set_nama_prodi(string nama_prodi);
    string get_kode();
    void set_kode(string kode);
    Course get_course();
    void set_course(Course course);
    Mahasiswa get_mahasiswa();
    void set_mahasiswa(Mahasiswa mahasiswa);
    Dosen get_dosen();
    void set_dosen(Dosen dosen);

    ~Prodi();
};