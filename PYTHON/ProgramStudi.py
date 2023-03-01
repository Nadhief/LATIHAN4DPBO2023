# import kelas course, mahasiswa dan dosen karena program studi memiliki has a realtionship atau komporit dengan ketiga kelas tersebut
from Course import Course
from Mahasiswa import Mahasiswa
from Dosen import Dosen
# membuat kelas prograsm studi
class ProgramStudi:
    # kelas ini memiliki 2 atribut private bertipe string dan 3 atribut private bertipe objek
    __nama_prodi = ""
    __kode =""
    __course = Course()
    __mhs = Mahasiswa()
    __dsn = Dosen()
    
    # konstruktor 
    def __init__(self, nama_prodi = "", kode = "", course = Course(), mhs = Mahasiswa(), dsn = Dosen()):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__course = course
        self.__mhs = mhs
        self.__dsn = dsn
        
    # getter setter
    # get nama_prodi
    def get_nama_prodi(self):
        return self.__nama_prodi
    # set nama_prodi
    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi
    # get kode
    def get_kode(self):
        return self.__kode
    # set kode
    def set_kode(self, kode):
        self.__kode = kode
    # get course
    def get_course(self):
        return self.__course
    # set course
    def set_course(self, course):
        self.__course = course
    # get mhs
    def get_mhs(self):
        return self.__mhs
    # set mhs
    def set_mhs(self, mhs):
        self.__mhs = mhs
    # get dsn
    def get_dsn(self):
        return self.__dsn
    # set dsn
    def set_dsn(self, dsn):
        self.__dsn = dsn
        
    