#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Abrigo_AntiBombas.hpp"

Abrigo_antibombas::Abrigo_antibombas(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Abrigo_antibombas::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Abrigo_antibombas::getResistencia() 
{
    return this->resistencia;
}