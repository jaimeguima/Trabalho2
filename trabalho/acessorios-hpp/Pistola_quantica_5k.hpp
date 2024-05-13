#ifndef PISTOLA
#define PISTOLA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Pistola_quantica_5k : public ArmaAtaque
{
    public:
        Pistola_quantica_5k(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif