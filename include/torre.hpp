#include <ftxui/dom/elements.hpp>
#include <string>
#include <fstream>

using namespace std;
using namespace ftxui;

class DibujoTorre
{
private:
    fstream archivo;
    Element Contenido;

public:
    DibujoTorre()
    {
        archivo.open("/workspaces/tower-defense/assets/images/Torre.txt");
        string linea;
        Elements elementos;
        while (getline(archivo, linea))
        {
            elementos.emplace_back(text(linea));
        }
        Contenido = vbox(elementos);
        archivo.close();
    }

    Element GetElement()
    {
        return this->Contenido;
    }

    ~DibujoTorre() {}
};