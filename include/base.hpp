#include <ftxui/dom/elements.hpp>
#include <string>
#include <fstream>

using namespace std;
using namespace ftxui;

class DibujoBase
{
private:
    fstream archivo;
    Element Contenido;

public:
    DibujoBase()
    {
        archivo.open("/workspaces/tower-defense/assets/images/Base.txt");
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

    ~DibujoBase() {}
};