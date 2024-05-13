#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Cobertor.hpp"

Cobertor::Cobertor(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Cobertor::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Cobertor::getResistencia() 
{
    return this->resistencia;
}