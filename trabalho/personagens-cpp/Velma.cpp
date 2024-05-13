#include "../personagens-hpp/Velma.hpp"

Velma::Velma(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Velma::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Velma::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Velma::pegarDescricao() 
{
    return "Gente, fantasmas não existem";
}