# 💼 Sistema de Gerenciamento de Conta Bancária

Projeto desenvolvido na disciplina **Técnicas de Programação 1 - UnB** com foco na aplicação de conceitos de programação orientada a objetos, testes automatizados, modularização e documentação técnica com Doxygen.

---

## 🎯 Objetivo

Implementar um sistema modular e funcional que permita a manipulação de dados de investimentos em renda fixa, utilizando boas práticas de engenharia de software, como:
  - Separação de responsabilidades entre camadas (apresentação e serviços).
  - Definição clara entre classes de domínio e classes de entidade.
  - Criação de testes de unidade.
  - Documentação automatizada do código-fonte.

---

## ⚙️ Funcionalidades

- O sistema oferece suporte às operações básicas (CRUD) nas seguintes entidades:
  - **Conta**: Cadastro de usuários, autenticação e acesso.
  - **Título**: Registro de investimentos como CDB, LCA, LCI, CRI e CRA, com data de emissão, vencimento, valor e tipo.
  - **Pagamento**: Associação de pagamentos a títulos, respeitando as regras de data.

- Regras de Negócio:
  - Apenas usuários autenticados podem operar no sistema.
  - Títulos só podem ser excluídos se não tiverem pagamentos associados.
  - Datas de pagamento devem estar entre a emissão e o vencimento do título.

---

## 🧱 Estrutura de Classes

- 🔹 **Classes de Domínio**
Representam os valores fundamentais do sistema, como CPF, nome, código de banco, datas, etc.<br>
Cada classe de domínio é responsável por validar seus próprios dados.<br>
*Exemplo: Classe CPF valida se o número informado possui o formato correto e lança exceção caso seja inválido.*

  - Características:
    - Armazenam um único valor (tipo primitivo).
    - Possuem métodos *set()* com validação e *get()* para retorno do valor.

- 🔹 **Classes de Entidade**
Representam objetos do mundo real manipulados pelo sistema: contas, títulos e pagamentos.

  - Características:
    - Compostas por várias instâncias de classes de domínio. <br>
    *Exemplo: a classe Conta pode conter CPF, Nome, Senha, etc.*
    - Permitem acesso e modificação de seus atributos via métodos públicos *set()* e *get()*.

---

## 🧪 Testes de Unidade
Cada classe de domínio e entidade possui um teste de unidade específico para garantir o correto funcionamento e robustez.
- Testes realizam:
  - Verificação com valores válidos e inválidos.
  - Confirmação de que exceções são lançadas corretamente.
  - Relatório de sucesso ou falha ao final da execução do teste.

--- 

## 💻 Linguagem de Programação
- Linguagem C++
- Paradigma orientado a objetos.
- Utilização de conceitos como encapsulamento, modularização e tratamento de exceções.

--- 

## 📄 Documentação do Código
- Ferramenta utilizada: **Doxygen**
- Geração automática da documentação a partir dos comentários no código-fonte.
- Saída gerada no formato HTML.

---

## 📜 Licença
Este projeto é apenas para fins educacionais e não possui licença comercial.
