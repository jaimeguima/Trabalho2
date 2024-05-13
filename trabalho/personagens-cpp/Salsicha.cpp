#include "../personagens-hpp/Salsicha.hpp"

Salsicha::Salsicha(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Salsicha::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Salsicha::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Salsicha::pegarDescricao() 
{
    return "Scooooby, onde esta voce meu filho?";
}