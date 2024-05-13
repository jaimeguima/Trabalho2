#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Cabo_Tipo_C.hpp"

Cabo_Tipo_C::Cabo_Tipo_C(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Cabo_Tipo_C::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Cabo_Tipo_C::gerarRuidoAtaque()
{
    return "schlap schlap";
}
