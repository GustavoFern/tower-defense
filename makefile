output = bin
source = src
include = -Iinclude
dependencias = -lftxui-screen -lftxui-dom -lftxui-component
flags = -std=c++2a $(dependencias) $(include)

$(output)/TDGprueba : $(source)/prueba.cpp
	g++ -o $@ $< $(flags)

$(output)/TDG : $(source)/main.cpp
	g++ -o $@ $< $(flags)

run : $(output)/TDG
	./$<

runPrueba : $(output)/TDGprueba
	./$<	