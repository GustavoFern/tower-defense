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

using namespace std;
using namespace ftxui;

int main()
{
    DibujoTorre T1,T2;
    EspacioTorre E1,E2;
    DibujoMapa M("mapa");
    DibujoBase Ba;
    int x=0,fotograma=0, i, t,  y=6;
    Screen pantalla = Screen::Create(Dimension::Full());
    while (true)
    {
        x=0;
        for ( i = 0; i < 80; i++)
        {
            pantalla.Clear();
            Element Parte_Arriba = hbox(T1.GetElement(),E1.GetElement(),E2.GetElement());
            Element Centro = hbox(M.GetElement(),Ba.GetElement());
            Element Nivel = vbox(Parte_Arriba,Centro);
            Render(pantalla, Nivel);
            this_thread::sleep_for(chrono::milliseconds(800));
            /*if(x>30&&y<25){
                for ( t = 0; t < 19; i++)
                {
                    pantalla.Clear();
                    y++;
                    pantalla.PixelAt(x,y).character = " .-.";
                    pantalla.PixelAt(x,y+1).character = "(o.o)";
                    pantalla.PixelAt(x,y+2).character = " |=|";
                    pantalla.Print();
                }
                
            }*/
            pantalla.PixelAt(x,y).character = " .-.";
            pantalla.PixelAt(x,y+1).character = "(o.o)";
            pantalla.PixelAt(x,y+2).character = " |=|";
            pantalla.Print();
            x++;
        }
    }
    return 0;
}
