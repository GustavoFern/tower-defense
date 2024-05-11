#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <string>
#include <fstream>
#include <thread>
#include <chrono>
#include <Nivel.hpp>

using namespace std;
using namespace ftxui;

int main()
{
    Nivel N;
    int x = 0, i, t, y = 6;
    Screen pantalla = Screen::Create(Dimension::Full());
    while (true)
    {
        x = 0;
        y = 6;
        for (i = 0; i < 67; i++)
        {
            if (x > 39 && y < 16)
            {
                this_thread::sleep_for(chrono::milliseconds(500));
                Element DNivel = N.DibujarNivel();
                Render(pantalla, DNivel);
                pantalla.PixelAt(x, y).character = " .-. ";
                pantalla.PixelAt(x, y + 1).character = "(o.o)";
                pantalla.PixelAt(x, y + 2).character = " |=| ";
                pantalla.Print();
                y++;
                pantalla.Clear();
            }
            else
            {
                this_thread::sleep_for(chrono::milliseconds(500));
                Element DNivel = N.DibujarNivel();
                Render(pantalla, DNivel);
                pantalla.PixelAt(x, y).character = " .-. ";
                pantalla.PixelAt(x, y + 1).character = "(o.o)";
                pantalla.PixelAt(x, y + 2).character = " |=| ";
                pantalla.Print();
                x++;
                pantalla.Clear();
            }
        }
    }
    return 0;
}
