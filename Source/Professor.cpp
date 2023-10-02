#include "Professor.h"

Professor::Professor(){
  nome = "";
  data_nascimento = "";
  telefone = "";
  email = "";
  numero_registro = 0;
  senha = "";
  area = "";
  qualificacao = "";
}

string Professor::GetArea(){
  return area;
}
void Professor::SetArea(string a){
  area = a;
}

string Professor::GetQualificacao(){
  return qualificacao;
}
void Professor::SetQualificacao(string q){
  qualificacao = q;
}

void Professor::SalvarDadosProfessor(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha, string arg_area, string arg_titulacao){

  SetNome(arg_nome);
  SetData_Nascimento(arg_data_nascimento);
  SetTelefone(arg_telefone);
  SetEmail(arg_email);
  SetNumero_Registro(arg_numero_registro);
  SetSenha(arg_senha);
  SetArea(arg_area);
  SetQualificacao(arg_titulacao);
}