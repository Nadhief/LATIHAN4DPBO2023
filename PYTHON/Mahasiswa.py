# import kelas sivitas akademik karena kelas mahasiswa merupakan anak dari kelas sivitas akademik
from SivitasAkademik import SivitasAKademik
class Mahasiswa(SivitasAKademik):
    # kelas ini memiliki 2 atribut private untuk menampung nilai nim dan fakultas
    __nim = ""
    __fakultas =""
    
    # konstruktor
    def __init__(self, nik="", nama="", jenis_kelamin="", asal_univ="", email_univ="", nim = "", fakultas = ""):
        # super untuk menjalan init class orangtuanya yaitu sivitas akademik dan human
        super().__init__(nik, nama, jenis_kelamin, asal_univ, email_univ)
        self.__nim = nim
        self.__fakultas = fakultas
     
    # getter setter 
    # get nim
    def get_nim(self):
        return self.__nim
    # set nim
    def set_nim(self, nim):
        self.__nim = nim
    # get fakultas
    def get_fakultas(self):
        return self.__fakultas
    # set fakultas
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
    