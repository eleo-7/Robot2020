#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Feb 18 12:30:45 2020

@author: eleonore
"""

from flask import Flask,request,escape
from flask import render_template
import os 
import random
import Controle_moteurs as mot

app=Flask(__name__)

@app.route('/')
def base():
    return "Vous etes bien arrives a la base du serveur"
@app.route('/avance/<int:g>/<int:d>/<int:sens>')
def avancer(g,d,sens):
    if sens == 0:
        g=g*(-1)
        d=d*(-1)
    mot.Tout_droit(g,d)
    return(f"On avance de {g}cm,{d}cm")


@app.route('/tourne/<int:deg>/<int:sens>')#sens 1 = ccw, 0 = cw
def tourner(deg,sens):
	if sens == 1 :
		sens = True
	else :
		sens = False
	mot.Tourner(deg,sens)
	return (f"On tourne de {deg} degres")

if __name__ == '__main__':
    app.run(host='0.0.0.0')