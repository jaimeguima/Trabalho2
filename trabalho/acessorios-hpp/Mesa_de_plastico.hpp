#ifndef MESA
#define MESA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Mesa_de_plastico : public ArmaDefesa
{
    public:
        Mesa_de_plastico(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif