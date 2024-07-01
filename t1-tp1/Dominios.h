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
 * @brief Declara��es das classes Dom�nios.
 * @author La�ssa Soares - 22/2032982
 * @details Trabalho 1
 */
// -----------------------------------------------------------------------
// ---------------------------CODIGO_PGTO---------------------------------
// -----------------------------------------------------------------------
/**
 * @class Codigo_pgto
 * @brief Representa um c�digo de pagamento.
 * @details Fomato XXXXXXXX onde X � d�gito de (0-9) e o primeito d�gito � diferente de zero.
 */
class Codigo_pgto {
    private:
        std::string codigo_pgto;
        void validar(const std::string& codigo_pgto);
    public:
        /**
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo codigo_pgto ap�s valid�-lo.
         * @param codigo O c�digo de pagamento a ser definido.
         */
        void setCodigo_pgto(const std::string& codigo_pgto);
        /**
         * @brief M�todo que retorna o valor do atributo codigo_pgto.
         * @return codigo_pgto
         */
        std::string getCodigo_pgto() const;
};
//Implementa��o do m�todo getCodigo_pgto
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
            letra de cada palavra � letra mai�scula e em caso de duas palavras,
            estas s�o separadas por espa�o em branco.
 */
class Nome {
    private:
        std::string nome;
        void validar(const std::string& nome);
    public:
        /**
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo nome ap�s valid�-lo.
         * @param nome O nome a ser definido.
         */
        void setNome(const std::string& nome);
        /**
         * @brief M�todo que retorna o valor do atributo nome.
         * @return nome
         */
        std::string getNome() const;
};
//Implementa��o do m�todo setNome
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
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo estado ap�s valid�-lo.
         * @param estado O estado do pagamento a ser armazenado.
         */
        void setEstado(const std::string& estado);
        /**
         * @brief M�todo que retorna o valor do atributo estado.
         * @return estado
         */
        std::string getEstado() const;
};
//Implementa��o do m�todo getEstado
inline std::string Estado::getEstado() const{
    return estado;
}
// -----------------------------------------------------------------------
// -------------------------------SETOR-----------------------------------
// -----------------------------------------------------------------------
/**
 * @class Setor
 * @brief Representa um setor da ind�stria.
 * @details Pode assumir os valores: Agricultura, Constru��o civil, Energia,
                                     Finan�as, Imobili�rio, Papel e celulose,
                                     Pecu�ria, Qu�mica e petroqu�mica,
                                     Metalurgia e siderurgia, Minera��o.
 */
class Setor {
    private:
        std::string setor;
        void validar(const std::string&);
    public:
        /**
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo setor ap�s valid�-lo.
         * @param setor O setor a ser definido.
         */
        void setSetor(const std::string&);
        /**
         * @brief M�todo que retorna o valor do atributo setor.
         * @return setor
         */
        std::string getSetor() const;
};
//Implementa��o do m�todo getSetor
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
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo dinheiro ap�s valid�-lo.
         * @param dinheiro A quantia de dinheiro a ser definida.
         */
        void setDinheiro(const float& dinheiro);
        /**
         * @brief M�todo que retorna o valor do atributo dinheiro.
         * @return dinheiro
         */
        float getDinheiro() const;
};
//Implementa��o do m�todo getDinheiro
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
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo percentual ap�s valid�-lo.
         * @param percentual O percentual a ser definido.
         */
        void setPercentual(int percentual);
        /**
         * @brief M�todo que retorna o valor do atributo percentual.
         * @return percentual
         */
        int getPercentual() const;
};
//Implementa��o do m�todo getPercentual
inline int Percentual::getPercentual() const{
    return percentual;
}
// -----------------------------------------------------------------------------
// ----------------------------CODIGO_TITULO------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Codigo_titulo
 * @brief Representa um c�digo de t�tulo p�blico.
 * @details Fomato CDB/CRA/CRI/LCA/LCI/DEBXXXXXXXX onde X � letra mai�scula (A-Z) ou d�gito (0-9).
 */
class Codigo_titulo {
    private:
        std::string codigo_titulo;
        void validar(const std::string&);
    public:
        /**
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo codigo_titulo ap�s valid�-lo.
         * @param codigo_titulo O c�digo de t�tulo a ser definido.
         */
        void setCodigo_titulo(const std::string&);
        /**
         * @brief M�todo que retorna o valor do atributo codigo_titulo.
         * @return codigo_titulo
         */
        std::string getCodigo_titulo() const;
};
//Implementa��o do m�todo getCodigo_titulo
inline std::string Codigo_titulo::getCodigo_titulo() const {
    return codigo_titulo;
}
// -----------------------------------------------------------------------------
// -----------------------------------SENHA-------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Senha
 * @brief Representa a senha num�rica.
 * @details Fomato XXXXXX onde X � d�gito (0-9) e o primeiro termo � diferente de zero.
            N�o pode haver sequ�ncias num�ricas de qualquer natureza.
 */
class Senha {
    private:
        std::string senha;
        void validar(const std::string&);

    public:/**
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo senha ap�s valid�-lo.
         * @param senha A senha a ser definida.
         */
        void setSenha(const std::string&);
        /**
         * @brief M�todo que retorna o valor do atributo senha.
         * @return senha
         */
        std::string getSenha() const;
};
//Implementa��o do m�todo getSenha
inline std::string Senha::getSenha() const {
    return senha;
}
// -----------------------------------------------------------------------------
// -----------------------------------DATA-------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Data
 * @brief Representa uma data.
 * @details Fomato DD-MM-AAA, onde DD representa o dia, MM representa o m�s e AAAA representa o ano.
 */
class Data {
    private:
        std::string data;
        void validar(const std::string&);

    public:
        /**
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo data ap�s valid�-lo.
         * @param data A data a ser definida.
         */
        void setData(const std::string&);
        /**
         * @brief M�todo que retorna o valor do atributo data.
         * @return data
         */
        std::string getData() const;
};
//Implementa��o do m�todo getData
inline std::string Data::getData() const {
    return data;
}
// -----------------------------------------------------------------------------
// ------------------------------------CPF--------------------------------------
// -----------------------------------------------------------------------------
/**
 * @class Cpf
 * @brief Representa um n�mero de CPF.
 * @details Fomato XXX.XXX.XXX-CC onde X � d�gito (0-9) e CC s�o caracteres de valida��o de CPF.
 */
class Cpf {
    private:
        std::string cpf;
        int calcPrimeiro(const std::string& cpf_numerico);
        int calcSegundo(const std::string& cpf_numerico);
        void validar(const std::string&);

    public:
        /**
         * @brief M�todo de armazenamento da classe.
         * @details Essa fun��o define um valor ao atributo cpf ap�s valid�-lo.
         * @param cpf O cpf a ser definido.
         */
        void setCpf(const std::string&);
        /**
         * @brief M�todo que retorna o valor do atributo cpf.
         * @return cpf
         */
        std::string getCpf() const;
};
//Implementa��o do m�todo getCpf
inline std::string Cpf::getCpf() const {
    return cpf;
}
#endif // DOMINIOS_H_INCLUDE
