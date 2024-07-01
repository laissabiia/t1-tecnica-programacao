#ifndef TESTES_ENTIDADES_H_INCLUDE
#define TESTES_ENTIDADES_H_INCLUDE

#include "Entidades.h"

// --------------------------------------------------------------------------
//----------------------------------ENTIDADES--------------------------------
// --------------------------------------------------------------------------
// -------------------------------TUConta------------------------------------
// --------------------------------------------------------------------------
class TUConta {
private:
    const std::string CPF_VALIDO = "123.456.789-09";
    const std::string NOME_VALIDO = "Maria Silva";
    const std::string SENHA_VALIDA = "482570";
    Conta *conta;
    bool status;
    void setUp();
    void testarCenarioValido();
public:
    const static bool SUCESSO = true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// -----------------------------TUPagamento----------------------------------
// --------------------------------------------------------------------------
class TUPagamento {
private:
    const std::string COD_PGTO_VALIDO = "12304567";
    const std::string DATA_VALIDA = "29-02-2024";
    const static int PERCENTUAL_VALIDO = 53;
    const std::string ESTADO_VALIDO = "Previsto";
    Pagamento *pagamento;
    bool status;
    void setUp();
    void testarCenarioValido();
public:
    const static bool SUCESSO = true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// -----------------------------TUTitulo----------------------------------
// --------------------------------------------------------------------------
class TUTitulo {
private:
    const std::string COD_TIT_VALIDO = "LCI1A2B3C4D";
    const std::string EMISSOR_VALIDO = "Pedro Santos";
    const std::string SETOR_VALIDO = "Agricultura";
    const std::string EMISSAO_VALIDA = "09-02-2024";
    const std::string VENCIMENTO_VALIDO = "26-06-2024";
    const float VALOR_VALIDO = 20879.94;
    Titulo *titulo;
    bool status;
    void setUp();
    void testarCenarioValido();
public:
    const static bool SUCESSO = true;
    const static bool FALHA   = false;
    bool run();
};

#endif // TESTES_ENTIDADES_H_INCLUDE
