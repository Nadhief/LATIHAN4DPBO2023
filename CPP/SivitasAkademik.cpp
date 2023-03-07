
#include "header.hh"

SivitasAkademik::SivitasAkademik() // konstruktor kosong
    : Human() // artinya sivitas akademik inheritance human
{
    this->asal_univ = "";
    this->email_edu = "";
}
SivitasAkademik::SivitasAkademik(string nik, string nama, string jenis_kelamin, string asal_univ, string email_edu) // kosntruktor parameter
    : Human(nik, nama, jenis_kelamin) // artinya sivitas akademik inheritance human dan menjalankan kosntruktor human
{
    this->asal_univ = asal_univ;
    this->email_edu = email_edu;
}

// SETTER & GETTER
string SivitasAkademik::get_asal_univ()
{
    return asal_univ;
}
void SivitasAkademik::set_asal_univ(string asal_univ)
{
    this->asal_univ = asal_univ;
}
string SivitasAkademik::get_email_edu()
{
    return email_edu;
}
void SivitasAkademik::set_email_edu(string email_edu)
{
    this->email_edu = email_edu;
}

SivitasAkademik::~SivitasAkademik() // destruktor
{

}