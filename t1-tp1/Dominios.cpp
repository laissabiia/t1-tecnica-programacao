#include "Dominios.h"

using namespace std;
// --------------------------------------------------------------------------
// -----------------------------CODIGO_PGTO----------------------------------
// --------------------------------------------------------------------------
// Método para validação de Codigo_pgto.

void Codigo_pgto::validar(const string& codigo_pgto) {
    // Verifica se o tamanho é exatamente 8 caracteres
    if (codigo_pgto.size() != 8) {
        throw invalid_argument("O código de pagamento deve ter 8 dígitos.");
    }
    // Verifica se o primeiro dígito não é zero
    if (codigo_pgto[0] == '0') {
        throw invalid_argument("O primeiro dígito do código de pagamento não pode ser zero.");
    }
    // Verifica se todos os caracteres são dígitos
    for (char c : codigo_pgto) {
        if (!isdigit(c)) {
            throw invalid_argument("O código de pagamento deve conter apenas dígitos.");
        }
    }
}

// Método para armazenamento de Codigo_pgto.
void Codigo_pgto::setCodigo_pgto(const string& codigo_pgto) {
    validar(codigo_pgto);
    this->codigo_pgto = codigo_pgto;
}
// --------------------------------------------------------------------------
// --------------------------------NOME--------------------------------------
// --------------------------------------------------------------------------
// Método para validação de Nome.

void Nome::validar(const string& nome) {
    regex pattern(R"(^[A-Z][a-z]{2,9}( [A-Z][a-z]{2,9})?$)");

    if (!regex_match(nome, pattern)) {
        throw invalid_argument("Nome inválido.");
    }
}

// Método para armazenamento de Nome.
void Nome::setNome(const string& nome) {
    validar(nome); // Valida o nome antes de definir
    this->nome = nome;
}
// --------------------------------------------------------------------------
// -------------------------------ESTADO-------------------------------------
// --------------------------------------------------------------------------
// Método para validação de Estado.

void Estado::validar(const string &estado){
    vector<string> estadosValidos = {"Previsto", "Liquidado", "Inadimplente"};
    for (const auto& estadoValido : estadosValidos){
        if (estado == estadoValido){
            return;
        }
    }
    throw invalid_argument("Argumento inválido.");
}

// Método para armazenamento de Estado.
void Estado::setEstado(const string &estado){
    validar(estado);
    this->estado = estado;
}
// --------------------------------------------------------------------------
// --------------------------------SETOR-------------------------------------
// --------------------------------------------------------------------------
// Método para validação de Setor.

void Setor::validar(const string &setor){
    vector<string> setorValidos = {"Agricultura", "Construção civil", "Energia", "Finanças",
                                             "Imobiliário", "Papel e celulose", "Pecuária", "Química e petroquímica",
                                             "Metalurgia e siderurgia", "Mineração"};
    for (const auto& setorValido : setorValidos){
        if (setor == setorValido){
            return;
        }
    }
    throw invalid_argument("Argumento inválido.");
}

// Método para armazenamento de Setor.
void Setor::setSetor(const string &setor){
    validar(setor);
    this->setor = setor;
}
// --------------------------------------------------------------------------
// ------------------------------DINHEIRO------------------------------------
// --------------------------------------------------------------------------
// Método para validação de Dinheiro.

void Dinheiro::validar(const float& dinheiro){
    if (dinheiro < LIMITEINF || dinheiro > LIMITESUP){
        throw invalid_argument("Valor de dinheiro invalido.");
    }
}

// Método para armazenamento de Dinheiro.
void Dinheiro::setDinheiro(const float& dinheiro){
    validar(dinheiro);
    this->dinheiro = dinheiro;
}
// --------------------------------------------------------------------------
// -----------------------------PERCENTUAL-----------------------------------
// --------------------------------------------------------------------------
// Método para validação de Percentual.

void Percentual::validar(int percentual){
    if (percentual < LIMITEINF || percentual > LIMITESUP){
        throw invalid_argument("Valor de percentual invalido.");
    }
}

// Método para armazenamento de percentual.
void Percentual::setPercentual(int percentual){
    validar(percentual);
    this->percentual = percentual;
}
// --------------------------------------------------------------------------
// -----------------------------CODIGO_TITULO--------------------------------
// --------------------------------------------------------------------------
// Método para validação de Codigo_titulo.

void Codigo_titulo::validar(const string& codigo_titulo) {
    regex pattern(R"(^(CDB|CRA|CRI|LCA|LCI|DEB)[A-Z0-9]{8}$)");

    if (!regex_match(codigo_titulo, pattern)) {
        throw invalid_argument("Código de título inválido.");
    }
}

// Método para armazenamento de Codigo_titulo.
void Codigo_titulo::setCodigo_titulo(const string& codigo_titulo) {
    validar(codigo_titulo);
    this->codigo_titulo = codigo_titulo;
}
// --------------------------------------------------------------------------
// -------------------------------SENHA--------------------------------------
// --------------------------------------------------------------------------
// Método para validação de Senha.

void Senha::validar(const string& senha) {
    //tamanho da senha é 6
    if (senha.size() != 6) {
        throw invalid_argument("A senha deve conter 6 algarismos.");
    }
    unordered_set<char> unique_chars;
    for (char c : senha) {
        //senha apenas com dígitos numéricos
        if (!isdigit(c)) {
            throw invalid_argument("A senha deve conter apenas algarismos.");
        }
        //senha sem algarismos duplicados
        if (unique_chars.find(c) != unique_chars.end()) {
            throw invalid_argument("A senha não pode conter algarismos duplicados.");
        }
        unique_chars.insert(c);
    }

    //o primeiro dígito não pode ser 0
    if (senha[0] == '0') {
        throw invalid_argument("O primeiro algarismo da senha não pode ser 0.");
    }
    //não pode sequências crescentes ou decrescentes
    for (size_t i = 0; i < senha.size() - 2; ++i) {
        if ((senha[i] == senha[i+1] - 1 && senha[i] == senha[i+2] - 2) || // Sequência crescente
            (senha[i] == senha[i+1] + 1 && senha[i] == senha[i+2] + 2)) { // Sequência decrescente
            throw invalid_argument("A senha não pode conter sequências crescentes ou decrescentes.");
        }
    }
}
// Método para armazenamento de Senha.
void Senha::setSenha(const string &senha){
    validar(senha);
    this->senha = senha;
}
// --------------------------------------------------------------------------
// --------------------------------DATA--------------------------------------
// --------------------------------------------------------------------------
// Método para validação de Data.

void Data::validar(const string& data) {
    //verifica o formato DD-MM-AAAA
    regex pattern(R"(^(0[1-9]|[1-2][0-9]|3[0-1])-(0[1-9]|1[0-2])-(20[0-9][0-9]|2100)$)");

    if (!regex_match(data, pattern)) {
        throw invalid_argument("Data inválida. Formato esperado: DD-MM-AAAA.");
    }

    //extrai o dia, mês e ano da string de data
    int dia = stoi(data.substr(0, 2));
    int mes = stoi(data.substr(3, 2));
    int ano = stoi(data.substr(6, 4));

    //verifica se o dia está dentro do intervalo válido para o mês e ano
    if (mes == 2) {
        bool bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        if (dia > 29 || (dia == 29 && !bissexto)) {
            throw invalid_argument("Data inválida. Dia inválido para o mês de fevereiro.");
        }
    } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        //meses com 30 dias
        throw invalid_argument("Data inválida. Dia inválido para o mês informado.");
    } else if (dia > 31) {
        //meses com 31 dias
        throw invalid_argument("Data inválida. Dia inválido para o mês informado.");
    }
}
// Método para armazenamento de Data.
void Data::setData(const string &data){
    validar(data);
    this->data = data;
}
// --------------------------------------------------------------------------
// ---------------------------------CPF--------------------------------------
// --------------------------------------------------------------------------
// Método para validação de Cpf.

void Cpf::validar(const string& cpf){
    //verifica o formato XXX.XXX.XXX-CC
    regex pattern(R"(^([0-9][0-9][0-9]).([0-9][0-9][0-9]).([0-9][0-9][0-9])-([0-9][0-9])$)");

    if (!regex_match(cpf, pattern)) {
        throw invalid_argument("CPF inválido. Formato esperado: XXX.XXX.XXX-CC.");
    }

    // Remove caracteres não numéricos do CPF
    string cpf_numerico;
    for (char c : cpf) {
        if (isdigit(c)) {
            cpf_numerico += c;
        }
    }
    // Calcula o primeiro dígito verificador
    int digito_verificador1 = calcPrimeiro(cpf_numerico);

    //verifica o primeiro dígito verificador
    if ((cpf_numerico[9] - '0') != digito_verificador1) {
        throw invalid_argument("CPF inválido. Primeiro dígito verificador não corresponde.");
    }
    //calcula o segundo dígito verificador
    int digito_verificador2 = calcSegundo(cpf_numerico);

    //verifica o segundo dígito verificador
    if ((cpf_numerico[10] - '0') != digito_verificador2) {
        throw invalid_argument("CPF inválido. Segundo dígito verificador não corresponde.");
    }
}
// Método para armazenamento de Cpf.
void Cpf::setCpf(const string &cpf){
    validar(cpf);
    this->cpf = cpf;
}
// Métodos auxiliares
int Cpf::calcPrimeiro(const string& cpf_numerico) {
    int soma = 0;
    for (int i = 0; i < 9; ++i) {
        soma += (cpf_numerico[i] - '0') * (10 - i);
    }
    int resto = soma % 11;
    return (resto < 2) ? 0 : 11 - resto;
}

int Cpf::calcSegundo(const string& cpf_numerico) {
    int soma = 0;
    for (int i = 0; i < 10; ++i) {
        soma += (cpf_numerico[i] - '0') * (11 - i);
    }
    int resto = soma % 11;
    return (resto < 2) ? 0 : 11 - resto;
}
