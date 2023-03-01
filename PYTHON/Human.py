class Human:
    # private
    __nik = ""
    __nama =""
    __jenis_kelamin = ""
    
    def __init__(self, nik = "", nama = "", jenis_kelamin = ""):
        
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin
        
    # get nik
    def get_nik(self):
        return self.__nik
    # set nik
    def set_nik(self, nik):
        self.__nik = nik
    # get nama
    def get_nama(self):
        return self.__nama
    # set nama
    def set_nama(self, nama):
        self.__nama = nama
    # get jenis_kelamin
    def get_jenis_kelamin(self):
        return self.__jenis_kelamin
    # set jenis_kelamin
    def set_jenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin
        
    