#ifndef SCOOBY
#define SCOOBY
#include "../core-simulador-hpp/Personagem.hpp"
class Scooby_doo : public Personagem
{
    public:
        Scooby_doo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif