#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Abrigo_AntiBombas.hpp"
#include "../acessorios-hpp/Cabo_Tipo_C.hpp"
#include "../acessorios-hpp/Cobertor.hpp"
#include "../acessorios-hpp/Colchao.hpp"
#include "../acessorios-hpp/Desodorante.hpp"
#include "../acessorios-hpp/Estilingue.hpp"
#include "../acessorios-hpp/Fiat_uno.hpp"
#include "../acessorios-hpp/Mesa_de_plastico.hpp"
#include "../acessorios-hpp/Pistola_quantica_5k.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Scooby_doo.hpp"
#include "../personagens-hpp/Velma.hpp"
#include "../personagens-hpp/Fred.hpp"
#include "../personagens-hpp/Daphne.hpp"
#include "../personagens-hpp/Salsicha.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma_forte  = new Pistola_quantica_5k("Pistola quantica 5k vermelha",30,70);
    ArmaAtaque* arma_fraca = new Cabo_Tipo_C("Carregador de Xiaomi",2,15);
    ArmaDefesa* escudo_forte = new Fiat_uno("Fiat uno ano 2005 seminovo", 9);
    ArmaDefesa* escudo_fraco = new Cobertor("Cobertor fino preto", 2);   
    
    Personagem* p1 = new Velma(1, "Velma", 100, arma_fraca, escudo_forte);
    Personagem* p3 = new Scooby_doo(1, "Scooby Doo", 100, arma_forte, escudo_fraco);
    Personagem* p2 = new Fred(2, "Fred", 40, arma_fraca, escudo_fraco);
    Personagem* p4 = new Salsicha(2, "Sasicha", 100, arma_forte, escudo_forte);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();
    return 0;
}