import Comm_a
from delay import *
import math

perimetre_roue = 213.471220811 #mm
nb_pas_1_tour = 1*200
distance_entre_2_roues = 175 #mm

def Tout_droit(g,d,vitesse = 0):
	Comm_a.Write_to_arduino(f"moteur;avance;{g};{d}")

def Tourner(deg,direction):#direction = gauche, not direction = droite
	rad = math.radians(deg)
	rayon = distance_entre_2_roues/2
	mm = rad*rayon
	nb_pas = int((nb_pas_1_tour/perimetre_roue)*mm)
	print(nb_pas)
	Comm_a.Write_to_arduino(f"moteur rot;{nb_pas};{direction}")

if __name__ == '__main__':
	Tout_droit(3,True) 