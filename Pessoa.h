#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using namespace std;

class Pessoa {

protected:
  string nome;
  string data_nascimento;
  string telefone;
  string email;

public:
  Pessoa();

  string GetNome();  
  void SetNome(string n);
  
  string GetData_Nascimento();
  void SetData_Nascimento(string d);

  string GetTelefone();
  void SetTelefone(string t);

  string GetEmail();
  void SetEmail(string e);

};
#endif