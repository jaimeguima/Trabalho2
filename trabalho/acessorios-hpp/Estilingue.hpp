#ifndef ESTILINGUE
#define ESTILINGUE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Estilingue : public ArmaAtaque
{
    public:
        Estilingue(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif