# 📦 Sistema de Controle de Estoque em C

Projeto acadêmico desenvolvido em **linguagem C** com o objetivo de realizar o cadastro, controle e classificação de produtos em estoque, aplicando conceitos fundamentais de programação estruturada.

---

## 🧾 Descrição do Projeto

O sistema permite o cadastro de até **10 produtos**, armazenando informações como:
- Código do produto
- Nome
- Valor
- Quantidade em estoque

Com base na quantidade informada, o sistema realiza a **classificação automática do estoque** em:
- **Alto**
- **Baixo**
- **No limite (50 unidades)**

Ao final, o programa exibe:
- A lista completa de produtos cadastrados
- Um **resumo geral do estoque**, indicando a quantidade de produtos em cada classificação

---

## 🛠️ Tecnologias Utilizadas
- Linguagem **C**
- Biblioteca padrão (`stdio.h`, `string.h`)
- Programação estruturada

---

## 📚 Conceitos Aplicados
- Estruturas (`struct`)
- Vetores (arrays)
- Laços de repetição (`for`, `do while`)
- Estruturas condicionais (`if`, `else`)
- Validação de entrada de dados
- Manipulação de strings
- Organização e lógica de programação

---

## ▶️ Como Executar o Projeto

### Pré-requisitos
- Compilador C (ex: **GCC**)

### Compilação
```bash
gcc main.c -o controle_estoque
