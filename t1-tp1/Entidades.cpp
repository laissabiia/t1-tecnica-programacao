#include "Entidades.h"

//----------------------------------------------------------
// Código de implementação dos métodos da entidade Conta.
//----------------------------------------------------------
void Conta::setCpf(const Cpf &cpf){
    this->cpf = cpf;
}

Cpf Conta::getCpf() const{
    return cpf;
}

void Conta::setNome(const Nome &nome){
    this->nome = nome;
}

Nome Conta::getNome() const{
    return nome;
}

void Conta::setSenha(const Senha &senha){
    this->senha = senha;
}

Senha Conta::getSenha() const{
    return senha;
}
//----------------------------------------------------------
// Código de implementação dos métodos da entidade Pagamento.
//----------------------------------------------------------
void Pagamento::setCodigo_pgto(const Codigo_pgto &codigo_pgto){
    this->codigo_pgto = codigo_pgto;
}

Codigo_pgto Pagamento::getCodigo_pgto() const{
    return codigo_pgto;
}

void Pagamento::setData(const Data &data){
    this->data = data;
}

Data Pagamento::getData() const{
    return data;
}

void Pagamento::setPercentual(const Percentual &percentual){
    this->percentual = percentual;
}

Percentual Pagamento::getPercentual() const{
    return percentual;
}

void Pagamento::setEstado(const Estado &estado){
    this->estado = estado;
}

Estado Pagamento::getEstado() const{
    return estado;
}
//----------------------------------------------------------
// Código de implementação dos métodos da entidade Titulo.
//----------------------------------------------------------
void Titulo::setCodigo(const Codigo_titulo &codigo){
    this->codigo = codigo;
}

Codigo_titulo Titulo::getCodigo() const{
    return codigo;
}

void Titulo::setEmissor(const Nome &emissor){
    this->emissor = emissor;
}

Nome Titulo::getEmissor() const{
    return emissor;
}

void Titulo::setSetor(const Setor &setor){
    this->setor = setor;
}

Setor Titulo::getSetor() const{
    return setor;
}

void Titulo::setEmissao(const Data &emissao){
    this->emissao = emissao;
}

Data Titulo::getEmissao() const{
    return emissao;
}

void Titulo::setVencimento(const Data &vencimento){
    this->vencimento = vencimento;
}

Data Titulo::getVencimento() const{
    return vencimento;
}

void Titulo::setValor(const Dinheiro &valor){
    this->valor = valor;
}

Dinheiro Titulo::getValor() const{
    return valor;
}
