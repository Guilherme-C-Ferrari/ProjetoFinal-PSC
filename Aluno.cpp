#include "Aluno.h"

Aluno::Aluno(){
  nome = "";
  data_nascimento = "";
  telefone = "";
  email = "";
  numero_registro = 0;
  senha = "";
}

void Aluno::SalvarDadosAluno(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha){

  SetNome(arg_nome);
  SetData_Nascimento(arg_data_nascimento);
  SetTelefone(arg_telefone);
  SetEmail(arg_email);
  SetNumero_Registro(arg_numero_registro);
  SetSenha(arg_senha);
}

void Aluno::AssociarResponsavel(){

  string apoioString;

  cout << "\nInsira o nome do responsável:\n";
  cin.ignore();
  getline(cin, apoioString);
  responsavel.SetNome(apoioString);

  cout << "\nInsira a data de nascimento do responsável:\n";
  cin >> apoioString;
  responsavel.SetData_Nascimento(apoioString);

  cout << "\nInsira o telefone do responsável:\n";
  cin >> apoioString;
  responsavel.SetTelefone(apoioString);

  cout << "\nInsira o e-mail do responsável:\n";
  cin >> apoioString;
  responsavel.SetEmail(apoioString);
}

void Aluno::AssociarResponsavel(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email){
  responsavel.SetNome(arg_nome);
  responsavel.SetData_Nascimento(arg_data_nascimento);
  responsavel.SetTelefone(arg_telefone);
  responsavel.SetEmail(arg_email);
}

string Aluno::GetNomeResponsavel(){
  return responsavel.GetNome();
}

string Aluno::GetData_NascimentoResponsavel(){
  return responsavel.GetData_Nascimento();
}

string Aluno::GetTelefoneResponsavel(){
  return responsavel.GetTelefone();
}

string Aluno::GetEmailResponsavel(){
  return responsavel.GetEmail();
}