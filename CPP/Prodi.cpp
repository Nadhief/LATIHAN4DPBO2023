#include "header.hh"

Prodi::Prodi() // kosntruktor kosong
{
    // default value nya string
    this->nama_prodi = "";
    this->kode = "";
}
Prodi::Prodi(string nama_prodi, string kode, Course course, Mahasiswa mahasiswa, Dosen dosen)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course = course;
    this->mahasiswa = mahasiswa;
    this->dosen = dosen;
    
}

// GETTERS AND SETTERS
string Prodi::get_nama_prodi()
{
    return this->nama_prodi;
}
void Prodi::set_nama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

string Prodi::get_kode()
{
    return this->kode;
}
void Prodi::set_kode(string kode)
{
    this->kode = kode;
}

Course Prodi::get_course()
{
    return course;
}

void Prodi::set_course(Course course)
{
    this->course = course;
}

Mahasiswa Prodi::get_mahasiswa()
{
    return mahasiswa;
}

void Prodi::set_mahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa = mahasiswa;
}

Dosen Prodi::get_dosen()
{
    return dosen;
}

void Prodi::set_dosen(Dosen dosen)
{
    this->dosen = dosen;
}

Prodi::~Prodi() // destruktor
{

}