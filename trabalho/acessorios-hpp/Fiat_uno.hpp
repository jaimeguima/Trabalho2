#ifndef FIATUNO
#define FIATUNO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Fiat_uno : public ArmaDefesa
{
    public:
        Fiat_uno(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif