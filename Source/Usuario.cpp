#include "Usuario.h"

Usuario::Usuario(){
  nome = "";
  data_nascimento = "";
  telefone = "";
  email = "";
  numero_registro = 0;
  senha = "";
}

int Usuario::GetNumero_Registro(){
  return numero_registro;
}
void Usuario::SetNumero_Registro(int n){
  numero_registro = n;
}

string Usuario::GetSenha(){
  return senha;
}
void Usuario::SetSenha(string s){
  senha = s;
}