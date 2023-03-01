# import Class
from Human import Human
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from SivitasAkademik import SivitasAKademik
from ProgramStudi import ProgramStudi
from Course import Course

print("+-------------------------------------------------------------------------------+")
masukanc = [] # -> masukanc merupakan list untuk menampung nilai course
# meng instansiasi / ngenyu course lalu dimasukan kedalam list
masukanc.append(Course("SATISTIKA")) # -> memasukan ke list masukanc
masukanc.append(Course("DPBO")) # -> memasukan ke list masukanc

masukanm = [] # -> masukanm merupakan list untuk menampung nilai mahasiswa
# meng instansiasi / ngenyu mahasiswa lalu dimasukan kedalam list
masukanm.append(Mahasiswa("2003", "Najawa Laila Farida", "Perempuan", "Polban", "Najwalaila.polban.ac.id", "221025", "FEB"))
masukanm.append(Mahasiswa("2003", "Nadhief Athallah Isya", "Laki-laki", "UPI", "Nadhiefathallahi@upi.edu", "211025", "FMIPA"))

masukand = []
# meng instansiasi / ngenyu dosen lalu dimasukan kedalam list
masukand.append(Dosen("n003", "Anny", "Perempuan", "Polban", "Polban.EDU", "21064133", "FEB", "S2", "membuat game"))
masukand.append(Dosen("n003", "Yudi", "laki", "UPI", "Upi.EDU", "21064133", "MIPA", "S3", "mengolah data"))

dataex = []
# meng instansiasi / ngenyu prodi lalu dimasukan kedalam list
dataex.append(ProgramStudi("Akuntansi", "EB203", masukanc[0], masukanm[0], masukand[0]))
dataex.append(ProgramStudi("Ilmu Komputer", "MP203", masukanc[1], masukanm[1], masukand[1]))
# ngeprint data yang sudah di masukan kedalam list
i = 0
for data in dataex:
    print(
          data.get_mhs().get_nama() + " - " + 
          data.get_mhs().get_nim() + " - " + 
          data.get_mhs().get_fakultas() + " - " + 
          data.get_nama_prodi() + " - " + 
          data.get_kode() + " - " + 
          data.get_course().get_nama_matakuliah() + " - " +
          data.get_dsn().get_nama() + " - " + 
          data.get_dsn().get_nip() + " - " + 
          data.get_dsn().get_fakultas() + " - " + 
          data.get_dsn().get_pend_terakhir() + " - " + 
          data.get_dsn().get_keahlian()
          )
    i+=1
print("+-------------------------------------------------------------------------------+")
# ngeprint data yang sudah dimasukan kedalam list
i = 0
for data in dataex:
    print(data.get_mhs().get_nama() + " - " +
          data.get_mhs().get_nik() + " - " +
          data.get_mhs().get_jenis_kelamin() + " - " +
          data.get_mhs().get_asal_univ() + " - " +
          data.get_mhs().get_email_univ() + " - " +
          data.get_dsn().get_nama() + " - " +
          data.get_dsn().get_nik() + " - " +
          data.get_dsn().get_jenis_kelamin() + " - " +
          data.get_dsn().get_asal_univ() + " - " +
          data.get_dsn().get_email_univ()
          )
    i+=1
