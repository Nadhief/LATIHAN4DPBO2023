# membuat class course 
class Course:
    # kelas ini mempunya 1 atribut private untuk menyimpan nama matakuliah
    __nama_matakuliah = "" 
    
    # kosntruktor berparameter
    def __init__(self, nama_matakuliah = ""):
        self.__nama_matakuliah = nama_matakuliah
    
    # getter setter
    # get nama_matakuliah
    def get_nama_matakuliah(self):
        return self.__nama_matakuliah
    # set nama_matakuliah
    def set_nama_matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah
        
    