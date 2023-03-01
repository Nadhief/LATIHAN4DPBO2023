# import kelsa human karena sivitas akademik merupakan anak dari kelas human
from Human import Human
# membuat kelas sivitias akademik
class SivitasAKademik(Human):
    # kelas ini memiliki 2 atribut private
    __asal_univ = ""
    __email_univ =""
    
    # konstruktor yang paramternya berisi atribut orangtuanya dan atribut aslinya 
    def __init__(self, nik="", nama="", jenis_kelamin="", asal_univ = "", email_univ = ""):
        # supet untuk menjalankan init kelas orangtuanya    
        super().__init__(nik, nama, jenis_kelamin)
        self.__asal_univ = asal_univ
        self.__email_univ = email_univ
        
    # getter setter
    # get asal_univ
    def get_asal_univ(self):
        return self.__asal_univ
    # set asal_univ
    def set_asal_univ(self, asal_univ):
        self.__asal_univ = asal_univ
    # get email_univ
    def get_email_univ(self):
        return self.__email_univ
    # set email_univ
    def set_email_univ(self, email_univ):
        self.__email_univ = email_univ
        
    