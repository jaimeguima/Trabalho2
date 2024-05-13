#ifndef ABRIGO
#define ABRIGO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Abrigo_antibombas : public ArmaDefesa
{
    public:
        Abrigo_antibombas(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif