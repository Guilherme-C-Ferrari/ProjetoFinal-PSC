#include "Usuario.h"

class Professor : public Usuario {

private:
  string area;
  string qualificacao;

public:
  Professor();

  string GetArea();
  void SetArea(string a);

  string GetQualificacao();
  void SetQualificacao(string q);

  void SalvarDadosProfessor(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha, string arg_area, string arg_titulacao);

};