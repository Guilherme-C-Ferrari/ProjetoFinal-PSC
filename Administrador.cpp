#include "Administrador.h"

Administrador::Administrador(){
  nome = "";
  data_nascimento = "";
  telefone = "";
  email = "";
  numero_registro = 0;
  senha = "";
}

void Administrador::SalvarDadosAdministrador(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha){

  SetNome(arg_nome);
  SetData_Nascimento(arg_data_nascimento);
  SetTelefone(arg_telefone);
  SetEmail(arg_email);
  SetNumero_Registro(arg_numero_registro);
  SetSenha(arg_senha);
}