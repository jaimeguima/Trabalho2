#ifndef DAPHNE
#define DAPHNE
#include "../core-simulador-hpp/Personagem.hpp"
class Daphne : public Personagem
{
    public:
        Daphne(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif