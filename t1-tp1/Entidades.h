#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominios.h"

/**
 * @file Entidades.h
 * @brief Declara��es das classes Entidades.
 * @author La�ssa Soares - 22/2032982
 * @details Trabalho 1
 */
//----------------------------------------------------------
// C�digo para declara��o da classe entidade Conta.
//----------------------------------------------------------
/**
 * @class Conta
 * @brief Representa uma conta.
 * @details Possui tr�s atributos: CPF, Nome e Senha.
 */
class Conta{
    private:
            Cpf cpf; /**< Armazena o CPF. */
            Nome nome; /**< Armazena o nome. */
            Senha senha; /**< Armazena a senha. */
    public:
            void setCpf(const Cpf&);
            Cpf getCpf() const;
            void setNome(const Nome&);
            Nome getNome() const;
            void setSenha(const Senha&);
            Senha getSenha() const;
};
// -----------------------------------------------------------------------
// C�digo para declara��o da classe entidade Pagamento.
// -----------------------------------------------------------------------
/**
 * @class Pagamento
 * @brief Representa um pagamento.
 * @details Possui quatro atributos: C�digo de pagamento, Data, Percentual e Estado.
 */
class Pagamento {
    private:
            Codigo_pgto codigo_pgto; /**< Armazena o C�digo de pagamento. */
            Data data; /**< Armazena a data. */
            Percentual percentual; /**< Armazena o percentual. */
            Estado estado; /**< Armazena o estado. */
    public:
            void setCodigo_pgto(const Codigo_pgto&);
            Codigo_pgto getCodigo_pgto() const;
            void setData(const Data&);
            Data getData() const;
            void setPercentual(const Percentual&);
            Percentual getPercentual() const;
            void setEstado(const Estado&);
            Estado getEstado() const;
};
// -----------------------------------------------------------------------
// C�digo para declara��o da classe entidade T�tulo.
// -----------------------------------------------------------------------
/**
 * @class Titulo
 * @brief Representa um t�tulo p�blico.
 * @details Possui seis atributos: C�digo de t�tulo, Emissor, Setor, Emiss�o, Vencimento e Valor.
 */
class Titulo{
    private:
            Codigo_titulo codigo; /**< Armazena o c�digo de t�tulo. */
            Nome emissor; /**< Armazena o nome do emissor. */
            Setor setor; /**< Armazena o setor. */
            Data emissao; /**< Armazena a data de emiss�o. */
            Data vencimento; /**< Armazena a data do vencimento. */
            Dinheiro valor; /**< Armazena o valor em dinheiro. */
    public:
            void setCodigo(const Codigo_titulo&);
            Codigo_titulo getCodigo() const;
            void setEmissor(const Nome&);
            Nome getEmissor() const;
            void setSetor(const Setor&);
            Setor getSetor() const;
            void setEmissao(const Data&);
            Data getEmissao() const;
            void setVencimento(const Data&);
            Data getVencimento() const;
            void setValor(const Dinheiro&);
            Dinheiro getValor() const;
};

#endif // ENTIDADES_H_INCLUDED
