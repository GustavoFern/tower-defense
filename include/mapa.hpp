#include <ftxui/dom/elements.hpp>
#include <string>
#include <fstream>

using namespace std;
using namespace ftxui;

class DibujoMapa
{
private:
	fstream archivo;
	Element Contenido;

public:
	DibujoMapa(string path)
	{
		archivo.open(path);
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

	~DibujoMapa() {}
};