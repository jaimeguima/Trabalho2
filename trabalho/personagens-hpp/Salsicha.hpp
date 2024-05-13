#ifndef SALSICHA
#define SALSICHA
#include "../core-simulador-hpp/Personagem.hpp"
class Salsicha : public Personagem
{
    public:
        Salsicha(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif