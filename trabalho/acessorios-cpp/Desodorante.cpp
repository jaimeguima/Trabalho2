#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Desodorante.hpp"

Desodorante::Desodorante(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Desodorante::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Desodorante::gerarRuidoAtaque()
{
    return "Psssssssssssss Psssssssssss";
}
