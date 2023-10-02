#include "Matricula.h"

Matricula::Matricula(){
  data_matricula = "";
  codigo_matricula = 0;
}

string Matricula::GetData_Matricula(){
  return data_matricula;
}
void Matricula::SetData_Matricula(string d){
  data_matricula = d;
}

int Matricula::GetCodigo_Matricula(){
  return codigo_matricula;
}
void Matricula::SetCodigo_Matricula(int c){
  codigo_matricula = c;
}

void Matricula::AssociarAluno(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha){
  
  aluno.SalvarDadosAluno(arg_nome, arg_data_nascimento, arg_telefone, arg_email, arg_numero_registro, arg_senha);
  
}

void Matricula::AssociarCurso(string arg_nome, string arg_horario, string arg_data_inicio, string arg_data_fim, string arg_local, int arg_qnt_matricula){

  if (curso[0].GetNome() == "") {
    curso[0].SalvarDadosCurso(arg_nome, arg_horario, arg_data_inicio, arg_data_fim, arg_local, arg_qnt_matricula);
  }else {
    curso[1].SalvarDadosCurso(arg_nome, arg_horario, arg_data_inicio, arg_data_fim, arg_local, arg_qnt_matricula);
  }

  
}

void Matricula::ListarDados(){
  cout << "\n----------------------------------\n";
  cout << "Código: " << codigo_matricula << endl;
  cout << "Data: " << data_matricula << endl;
  cout << "Nome do aluno: " << aluno.GetNome() << endl;
  cout << "Nome do curso: " << curso->GetNome() << endl;
}

string Matricula::GetNomeAluno(){
  return aluno.GetNome();
}

string Matricula::GetData_NascimentoAluno(){
  return aluno.GetData_Nascimento();
}

string Matricula::GetTelefoneAluno(){
  return aluno.GetTelefone();
}

string Matricula::GetEmailAluno(){
  return aluno.GetEmail();
}

int Matricula::GetNumero_RegistroAluno(){
  return aluno.GetNumero_Registro();
}

string Matricula::GetSenhaAluno(){
  return aluno.GetSenha();
}

string Matricula::GetNomeCurso(int arg_i){
  int i = arg_i;

  return curso[i].GetNome();
}

string Matricula::GetHorarioCurso(int arg_i){
  int i = arg_i;

  return curso[i].GetHorario();
}

string Matricula::GetData_InicioCurso(int arg_i){
  int i = arg_i;

  return curso[i].GetData_Inicio();
}

string Matricula::GetData_FimCurso(int arg_i){
  int i = arg_i;

  return curso[i].GetData_Fim();
}

string Matricula::GetLocalCurso(int arg_i){
  int i = arg_i;

  return curso[i].GetLocal();
} 

int Matricula::GetQnt_Matricula(int arg_i){
  int i = arg_i;

  return curso[i].GetQnt_Matricula();
}