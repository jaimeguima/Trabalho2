#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Pistola_quantica_5k.hpp"

Pistola_quantica_5k::Pistola_quantica_5k(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Pistola_quantica_5k::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Pistola_quantica_5k::gerarRuidoAtaque()
{
    return "Kbooooooooom Kboooooooooooooooooom";
}
