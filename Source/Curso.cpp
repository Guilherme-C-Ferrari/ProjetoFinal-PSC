#include "Curso.h"

Curso::Curso(){
  nome = "";
  horario = "";
  data_inicio = "";
  data_fim = "";
  local = "";
  qnt_matricula = 0;
}

string Curso::GetNome(){
  return nome;
}
void Curso::SetNome(string n){
  nome = n;
}

string Curso::GetHorario(){
  return horario;
}
void Curso::SetHorario(string h){
  horario = h;
}

string Curso::GetData_Inicio(){
  return data_inicio;
}
void Curso::SetData_Inicio(string d){
  data_inicio = d;
}

string Curso::GetData_Fim(){
  return data_fim;
}
void Curso::SetData_fim(string d){
  data_fim = d;
}

string Curso::GetLocal(){
  return local;
}
void Curso::SetLocal(string l){
  local = l;
}

int Curso::GetQnt_Matricula(){
  return qnt_matricula;
}
void Curso::SetQnt_Matricula(int q){
  qnt_matricula = q;
}

void Curso::AssociarProfessor(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha, string arg_area, string arg_qualificacao){

  professor.SetNome(arg_nome);
  professor.SetData_Nascimento(arg_data_nascimento);
  professor.SetTelefone(arg_telefone);
  professor.SetEmail(arg_email);
  professor.SetNumero_Registro(arg_numero_registro);
  professor.SetSenha(arg_senha);
  professor.SetArea(arg_area);
  professor.SetQualificacao(arg_qualificacao);
}

void Curso::ListarDados(){
  cout << nome << " -> " << horario << endl;
}

void Curso::MostrarDetalhes(){
  cout << endl << "Curso: " << nome << endl;
  cout << "Horário: " << horario << endl;

  if (professor.GetNome() == "") {
    cout << "Professor: Ainda não definido" << endl;
  }else {
    cout << "Professor: " << professor.GetNome() << endl;
  }
  
  cout << "Sala: " << local << endl;
  cout << "Data de início: " << data_inicio << endl;
  cout << "Data de fim: " << data_fim << endl;
}

void Curso::IncrementarMatriculas(){
  qnt_matricula++;
}

void Curso::SalvarDadosCurso(string arg_nome, string arg_horario, string arg_data_inicio, string arg_data_fim, string arg_local, int arg_qnt_matricula){

  SetNome(arg_nome);
  SetHorario(arg_horario);
  SetData_Inicio(arg_data_inicio);
  SetData_fim(arg_data_fim);
  SetLocal(arg_local);
  SetQnt_Matricula(arg_qnt_matricula);
}

bool Curso::VerificarDisponibilidade(){
  if (qnt_matricula < 15){
    return true;
  }else {
    return false;
  }
}