import Comm_a
from delay import *

perimetre_roue = 216.7879893098 #mm
nb_pas_1_tour = 16*200

def Tout_droit(mm,sens):#sens = Avant, not sens = arriere
	nb_pas = int(nb_pas_1_tour/perimetre_roue)
	Comm_a.Write_to_arduino(f"moteur ttd {nb_pas} {sens}")

if __name__ == '__main__':
	Tout_droit(5,True)