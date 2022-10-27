from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow

import sys



class Window(QMainWindow):
   def __init__(self):
      super(Window,self).__init__()

      self.setWindowTitle("barev qez")
      self.setGeometry(300,250,350,200)

      self.new_txt = QtWidgets.QLabel(self)

      self.main_text = QtWidgets.QLabel(self)
      self.main_text.setText("knopka")
      self.main_text.move(140,100)
      self.main_text.adjustSize()

      self.btn = QtWidgets.QPushButton(self)
      self.btn.move(70,150)
      self.btn.setText("clic mi")
      self.btn.setFixedWidth(200)
      self.btn.clicked.connect(self.add_lible)
      
  

   def add_lible(self):
      self.new_txt.setText("mos")
      self.new_txt.move(150,50)
     # self.new_txt.adjustSize()


def applicacion ():
   app = QApplication(sys.argv)
   window =  Window ()



   window.show()
   sys.exit(app.exec_())

if __name__=="__main__":
   applicacion()

