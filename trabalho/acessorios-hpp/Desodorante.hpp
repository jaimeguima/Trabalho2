#ifndef DESODORANTE
#define DESODORANTE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Desodorante : public ArmaAtaque
{
    public:
        Desodorante(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif