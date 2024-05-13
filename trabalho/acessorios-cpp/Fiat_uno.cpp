#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Fiat_uno.hpp"

Fiat_uno::Fiat_uno(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Fiat_uno::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Fiat_uno::getResistencia() 
{
    return this->resistencia;
}