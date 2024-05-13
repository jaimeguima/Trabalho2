#include "../personagens-hpp/Fred.hpp"

Fred::Fred(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Fred::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Fred::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Fred::pegarDescricao() 
{
    return "Gostou da minha armadilha?";
}