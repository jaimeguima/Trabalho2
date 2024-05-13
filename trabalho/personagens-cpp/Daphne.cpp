#include "../personagens-hpp/Daphne.hpp"

Daphne::Daphne(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Daphne::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Daphne::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Daphne::pegarDescricao() 
{
    return " Infelizmente não possuo frase de efeito";
}