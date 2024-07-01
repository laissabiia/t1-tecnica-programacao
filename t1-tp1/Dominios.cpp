#include "Dominios.h"

using namespace std;
// --------------------------------------------------------------------------
// -----------------------------CODIGO_PGTO----------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Codigo_pgto.

void Codigo_pgto::validar(const string& codigo_pgto) {
    // Verifica se o tamanho � exatamente 8 caracteres
    if (codigo_pgto.size() != 8) {
        throw invalid_argument("O c�digo de pagamento deve ter 8 d�gitos.");
    }
    // Verifica se o primeiro d�gito n�o � zero
    if (codigo_pgto[0] == '0') {
        throw invalid_argument("O primeiro d�gito do c�digo de pagamento n�o pode ser zero.");
    }
    // Verifica se todos os caracteres s�o d�gitos
    for (char c : codigo_pgto) {
        if (!isdigit(c)) {
            throw invalid_argument("O c�digo de pagamento deve conter apenas d�gitos.");
        }
    }
}

// M�todo para armazenamento de Codigo_pgto.
void Codigo_pgto::setCodigo_pgto(const string& codigo_pgto) {
    validar(codigo_pgto);
    this->codigo_pgto = codigo_pgto;
}
// --------------------------------------------------------------------------
// --------------------------------NOME--------------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Nome.

void Nome::validar(const string& nome) {
    regex pattern(R"(^[A-Z][a-z]{2,9}( [A-Z][a-z]{2,9})?$)");

    if (!regex_match(nome, pattern)) {
        throw invalid_argument("Nome inv�lido.");
    }
}

// M�todo para armazenamento de Nome.
void Nome::setNome(const string& nome) {
    validar(nome); // Valida o nome antes de definir
    this->nome = nome;
}
// --------------------------------------------------------------------------
// -------------------------------ESTADO-------------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Estado.

void Estado::validar(const string &estado){
    vector<string> estadosValidos = {"Previsto", "Liquidado", "Inadimplente"};
    for (const auto& estadoValido : estadosValidos){
        if (estado == estadoValido){
            return;
        }
    }
    throw invalid_argument("Argumento inv�lido.");
}

// M�todo para armazenamento de Estado.
void Estado::setEstado(const string &estado){
    validar(estado);
    this->estado = estado;
}
// --------------------------------------------------------------------------
// --------------------------------SETOR-------------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Setor.

void Setor::validar(const string &setor){
    vector<string> setorValidos = {"Agricultura", "Constru��o civil", "Energia", "Finan�as",
                                             "Imobili�rio", "Papel e celulose", "Pecu�ria", "Qu�mica e petroqu�mica",
                                             "Metalurgia e siderurgia", "Minera��o"};
    for (const auto& setorValido : setorValidos){
        if (setor == setorValido){
            return;
        }
    }
    throw invalid_argument("Argumento inv�lido.");
}

// M�todo para armazenamento de Setor.
void Setor::setSetor(const string &setor){
    validar(setor);
    this->setor = setor;
}
// --------------------------------------------------------------------------
// ------------------------------DINHEIRO------------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Dinheiro.

void Dinheiro::validar(const float& dinheiro){
    if (dinheiro < LIMITEINF || dinheiro > LIMITESUP){
        throw invalid_argument("Valor de dinheiro invalido.");
    }
}

// M�todo para armazenamento de Dinheiro.
void Dinheiro::setDinheiro(const float& dinheiro){
    validar(dinheiro);
    this->dinheiro = dinheiro;
}
// --------------------------------------------------------------------------
// -----------------------------PERCENTUAL-----------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Percentual.

void Percentual::validar(int percentual){
    if (percentual < LIMITEINF || percentual > LIMITESUP){
        throw invalid_argument("Valor de percentual invalido.");
    }
}

// M�todo para armazenamento de percentual.
void Percentual::setPercentual(int percentual){
    validar(percentual);
    this->percentual = percentual;
}
// --------------------------------------------------------------------------
// -----------------------------CODIGO_TITULO--------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Codigo_titulo.

void Codigo_titulo::validar(const string& codigo_titulo) {
    regex pattern(R"(^(CDB|CRA|CRI|LCA|LCI|DEB)[A-Z0-9]{8}$)");

    if (!regex_match(codigo_titulo, pattern)) {
        throw invalid_argument("C�digo de t�tulo inv�lido.");
    }
}

// M�todo para armazenamento de Codigo_titulo.
void Codigo_titulo::setCodigo_titulo(const string& codigo_titulo) {
    validar(codigo_titulo);
    this->codigo_titulo = codigo_titulo;
}
// --------------------------------------------------------------------------
// -------------------------------SENHA--------------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Senha.

void Senha::validar(const string& senha) {
    //tamanho da senha � 6
    if (senha.size() != 6) {
        throw invalid_argument("A senha deve conter 6 algarismos.");
    }
    unordered_set<char> unique_chars;
    for (char c : senha) {
        //senha apenas com d�gitos num�ricos
        if (!isdigit(c)) {
            throw invalid_argument("A senha deve conter apenas algarismos.");
        }
        //senha sem algarismos duplicados
        if (unique_chars.find(c) != unique_chars.end()) {
            throw invalid_argument("A senha n�o pode conter algarismos duplicados.");
        }
        unique_chars.insert(c);
    }

    //o primeiro d�gito n�o pode ser 0
    if (senha[0] == '0') {
        throw invalid_argument("O primeiro algarismo da senha n�o pode ser 0.");
    }
    //n�o pode sequ�ncias crescentes ou decrescentes
    for (size_t i = 0; i < senha.size() - 2; ++i) {
        if ((senha[i] == senha[i+1] - 1 && senha[i] == senha[i+2] - 2) || // Sequ�ncia crescente
            (senha[i] == senha[i+1] + 1 && senha[i] == senha[i+2] + 2)) { // Sequ�ncia decrescente
            throw invalid_argument("A senha n�o pode conter sequ�ncias crescentes ou decrescentes.");
        }
    }
}
// M�todo para armazenamento de Senha.
void Senha::setSenha(const string &senha){
    validar(senha);
    this->senha = senha;
}
// --------------------------------------------------------------------------
// --------------------------------DATA--------------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Data.

void Data::validar(const string& data) {
    //verifica o formato DD-MM-AAAA
    regex pattern(R"(^(0[1-9]|[1-2][0-9]|3[0-1])-(0[1-9]|1[0-2])-(20[0-9][0-9]|2100)$)");

    if (!regex_match(data, pattern)) {
        throw invalid_argument("Data inv�lida. Formato esperado: DD-MM-AAAA.");
    }

    //extrai o dia, m�s e ano da string de data
    int dia = stoi(data.substr(0, 2));
    int mes = stoi(data.substr(3, 2));
    int ano = stoi(data.substr(6, 4));

    //verifica se o dia est� dentro do intervalo v�lido para o m�s e ano
    if (mes == 2) {
        bool bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        if (dia > 29 || (dia == 29 && !bissexto)) {
            throw invalid_argument("Data inv�lida. Dia inv�lido para o m�s de fevereiro.");
        }
    } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        //meses com 30 dias
        throw invalid_argument("Data inv�lida. Dia inv�lido para o m�s informado.");
    } else if (dia > 31) {
        //meses com 31 dias
        throw invalid_argument("Data inv�lida. Dia inv�lido para o m�s informado.");
    }
}
// M�todo para armazenamento de Data.
void Data::setData(const string &data){
    validar(data);
    this->data = data;
}
// --------------------------------------------------------------------------
// ---------------------------------CPF--------------------------------------
// --------------------------------------------------------------------------
// M�todo para valida��o de Cpf.

void Cpf::validar(const string& cpf){
    //verifica o formato XXX.XXX.XXX-CC
    regex pattern(R"(^([0-9][0-9][0-9]).([0-9][0-9][0-9]).([0-9][0-9][0-9])-([0-9][0-9])$)");

    if (!regex_match(cpf, pattern)) {
        throw invalid_argument("CPF inv�lido. Formato esperado: XXX.XXX.XXX-CC.");
    }

    // Remove caracteres n�o num�ricos do CPF
    string cpf_numerico;
    for (char c : cpf) {
        if (isdigit(c)) {
            cpf_numerico += c;
        }
    }
    // Calcula o primeiro d�gito verificador
    int digito_verificador1 = calcPrimeiro(cpf_numerico);

    //verifica o primeiro d�gito verificador
    if ((cpf_numerico[9] - '0') != digito_verificador1) {
        throw invalid_argument("CPF inv�lido. Primeiro d�gito verificador n�o corresponde.");
    }
    //calcula o segundo d�gito verificador
    int digito_verificador2 = calcSegundo(cpf_numerico);

    //verifica o segundo d�gito verificador
    if ((cpf_numerico[10] - '0') != digito_verificador2) {
        throw invalid_argument("CPF inv�lido. Segundo d�gito verificador n�o corresponde.");
    }
}
// M�todo para armazenamento de Cpf.
void Cpf::setCpf(const string &cpf){
    validar(cpf);
    this->cpf = cpf;
}
// M�todos auxiliares
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
