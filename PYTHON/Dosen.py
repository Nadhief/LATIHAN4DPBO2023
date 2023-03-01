# import sivitas akademik karena dosen merupakan anak dari kelas sivitas akademik
from SivitasAkademik import SivitasAKademik
class Dosen(SivitasAKademik):
    # kelas ini memiliki 4 atribut private
    __nip = ""
    __fakultas =""
    __pend_terakhir = ""
    __keahlian = ""
    
    # konstruktor yang parameternya atribut orangtua dan atribut aslinya
    def __init__(self, nik="", nama="", jenis_kelamin="", asal_univ="", email_univ="", nip = "", fakultas = "", pend_terakhir = "", keahlian = ""):
        # super untuk menjalankan init kelas orangtuanya    
        super().__init__(nik, nama, jenis_kelamin, asal_univ, email_univ)  
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
        
    # get nip
    def get_nip(self):
        return self.__nip
    # set nip
    def set_nip(self, nip):
        self.__nip = nip
    # get fakultas
    def get_fakultas(self):
        return self.__fakultas
    # set fakultas
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
    # get pend_terakhir
    def get_pend_terakhir(self):
        return self.__pend_terakhir
    # set pend_terakhir
    def set_pend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir
    # get keahlian
    def get_keahlian(self):
        return self.__keahlian
    # set keahlian
    def set_keahlian(self, keahlian):
        self.__keahlian = keahlian
        
    