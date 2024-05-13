#ifndef FRED    
#define FRED    
#include "../core-simulador-hpp/Personagem.hpp"
class Fred : public Personagem
{
    public:
        Fred(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif