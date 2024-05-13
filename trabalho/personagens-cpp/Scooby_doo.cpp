#include "../personagens-hpp/Scooby_doo.hpp"

Scooby_doo::Scooby_doo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Scooby_doo::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Scooby_doo::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Scooby_doo::pegarDescricao() 
{
    return "Scooby Dooby Doo!!!";
}