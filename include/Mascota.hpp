#include <iostream>
#include <string>
#include <cstdio>

class Mascota
{
private:
    std::string nombre;
public:
    Mascota(/* args */) {
        std::cout<<"Ha Nacido una nueva mascota."<<std::endl;
        this->nombre =  "Firulais";
    }
    void Inicializar(){
        std::cout<<"Ha Nacido una nueva mascota."<<std::endl;
        this->nombre =  "Firulais";
    }


    ~Mascota() {
        std::cout<<"Adios Mundo cruel."<<std::endl;
    }
    void Destruir(){
        std::cout<<"Adios Mundo cruel."<<std::endl;
    }

    void DecirNombre(){
        std::cout<<"Mi Nombre es: "<< this->nombre <<std::endl;
    }
};