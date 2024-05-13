#ifndef VELMA
#define VELMA
#include "../core-simulador-hpp/Personagem.hpp"
class Velma : public Personagem
{
    public:
        Velma(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif