#include "Curso.h"
#include "Matricula.h"
#include "Administrador.h"
#include "Aluno.h"

class Fundacao {

private:
  Aluno aluno_registrado[50];
  Aluno aluno_pendente[50];
  Professor professor_registrado[50];
  Professor professor_pendente[50];
  Administrador administrador_registrado[50];
  Curso curso_registrado[50];
  Matricula matricula_registrada[50];
  Matricula matricula_pendente[50];

public:
  Fundacao();

  void Start();
  void Run();
  void Finish();

  void RealizarLogin();
  void SolicitarRegistroUsuario();

  void UtilizarMenuAluno(int arg_i);
  void UtilizarMenuProfessor(int arg_i);
  void UtilizarMenuAdministrador(int arg_i);

  void RegistrarUsuario();
  void ModificarDadosUsuario(int arg_i, int arg_indentificador);

  void RegistrarCurso();
  void ConsultarCurso();
  void ModificarCurso();

  void SolicitarMatricula(int arg_i);
  void RemoverSolicitacaoMatricula(int arg_i);
  void AprovarMatricula();
  void ConsultarMatriculas();

};