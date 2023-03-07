
#include "header.hh"

Dosen::Dosen() // kosntruktor koosng
    : SivitasAkademik() // ini artinya dosen inheritance sivitas akademik
{
    // default valuenya string
    this->nip = "";
    this->pend_terakhir = "";
    this->keahlian = "";
    this->fakultas = "";
}
Dosen:: Dosen(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu, string nip, string pend_terakhir, string keahlian, string fakultas)
    : SivitasAkademik(nik, nama, jenis_kelamin, asal_univ, email_edu)
{
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

// GETTER & SETTER
string Dosen::get_nip()
{
    return this->nip;
}

void Dosen::set_nip(string nip)
{
    this->nip = nip;
}

string Dosen::get_fakultas()
{
    return this->fakultas;
}

void Dosen::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Dosen::get_pend_terakhir()
{
    return this->pend_terakhir;
}

void Dosen::set_pend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

string Dosen::get_keahlian()
{
    return this->keahlian;
}

void Dosen::set_keahlian(string keahlian)
{
    this->keahlian = keahlian;
}


Dosen::~Dosen() // Destruktor 
{

}