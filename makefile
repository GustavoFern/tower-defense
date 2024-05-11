output = bin
source = src
include = -Iinclude
dependencias = -lftxui-screen -lftxui-dom -lftxui-component
flags = -std=c++2a $(dependencias) $(include)

$(output)/TDG : $(source)/main.cpp
	g++ -o $@ $< $(flags)

run : $(output)/TDG
	./$<	