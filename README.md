# tower-defense-game-(TDG)

## Objetivo
En este proyecto se busca representar un juego del subgenero tower defence utilizando el ascii art, en el cual el jugador podra ver las prinsipales caracteristicas de este tipo de juegos con algunos ejemplos de mapas.


### Exploracion
El género de juegos Tower Defense (Defensa de Torres) es un subgénero de los juegos de estrategia en tiempo real donde el jugador debe defender una ubicación o territorio específico de las incursiones enemigas mediante la construcción y mejora de estructuras defensivas, comúnmente llamadas "torres".

### Descripción del género:

- Objetivo Principal: El objetivo principal en los juegos de Tower Defense es defender una ubicación de las oleadas de enemigos que intentan alcanzarla y destruirla.

- Oleadas de Enemigos: Los juegos de Tower Defense presentan oleadas sucesivas de enemigos con diferentes tipos, velocidades y resistencias. El jugador debe adaptar su estrategia para enfrentar cada oleada con éxito. 

### Carpetas
- bin/ - Contiene los ejecutables del proyecto
- src/ - Contiene el codigo fuente
- include/ - Los archivos de cabecera
- assets/ - Contiene los recuros del proyecto
- docs/ - Contiene la documentacion del proyecto


# Descripcion
- Se le presenta a un jugador un nivel con un mapa el cual tiene un sendero donde crusan los enemigos, al lado del sendero se puede encontrar espacios dedicados para los diferentes tipos de torres.

- La seleccion de las torres sera de suma importancia ya que tener una buena variedad de estas y en un acomodo bien pensado puede ayudarte a tratar con los diversos tipos de enemigos.

- Los siclos de ataque se veran acomodados en base a oleadas las cuales traeran cierto numero de enemigos, las oleadas tendran una duracion dependiente de la cantidad de enemigos vivos, osea los enemigos restantes de la oleada sin un limite de tiempo.

- Pierdes cuando tu base es destruida ya que si los enemigos llegan hasta esta veras una reduccion de la vida de tu base

- Ganas cuando terminas las oleadas con todos los enemigos sin que te destrullan la base.


# Dependencias

## FTXUI
```Bash
git clone https://github.com/ArthurSonzogni/FTXUI.git
sudo apt install cmake
cd FTXUI
mkdir build
cd build
cmake ..
make
sudo make install
```

## Plugins VSCode
- material icon
- plant uml
- c/c++

## GraphViz
```Bash
sudo apt update
sudo apt install graphviz
```

