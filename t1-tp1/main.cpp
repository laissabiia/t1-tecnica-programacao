#include <iostream>
#include "Dominios.h"
#include "Entidades.h"
#include "Testes_dominios.h"
#include "Testes_entidades.h"

using namespace std;

int main()
{
    std::cout << "-----------------------" << std::endl;
    std::cout << "-------DOMINIOS--------" << std::endl;
    std::cout << "-----------------------" << std::endl;
    //-----------------------------------------------------------------------
    // Instanciar Teste de Codigo_pgto.
    //-----------------------------------------------------------------------
    TUCodigo_pgto teste0;

    switch(teste0.run()){
        case TUCodigo_pgto::SUCESSO: cout << "SUCESSO - CODIGO_PGTO" << endl;
                                break;
        case TUCodigo_pgto::FALHA  : cout << "FALHA   - CODIGO_PGTO" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Nome.
    //-----------------------------------------------------------------------
    TUNome teste1;

    switch(teste1.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Estado.
    //-----------------------------------------------------------------------
    TUEstado teste2;

    switch(teste2.run()){
        case TUEstado::SUCESSO: cout << "SUCESSO - ESTADO" << endl;
                                break;
        case TUEstado::FALHA  : cout << "FALHA   - ESTADO" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Setor.
    //-----------------------------------------------------------------------
    TUSetor teste3;

    switch(teste3.run()){
        case TUSetor::SUCESSO: cout << "SUCESSO - SETOR" << endl;
                                break;
        case TUSetor::FALHA  : cout << "FALHA   - SETOR" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Dinheiro.
    //-----------------------------------------------------------------------
    TUDinheiro teste4;

    switch(teste4.run()){
        case TUDinheiro::SUCESSO: cout << "SUCESSO - DINHEIRO" << endl;
                                break;
        case TUDinheiro::FALHA  : cout << "FALHA   - DINHEIRO" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Percentual.
    //-----------------------------------------------------------------------
    TUPercentual teste5;

    switch(teste5.run()){
        case TUPercentual::SUCESSO: cout << "SUCESSO - PERCENTUAL" << endl;
                                break;
        case TUPercentual::FALHA  : cout << "FALHA   - PERCENTUAL" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Codigo_titulo.
    //-----------------------------------------------------------------------
    TUCodigo_titulo teste6;

    switch(teste6.run()){
        case TUCodigo_titulo::SUCESSO: cout << "SUCESSO - CODIGO_TITULO" << endl;
                                break;
        case TUCodigo_titulo::FALHA  : cout << "FALHA   - CODIGO_TITULO" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Senha.
    //-----------------------------------------------------------------------
    TUSenha teste7;

    switch(teste7.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Data.
    //-----------------------------------------------------------------------
    TUData teste8;

    switch(teste8.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de CPF.
    //-----------------------------------------------------------------------
    TUCpf teste9;

    switch(teste9.run()){
        case TUCpf::SUCESSO: cout << "SUCESSO - CPF" << endl;
                                break;
        case TUCpf::FALHA  : cout << "FALHA   - CPF" << endl;
                                break;
    }

    std::cout << "-----------------------" << std::endl;
    std::cout << "-------ENTIDADES-------" << std::endl;
    std::cout << "-----------------------" << std::endl;
    //-----------------------------------------------------------------------
    // Instanciar Teste de Conta.
    //-----------------------------------------------------------------------
    TUConta testeA;

    switch(testeA.run()){
        case TUConta::SUCESSO: cout << "SUCESSO - CONTA" << endl;
                                break;
        case TUConta::FALHA  : cout << "FALHA   - CONTA" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Pagamento.
    //-----------------------------------------------------------------------
    TUPagamento testeB;

    switch(testeB.run()){
        case TUPagamento::SUCESSO: cout << "SUCESSO - PAGAMENTO" << endl;
                                break;
        case TUPagamento::FALHA  : cout << "FALHA   - PAGAMENTO" << endl;
                                break;
    }
    //-----------------------------------------------------------------------
    // Instanciar Teste de Titulo.
    //-----------------------------------------------------------------------
    TUTitulo testeC;

    switch(testeC.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - TITULO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA   - TITULO" << endl;
                                break;
    }

    return 0;
}
