
#include "header.hh"

Human::Human() // kosntruktor kosong
{
    // default valuenya string
    this->nik = "";
    this->nama = "";
    this->jenis_kelamin = "";
}
Human::Human(string nik, string nama, string jenis_kelamin) // konstruktor parameter
{
    this->nik = nik;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}

string Human::get_nik()
{
    return this->nik;
}
void Human::set_nik(string nik)
{
    this->nik = nik;
}
string Human::get_nama()
{
    return this->nama;
}
void Human::set_nama(string nama)
{
    this->nama = nama;
}
string Human::get_jenis_kelamin()
{
    return this->jenis_kelamin;
}
void Human::set_jenis_kelamin(string jenis_kelamin)
{
    this->jenis_kelamin = jenis_kelamin;
}

// Destructor
Human::~Human()
{
}