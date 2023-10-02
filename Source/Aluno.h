#include "Usuario.h"
#include "Responsavel.h"

#pragma once

class Aluno : public Usuario {

private:
  Responsavel responsavel;

public:
  Aluno();

  void SalvarDadosAluno(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha);

  void AssociarResponsavel();
  void AssociarResponsavel(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email);
  string GetNomeResponsavel();
  string GetData_NascimentoResponsavel();
  string GetTelefoneResponsavel();
  string GetEmailResponsavel();

};