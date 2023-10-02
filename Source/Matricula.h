#include "Aluno.h"
#include "Curso.h"
using namespace std;

class Matricula {

private:
  string data_matricula;
  int codigo_matricula;
  Aluno aluno;
  Curso curso[2];

public:
  Matricula();

  string GetData_Matricula();
  void SetData_Matricula(string d);

  int GetCodigo_Matricula();
  void SetCodigo_Matricula(int c);

  void AssociarAluno(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha);
  void AssociarCurso(string arg_nome, string arg_horario, string arg_data_inicio, string arg_data_fim, string arg_local, int arg_qnt_matricula);

  void ListarDados();

  string GetNomeAluno();
  string GetData_NascimentoAluno();
  string GetTelefoneAluno();
  string GetEmailAluno();
  int GetNumero_RegistroAluno();
  string GetSenhaAluno();

  string GetNomeCurso(int arg_i);
  string GetHorarioCurso(int arg_i);
  string GetData_InicioCurso(int arg_i);
  string GetData_FimCurso(int arg_i);
  string GetLocalCurso(int arg_i);  
  int GetQnt_Matricula(int arg_i);

};