#include "Pessoa.h"

#pragma once

class Usuario : public Pessoa {

protected:
  int numero_registro;
  string senha;

public:
  Usuario();

  int GetNumero_Registro();
  void SetNumero_Registro(int n);

  string GetSenha();
  void SetSenha(string s);

};