#include "Pessoa.h"

Pessoa::Pessoa(){
  nome = "";
  data_nascimento = "";
  telefone = "";
  email = "";
}

string Pessoa::GetNome(){
  return nome;
}
void Pessoa::SetNome(string n){
  nome = n;
}

string Pessoa::GetData_Nascimento(){
  return data_nascimento;
}
void Pessoa::SetData_Nascimento(string d){
  data_nascimento = d;
}

string Pessoa::GetTelefone(){
  return telefone;
}
void Pessoa::SetTelefone(string t){
  telefone = t;
}

string Pessoa::GetEmail(){
  return email;
}
void Pessoa::SetEmail(string e){
  email = e;
}