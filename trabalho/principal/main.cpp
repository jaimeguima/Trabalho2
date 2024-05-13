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
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaDefesa* escudo = new Escudo("Latão", 1);
    
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p3 = new Chaves(1, "Chaves Eq1 - Reserva", 100, arma, escudo);
    Personagem* p2 = new Chaves(2, "Chaves Eq2", 40, arma, escudo);
    Personagem* p4 = new Chaves(2, "Chaves Eq2 - Reserva", 100, arma, escudo);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}