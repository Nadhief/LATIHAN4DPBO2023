
#include "header.hh"

Mahasiswa::Mahasiswa() // kosntruktor koosng
    : SivitasAkademik() // ini artinya Mahasiswa inheritance sivitas akademik
{
    // default valuenya string
    this->nim = "";
    this->fakultas = "";
}
Mahasiswa:: Mahasiswa(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nim, string fakultas)
    : SivitasAkademik(nik, nama, jenis_kelamin, asal_univ, email_edu)
{
    this->nim = nim;
    this->fakultas = fakultas;
}

// GETTER & SETTER
string Mahasiswa::get_nim()
{
    return this->nim;
}

void Mahasiswa::set_nim(string nim)
{
    this->nim = nim;
}

string Mahasiswa::get_fakultas()
{
    return this->fakultas;
}

void Mahasiswa::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

Mahasiswa::~Mahasiswa() // Destruktor 
{

}