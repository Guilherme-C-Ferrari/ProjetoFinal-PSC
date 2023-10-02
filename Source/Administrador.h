#include "Usuario.h"

class Administrador : public Usuario {

public:
  Administrador();

  void SalvarDadosAdministrador(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha);

};