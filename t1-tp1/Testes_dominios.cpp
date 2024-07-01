#include "Testes_dominios.h"
#include <cmath>

using namespace std;

// --------------------------------------------------------------------------
// --------------------------------DOMÍNIOS----------------------------------
// --------------------------------------------------------------------------
// -----------------Métodos da classe TUCodigo_pgto--------------------------
// --------------------------------------------------------------------------
void TUCodigo_pgto::setUp() {
    codigo_pgto = new Codigo_pgto();
    status = SUCESSO;
}

void TUCodigo_pgto::testarCenarioValido() {
    try {
        codigo_pgto->setCodigo_pgto(ARG_VALIDO);
        if (codigo_pgto->getCodigo_pgto() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUCodigo_pgto::testarCenarioInvalido() {
    try {
        codigo_pgto->setCodigo_pgto(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUCodigo_pgto::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete codigo_pgto;
    return status;
}
// --------------------------------------------------------------------------
// ---------------------Métodos da classe TUNome-----------------------------
// --------------------------------------------------------------------------
void TUNome::setUp() {
    nome = new Nome();
    status = SUCESSO;
}

void TUNome::testarCenarioValido() {
    try {
        nome->setNome(ARG_VALIDO);
        if (nome->getNome() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUNome::testarCenarioInvalido() {
    try {
        nome->setNome(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUNome::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete nome;
    return status;
}
// --------------------------------------------------------------------------
// --------------------Métodos da classe TUEstado----------------------------
// --------------------------------------------------------------------------
void TUEstado::setUp() {
    estado = new Estado();
    status = SUCESSO;
}

void TUEstado::testarCenarioValido() {
    try {
        estado->setEstado(ARG_VALIDO);
        if (estado->getEstado() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUEstado::testarCenarioInvalido() {
    try {
        estado->setEstado(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUEstado::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete estado;
    return status;
}
// --------------------------------------------------------------------------
// --------------------Métodos da classe TUSetor-----------------------------
// --------------------------------------------------------------------------
void TUSetor::setUp() {
    setor = new Setor();
    status = SUCESSO;
}

void TUSetor::testarCenarioValido() {
    try {
        setor->setSetor(ARG_VALIDO);
        if (setor->getSetor() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUSetor::testarCenarioInvalido() {
    try {
        setor->setSetor(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUSetor::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete setor;
    return status;
}
// --------------------------------------------------------------------------
// ---------------------Métodos da classe TUDinheiro-------------------------
// --------------------------------------------------------------------------
void TUDinheiro::setUp() {
    dinheiro = new Dinheiro();
    status = SUCESSO;
}

void TUDinheiro::testarCenarioValido() {
    try {
        dinheiro->setDinheiro(ARG_VALIDO);
        if (abs(dinheiro->getDinheiro() - (ARG_VALIDO)) > 0.0001) {
            status = FALHA;                                  //epislon auxiliar para determinar a diferença
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUDinheiro::testarCenarioInvalido() {
    try {
        dinheiro->setDinheiro(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUDinheiro::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete dinheiro;
    return status;
}
// --------------------------------------------------------------------------
// ---------------------Métodos da classe TUPercentual-----------------------
// --------------------------------------------------------------------------
void TUPercentual::setUp() {
    percentual = new Percentual();
    status = SUCESSO;
}

void TUPercentual::testarCenarioValido() {
    try {
        percentual->setPercentual(ARG_VALIDO);
        if (percentual->getPercentual() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUPercentual::testarCenarioInvalido() {
    try {
        percentual->setPercentual(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUPercentual::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete percentual;
    return status;
}
// --------------------------------------------------------------------------
// -----------------Métodos da classe TUCodigo_titulo------------------------
// --------------------------------------------------------------------------
void TUCodigo_titulo::setUp() {
    codigo_titulo = new Codigo_titulo();
    status = SUCESSO;
}

void TUCodigo_titulo::testarCenarioValido() {
    try {
        codigo_titulo->setCodigo_titulo(ARG_VALIDO);
        if (codigo_titulo->getCodigo_titulo() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUCodigo_titulo::testarCenarioInvalido() {
    try {
        codigo_titulo->setCodigo_titulo(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUCodigo_titulo::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete codigo_titulo;
    return status;
}
// --------------------------------------------------------------------------
// ---------------------Métodos da classe TUSenha----------------------------
// --------------------------------------------------------------------------
void TUSenha::setUp() {
    senha = new Senha();
    status = SUCESSO;
}

void TUSenha::testarCenarioValido() {
    try {
        senha->setSenha(ARG_VALIDO);
        if (senha->getSenha() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUSenha::testarCenarioInvalido() {
    try {
        senha->setSenha(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUSenha::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete senha;
    return status;
}
// --------------------------------------------------------------------------
// ---------------------Métodos da classe TUData----------------------------
// --------------------------------------------------------------------------
void TUData::setUp() {
    data = new Data();
    status = SUCESSO;
}

void TUData::testarCenarioValido() {
    try {
        data->setData(ARG_VALIDO);
        if (data->getData() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUData::testarCenarioInvalido() {
    try {
        data->setData(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUData::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete data;
    return status;
}
// --------------------------------------------------------------------------
// -----------------------Métodos da classe TUCpf----------------------------
// --------------------------------------------------------------------------
void TUCpf::setUp() {
    cpf = new Cpf();
    status = SUCESSO;
}

void TUCpf::testarCenarioValido() {
    try {
        cpf->setCpf(ARG_VALIDO);
        if (cpf->getCpf() != (ARG_VALIDO)) {
            status = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        status = FALHA;
    }
}

void TUCpf::testarCenarioInvalido() {
    try {
        cpf->setCpf(ARG_INVALIDO);
        status = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

bool TUCpf::run() {
    setUp();
    testarCenarioValido();
    if (status == SUCESSO) {
        testarCenarioInvalido();
    }
    delete cpf;
    return status;
}
