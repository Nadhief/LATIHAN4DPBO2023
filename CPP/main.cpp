#include "header.hh"

int main()
{
        // proses input data mata kuliah ke list
        vector<Course> dcourse;
        Course course1("Grafikom");
        dcourse.push_back(course1);
        Course course2("Data Mining");
        dcourse.push_back(course2);

        // proses input data dosen ke list
        vector<Dosen> ddosen;
        Dosen dosen1("nik101", "Rasim", "Laki-laki", "UPI", "rasim@upi.edu", "nip0303", "S2", "Membuat segitiga", "MIPA");
        ddosen.push_back(dosen1);
        Dosen dosen2("nik102", "Yudee", "Laki-laki", "UPI", "Yudee@upi.edu", "nip0303", "S2", "Membuat database", "MIPA");
        ddosen.push_back(dosen2);

        // prose input data mahasiswa ke list
        vector<Mahasiswa> dmahasiswa;
        Mahasiswa mahasiswa1("nik001", "Nadhief", "Laki-laki", "UPI", "Nadhiefai@upi.edu", "nim1206", "MIPA");
        dmahasiswa.push_back(mahasiswa1);
        Mahasiswa mahasiswa2("nik002", "Athallah", "Laki-laki", "UPI", "Athallah@upi.edu", "nim1207", "MIPA");
        dmahasiswa.push_back(mahasiswa2);
        
        // proses input data proid ke list
        vector<Prodi> dprodi;
        Prodi prodi1("IlmuKomputer", "IK1", dcourse[0], dmahasiswa[0], ddosen[0]);
        dprodi.push_back(prodi1);
        Prodi prodi2("Kimia", "Km1", dcourse[1], dmahasiswa[1], ddosen[1]);
        dprodi.push_back(prodi2);

        for (int i = 0; i < dprodi.size(); i++)
        {
                cout << "Nik : " << dprodi[i].get_mahasiswa().get_nik() << '\n'; 
                cout << "Nama : " << dprodi[i].get_mahasiswa().get_nama() << '\n';
                cout << "Jenis kelamin : " << dprodi[i].get_mahasiswa().get_jenis_kelamin() << '\n';
                cout << "Asal univ : " << dprodi[i].get_mahasiswa().get_asal_univ() << '\n';
                cout << "Email edu : " << dprodi[i].get_mahasiswa().get_email_edu() << '\n';
                cout << "Fakultas : " << dprodi[i].get_mahasiswa().get_fakultas() << '\n';
                cout << "Prodi : " << dprodi[i].get_nama_prodi() << '\n';
                cout << "Kode : " << dprodi[i].get_kode() << '\n';
                cout << "Nim : " << dprodi[i].get_mahasiswa().get_nim() << '\n';
                cout << "Dosen : " << dprodi[i].get_dosen().get_nip() << '\n';
                cout << "Pendidikan terakhir : " << dprodi[i].get_dosen().get_pend_terakhir() << '\n';
                cout << "Keahlian : " << dprodi[i].get_dosen().get_keahlian() << '\n';
                cout << "Fakultas : " << dprodi[i].get_dosen().get_fakultas() << '\n';
                cout << "Matakuliah : " << dprodi[i].get_course().get_nama_matkul() << '\n';
                cout << "====================================================================" << '\n';
        }


}