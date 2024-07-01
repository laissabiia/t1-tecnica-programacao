#include "Testes_entidades.h"

using namespace std;

// --------------------------------------------------------------------------
//----------------------------------ENTIDADES--------------------------------
// --------------------------------------------------------------------------
// ----------------------Métodos da classe TUConta---------------------------
// --------------------------------------------------------------------------
void TUConta::setUp(){
    conta = new Conta();
    status = SUCESSO;
}

void TUConta::testarCenarioValido(){
    Cpf cpf;
    try{
        cpf.setCpf(CPF_VALIDO);
        conta->setCpf(cpf);
        if(conta->getCpf().getCpf() != (CPF_VALIDO))
            status = FALHA;
    }
    catch (const std::invalid_argument &excecao){
        status = FALHA;
    }

    Nome nome;
    try{
        nome.setNome(NOME_VALIDO);
        conta->setNome(nome);
        if(conta->getNome().getNome() != (NOME_VALIDO))
            status = FALHA;
    }
    catch (const std::invalid_argument &excecao){
        status = FALHA;
    }

    Senha senha;
    try{
        senha.setSenha(SENHA_VALIDA);
        conta->setSenha(senha);
        if(conta->getSenha().getSenha() != (SENHA_VALIDA))
            status = FALHA;
    }
    catch(const std::invalid_argument &excecao){
        status = FALHA;
    }
}

bool TUConta::run(){
    setUp();
    testarCenarioValido();
    delete conta;
    return status;
}
// --------------------------------------------------------------------------
// ----------------------Métodos da classe TUPagamento-----------------------
// --------------------------------------------------------------------------
void TUPagamento::setUp(){
    pagamento = new Pagamento();
    status = SUCESSO;
}

void TUPagamento::testarCenarioValido(){
    Codigo_pgto codigo_pgto;
    try{
        codigo_pgto.setCodigo_pgto(COD_PGTO_VALIDO);
        pagamento->setCodigo_pgto(codigo_pgto);
        if(pagamento->getCodigo_pgto().getCodigo_pgto() != (COD_PGTO_VALIDO))
            status = FALHA;
    }
    catch (const std::invalid_argument &excecao){
        status = FALHA;
    }

    Data data;
    try{
        data.setData(DATA_VALIDA);
        pagamento->setData(data);
        if(pagamento->getData().getData() != (DATA_VALIDA))
            status = FALHA;
    }
    catch (const std::invalid_argument &excecao){
        status = FALHA;
    }

    Percentual percentual;
    try{
        percentual.setPercentual(PERCENTUAL_VALIDO);
        pagamento->setPercentual(percentual);
        if(pagamento->getPercentual().getPercentual() != (PERCENTUAL_VALIDO))
            status = FALHA;
    }
    catch(const std::invalid_argument &excecao){
        status = FALHA;
    }

    Estado estado;
    try{
        estado.setEstado(ESTADO_VALIDO);
        pagamento->setEstado(estado);
        if(pagamento->getEstado().getEstado() != (ESTADO_VALIDO))
            status = FALHA;
    }
    catch(const std::invalid_argument &excecao){
        status = FALHA;
    }
}

bool TUPagamento::run(){
    setUp();
    testarCenarioValido();
    delete pagamento;
    return status;
}
// --------------------------------------------------------------------------
// ----------------------Métodos da classe TUTitulo--------------------------
// --------------------------------------------------------------------------
void TUTitulo::setUp(){
    titulo = new Titulo();
    status = SUCESSO;
}

void TUTitulo::testarCenarioValido(){
    Codigo_titulo codigo;
    try{
        codigo.setCodigo_titulo(COD_TIT_VALIDO);
        titulo->setCodigo(codigo);
        if(titulo->getCodigo().getCodigo_titulo() != (COD_TIT_VALIDO))
            status = FALHA;
    }
    catch (const std::invalid_argument &excecao){
        status = FALHA;
    }

    Nome emissor;
    try{
        emissor.setNome(EMISSOR_VALIDO);
        titulo->setEmissor(emissor);
        if(titulo->getEmissor().getNome() != (EMISSOR_VALIDO))
            status = FALHA;
    }
    catch (const std::invalid_argument &excecao){
        status = FALHA;
    }

    Setor setor;
    try{
        setor.setSetor(SETOR_VALIDO);
        titulo->setSetor(setor);
        if(titulo->getSetor().getSetor() != (SETOR_VALIDO))
            status = FALHA;
    }
    catch(const std::invalid_argument &excecao){
        status = FALHA;
    }

    Data emissao;
    try{
        emissao.setData(EMISSAO_VALIDA);
        titulo->setEmissao(emissao);
        if(titulo->getEmissao().getData() != (EMISSAO_VALIDA))
            status = FALHA;
    }
    catch(const std::invalid_argument &excecao){
        status = FALHA;
    }

    Data vencimento;
    try{
        vencimento.setData(VENCIMENTO_VALIDO);
        titulo->setVencimento(vencimento);
        if(titulo->getVencimento().getData() != (VENCIMENTO_VALIDO))
            status = FALHA;
    }
    catch(const std::invalid_argument &excecao){
        status = FALHA;
    }

    Dinheiro valor;
    try{
        valor.setDinheiro(VALOR_VALIDO);
        titulo->setValor(valor);
        if(titulo->getValor().getDinheiro() != (VALOR_VALIDO))
            status = FALHA;
    }
    catch(const std::invalid_argument &excecao){
        status = FALHA;
    }
}

bool TUTitulo::run(){
    setUp();
    testarCenarioValido();
    delete titulo;
    return status;
}
