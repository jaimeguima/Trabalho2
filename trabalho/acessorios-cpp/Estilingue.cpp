#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Estilingue.hpp"

Estilingue::Estilingue(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Estilingue::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Estilingue::gerarRuidoAtaque()
{
    return "cush cush";
}
