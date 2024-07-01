#ifndef DOMINIOS_H_INCLUDE
#define DOMINIOS_H_INCLUDE

#include <stdexcept>
#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <set>
#include <unordered_set>

/**
 * @file Dominios.h
 * @brief Declarações das classes Domínios.
 * @author Laíssa Soares - 22/2032982
 * @details Trabalho 1
 */
// -----------------------------------------------------------------------
// ---------------------------CODIGO_PGTO---------------------------------
// -----------------------------------------------------------------------
/**
 * @class Codigo_pgto
 * @brief Representa um código de pagamento.
 * @details Fomato XXXXXXXX onde X é dígito de (0-9) e o primeito dígito é diferente de zero.
 */
class Codigo_pgto {
    private:
        std::string codigo_pgto;
        void validar(const std::string& codigo_pgto);
    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo codigo_pgto após validá-lo.
         * @param codigo O código de pagamento a ser definido.
         */
        void setCodigo_pgto(const std::string& codigo_pgto);
        /**
         * @brief Método que retorna o valor do atributo codigo_pgto.
         * @return codigo_pgto
         */
        std::string getCodigo_pgto() const;
};
//Implementação do método getCodigo_pgto
inline std::string Codigo_pgto::getCodigo_pgto() const {
    return codigo_pgto;
}
// -----------------------------------------------------------------------
// ------------------------------NOME-------------------------------------
// -----------------------------------------------------------------------
/**
 * @class Nome
 * @brief Representa um nome.
 * @details Possui uma ou duas palavras com tamanho entre [3, 10]. A primeira
            letra de cada palavra é letra maiúscula e em caso de duas palavras,
            estas são separadas por espaço em branco.
 */
class Nome {
    private:
        std::string nome;
        void validar(const std::string& nome);
    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo nome após validá-lo.
         * @param nome O nome a ser definido.
         */
        void setNome(const std::string& nome);
        /**
         * @brief Método que retorna o valor do atributo nome.
         * @return nome
         */
        std::string getNome() const;
};
//Implementação do método setNome
inline std::string Nome::getNome() const {
    return nome;
}
// -----------------------------------------------------------------------
// ------------------------------ESTADO-----------------------------------
// -----------------------------------------------------------------------
/**
 * @class Estado
 * @brief Representa um estado de pagamento.
 * @details Pode assumir os valores: Previsto, Liquidado ou Inadimplente.
 */
class Estado {
    private:
        std::string estado;
        void validar(const std::string& estado);
    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo estado após validá-lo.
         * @param estado O estado do pagamento a ser armazenado.
         */
        void setEstado(const std::string& estado);
        /**
         * @brief Método que retorna o valor do atributo estado.
         * @return estado
         */
        std::string getEstado() const;
};
//Implementação do método getEstado
inline std::string Estado::getEstado() const{
    return estado;
}
// -----------------------------------------------------------------------
// -------------------------------SETOR-----------------------------------
// -----------------------------------------------------------------------
/**
 * @class Setor
 * @brief Representa um setor da indústria.
 * @details Pode assumir os valores: Agricultura, Construção civil, Energia,
                                     Finanças, Imobiliário, Papel e celulose,
                                     Pecuária, Química e petroquímica,
                                     Metalurgia e siderurgia, Mineração.
 */
class Setor {
    private:
        std::string setor;
        void validar(const std::string&);
    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo setor após validá-lo.
         * @param setor O setor a ser definido.
         */
        void setSetor(const std::string&);
        /**
         * @brief Método que retorna o valor do atributo setor.
         * @return setor
         */
        std::string getSetor() const;
};
//Implementação do método getSetor
inline std::string Setor::getSetor() const{
    return setor;
}
// -----------------------------------------------------------------------
// -----------------------------DINHEIRO----------------------------------
// -----------------------------------------------------------------------
/**
 * @class Dinheiro
 * @brief Representa uma quantia de dinheiro.
 * @details Pode assumir qualquer valor no intervalo [0, 1.000.000,00].
 */
class Dinheiro {
    private:
        static const int LIMITEINF = 0;
        static const int LIMITESUP = 1000000;
        float dinheiro;
        void validar(const float& dinheiro);
    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo dinheiro após validá-lo.
         * @param dinheiro A quantia de dinheiro a ser definida.
         */
        void setDinheiro(const float& dinheiro);
        /**
         * @brief Método que retorna o valor do atributo dinheiro.
         * @return dinheiro
         */
        float getDinheiro() const;
};
//Implementação do método getDinheiro
inline float Dinheiro::getDinheiro() const {
    return dinheiro;
}
// -----------------------------------------------------------------------
// ----------------------------PERCENTUAL---------------------------------
// -----------------------------------------------------------------------
/**
 * @class Percentual
 * @brief Representa um valor de Percentual.
 * @details Pode assumir qualquer valor inteiro no intervalo [0, 100].
 */
class Percentual {
    private:
        static const int LIMITEINF = 0;
        static const int LIMITESUP = 100;
        int percentual;
        void validar(int percent);
    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo percentual após validá-lo.
         * @param percentual O percentual a ser definido.
         */
        void setPercentual(int percentual);
        /**
         * @brief Método que retorna o valor do atributo percentual.
         * @return percentual
         */
        int getPercentual() const;
};
//Implementação do método getPercentual
inline int Percentual::getPercentual() const{
    return percentual;
}
// -----------------------------------------------------------------------------
// ----------------------------CODIGO_TITULO------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Codigo_titulo
 * @brief Representa um código de título público.
 * @details Fomato CDB/CRA/CRI/LCA/LCI/DEBXXXXXXXX onde X é letra maiúscula (A-Z) ou dígito (0-9).
 */
class Codigo_titulo {
    private:
        std::string codigo_titulo;
        void validar(const std::string&);
    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo codigo_titulo após validá-lo.
         * @param codigo_titulo O código de título a ser definido.
         */
        void setCodigo_titulo(const std::string&);
        /**
         * @brief Método que retorna o valor do atributo codigo_titulo.
         * @return codigo_titulo
         */
        std::string getCodigo_titulo() const;
};
//Implementação do método getCodigo_titulo
inline std::string Codigo_titulo::getCodigo_titulo() const {
    return codigo_titulo;
}
// -----------------------------------------------------------------------------
// -----------------------------------SENHA-------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Senha
 * @brief Representa a senha numérica.
 * @details Fomato XXXXXX onde X é dígito (0-9) e o primeiro termo é diferente de zero.
            Não pode haver sequências numéricas de qualquer natureza.
 */
class Senha {
    private:
        std::string senha;
        void validar(const std::string&);

    public:/**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo senha após validá-lo.
         * @param senha A senha a ser definida.
         */
        void setSenha(const std::string&);
        /**
         * @brief Método que retorna o valor do atributo senha.
         * @return senha
         */
        std::string getSenha() const;
};
//Implementação do método getSenha
inline std::string Senha::getSenha() const {
    return senha;
}
// -----------------------------------------------------------------------------
// -----------------------------------DATA-------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Data
 * @brief Representa uma data.
 * @details Fomato DD-MM-AAA, onde DD representa o dia, MM representa o mês e AAAA representa o ano.
 */
class Data {
    private:
        std::string data;
        void validar(const std::string&);

    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo data após validá-lo.
         * @param data A data a ser definida.
         */
        void setData(const std::string&);
        /**
         * @brief Método que retorna o valor do atributo data.
         * @return data
         */
        std::string getData() const;
};
//Implementação do método getData
inline std::string Data::getData() const {
    return data;
}
// -----------------------------------------------------------------------------
// ------------------------------------CPF--------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Cpf
 * @brief Representa um número de CPF.
 * @details Fomato XXX.XXX.XXX-CC onde X é dígito (0-9) e CC são caracteres de validação de CPF.
 */
class Cpf {
    private:
        std::string cpf;
        int calcPrimeiro(const std::string& cpf_numerico);
        int calcSegundo(const std::string& cpf_numerico);
        void validar(const std::string&);

    public:
        /**
         * @brief Método de armazenamento da classe.
         * @details Essa função define um valor ao atributo cpf após validá-lo.
         * @param cpf O cpf a ser definido.
         */
        void setCpf(const std::string&);
        /**
         * @brief Método que retorna o valor do atributo cpf.
         * @return cpf
         */
        std::string getCpf() const;
};
//Implementação do método getCpf
inline std::string Cpf::getCpf() const {
    return cpf;
}
#endif // DOMINIOS_H_INCLUDE
