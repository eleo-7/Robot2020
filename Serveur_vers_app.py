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

app=Flask(__name__)

@app.route('/')
def base():
    return "Vous etes bien arrives a la base du serveur"
@app.route('/avance/<int:g>/<int:d>/<int:sens>')
def avancer(g,d,sens):
    if sens == 0:
        g=g*(-1)
        d=d*(-1)
    #charge la fonction 'avance' qui existe deja et renvoie vers l'arduino
    return(f"On avance de {g}cm,{d}cm")

if __name__ == '__main__':
    app.run(host='0.0.0.0')