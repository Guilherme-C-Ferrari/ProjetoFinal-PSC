#include "Professor.h"
using namespace std;

#pragma once

class Curso {

private:
  string nome;
  string horario;
  string data_inicio;
  string data_fim;
  string local;
  int qnt_matricula;
  Professor professor;
  
public:
  Curso();

  string GetNome();
  void SetNome(string n);

  string GetHorario();
  void SetHorario(string h);

  string GetData_Inicio();
  void SetData_Inicio(string d);

  string GetData_Fim();
  void SetData_fim(string d);

  string GetLocal();
  void SetLocal(string l);

  int GetQnt_Matricula();
  void SetQnt_Matricula(int q);

  void AssociarProfessor(string arg_nome, string arg_data_nascimento, string arg_telefone, string arg_email, int arg_numero_registro, string arg_senha, string area, string qualificacao);
  void ListarDados();
  void MostrarDetalhes();
  void IncrementarMatriculas();
  void SalvarDadosCurso(string arg_nome, string arg_horario, string arg_data_inicio, string arg_data_fim, string arg_local, int arg_qnt_matricula);
  bool VerificarDisponibilidade();

};