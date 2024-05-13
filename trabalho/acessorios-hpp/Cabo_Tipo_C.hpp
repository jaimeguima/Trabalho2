#ifndef CABO
#define CABO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Cabo_Tipo_C : public ArmaAtaque
{
    public:
        Cabo_Tipo_C(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif