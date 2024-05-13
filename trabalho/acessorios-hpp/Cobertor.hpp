#ifndef COBERTOR
#define COBERTOR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Cobertor : public ArmaDefesa
{
    public:
        Cobertor(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif