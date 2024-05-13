#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Mesa_de_plastico.hpp"

Mesa_de_plastico::Mesa_de_plastico(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Mesa_de_plastico::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Mesa_de_plastico::getResistencia() 
{
    return this->resistencia;
}