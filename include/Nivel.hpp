#pragma once
#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
#include <torre.hpp>
#include <mapa.hpp>
#include <base.hpp>
#include <espacioDeTorre.hpp>

class Nivel
{
private:
    
public:
    Nivel(){};
    ~Nivel(){};

    Element DibujarNivel(){
        DibujoTorre T1,T2;
        EspacioTorre E1,E2; 
        DibujoMapa End("./assets/images/MapaEnd.txt"),Spawn("./assets/images/MapaSpawn.txt"),Void1("./assets/images/AreaBasia.txt"),Void2("./assets/images/AreaBasia.txt");
        DibujoMapa CamHor1("./assets/images/MapaHorizontal.txt"),CamHor2("./assets/images/MapaHorizontal.txt"),CamHor3("./assets/images/MapaHorizontal.txt"),CamHor4("./assets/images/MapaHorizontal.txt");
        DibujoMapa Abajo("./assets/images/MapaGiroAbajo.txt"),Derecha("./assets/images/MapaGiroDerecha.txt");
        DibujoMapa CamVer("./assets/images/MapaVertical.txt");
        DibujoBase Ba;
        Element Parte1 = hbox(Void1.GetElement(),T1.GetElement(),Void1.GetElement(),E1.GetElement());
        Element Parte2 = hbox(Spawn.GetElement(),CamHor1.GetElement(),CamHor2.GetElement(),CamHor3.GetElement(),Abajo.GetElement());
        Element Parte3 = hbox(Void1.GetElement(),Void1.GetElement(),Void1.GetElement(),E2.GetElement(),CamVer.GetElement(),T2.GetElement());
        Element Parte4 = hbox(Void1.GetElement(),Void1.GetElement(),Void1.GetElement(),Derecha.GetElement(),CamHor4.GetElement(),End.GetElement(),Ba.GetElement());
        Element Nivel = vbox(Parte1,Parte2,Parte3,Parte4);
        return Nivel;
    }
};
