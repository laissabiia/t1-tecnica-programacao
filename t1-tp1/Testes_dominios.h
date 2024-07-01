#ifndef TESTES_DOMINIOS_H_INCLUDE
#define TESTES_DOMINIOS_H_INCLUDE

#include "Dominios.h"

// --------------------------------------------------------------------------
//-----------------------------------DOMÍNIOS--------------------------------
// --------------------------------------------------------------------------
// ----------------------------TUCodigo_pgto---------------------------------
// --------------------------------------------------------------------------
class TUCodigo_pgto {
private:
    const std::string ARG_VALIDO = "12304567";
    const std::string ARG_INVALIDO = "12345ABC";
    Codigo_pgto *codigo_pgto;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// -------------------------------TUNome-------------------------------------
// --------------------------------------------------------------------------
class TUNome {
private:
    const std::string ARG_VALIDO = "Maria Silva";
    const std::string ARG_INVALIDO = "antonioJorge";
    Nome *nome;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// ------------------------------TUEstado------------------------------------
// --------------------------------------------------------------------------
class TUEstado {
private:
    const std::string ARG_VALIDO = "Previsto";
    const std::string ARG_INVALIDO = "Devendo";
    Estado *estado;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// -------------------------------TUSetor------------------------------------
// --------------------------------------------------------------------------
class TUSetor {
private:
    const std::string ARG_VALIDO = "Papel e celulose";
    const std::string ARG_INVALIDO = "Outros";
    Setor *setor;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// -----------------------------TUDinheiro-----------------------------------
// --------------------------------------------------------------------------
class TUDinheiro {
private:
    const float ARG_VALIDO   = 1234.67;
    const float ARG_INVALIDO = -37;
    Dinheiro *dinheiro;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// -----------------------------TUPercentual---------------------------------
// --------------------------------------------------------------------------
class TUPercentual {
private:
    const int ARG_VALIDO   = 58;
    const int ARG_INVALIDO = -7;
    Percentual *percentual;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// --------------------------------------------------------------------------
// ----------------------------TUCodigo_titulo---------------------------------
// --------------------------------------------------------------------------
class TUCodigo_titulo {
private:
    const std::string ARG_VALIDO   = "LCI1A2B3C4D";
    const std::string ARG_INVALIDO = "CDB1234atKL";
    Codigo_titulo *codigo_titulo;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// ------------------------------------------------------------------------
// -------------------------------TUSenha----------------------------------
// ------------------------------------------------------------------------
class TUSenha {
private:
    const std::string ARG_VALIDO   = "158409";
    const std::string ARG_INVALIDO = "158888";
    Senha *senha;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// ------------------------------------------------------------------------
// -------------------------------TUData-----------------------------------
// ------------------------------------------------------------------------
class TUData {
private:
    const std::string ARG_VALIDO   = "29-02-2024";
    const std::string ARG_INVALIDO = "37-60-1987";
    Data *data;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};
// ------------------------------------------------------------------------
// --------------------------------TUCpf-----------------------------------
// ------------------------------------------------------------------------
class TUCpf {
private:
    const std::string ARG_VALIDO   = "123.456.789-09";
    const std::string ARG_INVALIDO = "987.654.321-99";
    Cpf *cpf;
    bool status;
    void setUp();
    void testarCenarioValido();
    void testarCenarioInvalido();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    bool run();
};

#endif // TESTES_DOMINIOS_H_INCLUDE
