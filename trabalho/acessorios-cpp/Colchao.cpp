#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Colchao.hpp"

Colchao::Colchao(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Colchao::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Colchao::getResistencia() 
{
    return this->resistencia;
}