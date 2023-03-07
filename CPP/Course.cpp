
#include "header.hh"

Course::Course() // kosnturkto kosong
{
    this->nama_matkul = ""; // default value nya string
}

Course::Course(string nama_matkul) // kostruktor parameter
{
    // CONSTRUCTOR
    this->nama_matkul = nama_matkul;
}

// GETTER & SETTER
string Course::get_nama_matkul()
{
    return this->nama_matkul;
}

void Course::set_nama_matkul(string nama_matkul)
{
    this->nama_matkul = nama_matkul;
}


Course::~Course() // destruktor 
{

}