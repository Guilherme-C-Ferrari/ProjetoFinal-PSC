#include "Fundacao.h"

Fundacao::Fundacao(){}

void Fundacao::Start(){

  administrador_registrado[0].SalvarDadosAdministrador("Guilherme Ferrari", "13/10/2003", "(51) 99999-55555", "guilherme@ferrari.com", 100, "NI130*");

  administrador_registrado[1].SalvarDadosAdministrador("João Otávio", "07/10/2003", "(51) 99999-55555", "joao@neumann.com", 300, "JO007&");

  professor_registrado[0].SalvarDadosProfessor("Paulo", "20/04/1991", "(51) 99999-77777", "paulo@paulo.com", 4811, "ABD132!", "Desenho", "Faculdade X");

  professor_registrado[1].SalvarDadosProfessor("Joana", "31/12/1969", "(51) 99999-77776", "joana@joana.com", 3721, "FAF313*!", "Música", "Faculdade X");

  professor_registrado[2].SalvarDadosProfessor("Claúdia", "04/06/1992", "(51) 99999-77778", "claudia@claudia.com", 4120, "tsgad31*", "Dança", "Faculdade Y");
  
  aluno_registrado[0].SalvarDadosAluno("Ada Lovelace", "10/12/2010", "(99) 999999 - 999982", "ada@lovelace.com", 34122, "A12345!");
  aluno_registrado[0].AssociarResponsavel("Carlos Babbage", "06/11/1974", "(99) 999999 - 999991", "carlos@babbage.com");
    
  aluno_registrado[1].SalvarDadosAluno("John Jobs", "05/05/2008", "(99) 999999 - 999981", "john@jobs.com", 91248, "B54321@");
  aluno_registrado[1].AssociarResponsavel("Carlos Babbage", "06/11/1974", "(99) 999999 - 999991", "carlos@babbage.com");
  
  aluno_registrado[2].SalvarDadosAluno("Luisa Turing", "07/11/2010", "(99) 999999 - 111101", "luisa@turing.com", 13456, "C34512#");
  aluno_registrado[2].AssociarResponsavel("Dennis Ritchie", "03/06/1976", "(99) 999999 - 111111", "rit@ritchie.edu");

  curso_registrado[0].SalvarDadosCurso("Desenho", "9h - 10h (ter e qui)", "05/07/2022", "01/12/2022", "Sala 202", 2);
  curso_registrado[0].AssociarProfessor(professor_registrado[0].GetNome(), professor_registrado[0].GetData_Nascimento(), professor_registrado[0].GetTelefone(), professor_registrado[0].GetEmail(), professor_registrado[0].GetNumero_Registro(), professor_registrado[0].GetSenha(), professor_registrado[0].GetArea(), professor_registrado[0].GetQualificacao());
    
  curso_registrado[1].SalvarDadosCurso("Dança", "15h - 16h (ter e sex)", "04/07/2022", "02/12/2022", "Sala 201", 1);
  curso_registrado[1].AssociarProfessor(professor_registrado[2].GetNome(), professor_registrado[2].GetData_Nascimento(), professor_registrado[2].GetTelefone(), professor_registrado[2].GetEmail(), professor_registrado[2].GetNumero_Registro(), professor_registrado[2].GetSenha(), professor_registrado[2].GetArea(), professor_registrado[2].GetQualificacao());
    
  curso_registrado[2].SalvarDadosCurso("Violão Básico", "10h - 12h (qua)", "06/07/2022", "30/11/2022", "Sala 203", 1);
  curso_registrado[2].AssociarProfessor(professor_registrado[1].GetNome(), professor_registrado[1].GetData_Nascimento(), professor_registrado[1].GetTelefone(), professor_registrado[1].GetEmail(), professor_registrado[1].GetNumero_Registro(), professor_registrado[1].GetSenha(), professor_registrado[1].GetArea(), professor_registrado[1].GetQualificacao());

  matricula_registrada[0].SetCodigo_Matricula(105114);
  matricula_registrada[0].SetData_Matricula("22/06/2022");
  matricula_registrada[0].AssociarAluno(aluno_registrado[0].GetNome(), aluno_registrado[0].GetData_Nascimento(), aluno_registrado[0].GetTelefone(), aluno_registrado[0].GetEmail(), aluno_registrado[0].GetNumero_Registro(), aluno_registrado[0].GetSenha());
  matricula_registrada[0].AssociarCurso(curso_registrado[0].GetNome(), curso_registrado[0].GetHorario(), curso_registrado[0].GetData_Inicio(), curso_registrado[0].GetData_Fim(), curso_registrado[0].GetLocal(), curso_registrado[0].GetQnt_Matricula());
  matricula_registrada[0].AssociarCurso(curso_registrado[2].GetNome(), curso_registrado[2].GetHorario(), curso_registrado[2].GetData_Inicio(), curso_registrado[2].GetData_Fim(), curso_registrado[2].GetLocal(), curso_registrado[2].GetQnt_Matricula());

  matricula_registrada[1].SetCodigo_Matricula(131415);
  matricula_registrada[1].SetData_Matricula("23/06/2022");
  matricula_registrada[1].AssociarAluno(aluno_registrado[1].GetNome(), aluno_registrado[1].GetData_Nascimento(), aluno_registrado[1].GetTelefone(), aluno_registrado[1].GetEmail(), aluno_registrado[1].GetNumero_Registro(), aluno_registrado[1].GetSenha());
  matricula_registrada[1].AssociarCurso(curso_registrado[0].GetNome(), curso_registrado[0].GetHorario(), curso_registrado[0].GetData_Inicio(), curso_registrado[0].GetData_Fim(), curso_registrado[0].GetLocal(), curso_registrado[0].GetQnt_Matricula());

  matricula_registrada[2].SetCodigo_Matricula(235325);
  matricula_registrada[2].SetData_Matricula("23/06/2022");
  matricula_registrada[2].AssociarAluno(aluno_registrado[2].GetNome(), aluno_registrado[2].GetData_Nascimento(), aluno_registrado[2].GetTelefone(), aluno_registrado[2].GetEmail(), aluno_registrado[1].GetNumero_Registro(), aluno_registrado[2].GetSenha());
  matricula_registrada[2].AssociarCurso(curso_registrado[1].GetNome(), curso_registrado[1].GetHorario(), curso_registrado[1].GetData_Inicio(), curso_registrado[1].GetData_Fim(), curso_registrado[1].GetLocal(), curso_registrado[1].GetQnt_Matricula());
  
  cout << "Bem vindo a Fundação Raízes do Sul" << endl;
}

void Fundacao::Run(){

  string menu = "0";  
  string apoioString = "";

  do {

    apoioString = "";

    cout << "\n---------------------MENU----------------------" << endl << endl;
    cout << "Diga a opcao que deseja:\n\n";
    cout << "1 - Realizar login\n";
  	cout << "2 - Solicitar registro de usuário\n";    
    cout << "3 - Encerrar programa\n\n";
    cin >> menu;
  
    if (menu == "1") {
      RealizarLogin();
    }else if (menu == "2") {
      SolicitarRegistroUsuario(); 
    }else if (menu == "3"){
      
      do {
        cout << "\nVocê tem certeza que deseja encerrar o programa?" << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Não" << endl << endl;
        cin >> apoioString;
  
        if (apoioString == "1") {
          cout << "\nO programa será finalizado." << endl;
        }else if (apoioString == "2"){
          cout << "\nO programa voltará ao menu." << endl;
          menu = "0";
        }else {
          cout << "\nOpção inválida. Escolha uma opção válida." << endl;
        }
      } while (apoioString != "1" && apoioString != "2");
      
    }else {
      cout << "\nOpção inválida. Escolha uma opção válida." << endl;
    }
    
  } while (menu != "3");
  
}

void Fundacao::Finish(){
  cout << "\nO programa foi finalizado." << endl;
  exit(0);
}

void Fundacao::RealizarLogin(){

  int apoioInt = 0;
  string apoioString = "";
  string login = "0";
  int i = 0;
  bool teste_registro;
  bool teste_senha;

  cout << "\n--------------------------------";
  cout << "\nComo deseja logar?" << endl;
  cout << "1 - Aluno" << endl;
  cout << "2 - Professor" << endl;
  cout << "3 - Administrador" << endl;
  cout << "4 - Voltar ao menu" << endl << endl;
  cin >> login;
  
  if (login == "1") {

    do {
      cout << "\nQual seu número de registro aluno?" << endl;
      cin >> apoioInt;
  
      do {
  
        if (apoioInt == aluno_registrado[i].GetNumero_Registro()){
          do {
            cout << "\nDigite sua senha." << endl;
            cin >> apoioString;

            do {
              
              if (apoioString == aluno_registrado[i].GetSenha()) {
                cout << "\nLogin realizado." << endl;
                teste_senha = true;
                UtilizarMenuAluno(i);
              }else {
                teste_senha = false;
              }
              
              i++;
            } while (i < 50 && teste_senha == false);

            if (teste_senha == false) {
              cout << "\nSenha errada." << endl;
            }

            i = 0;
          } while (teste_senha != true);
          teste_registro = true;
        }else {
          teste_registro = false;
        }
        
        i++;  
      } while (i < 50 && teste_registro == false);
      
      if (teste_registro == false) {
        cout << "\nNúmero de registro não encontrado." << endl;
      }
      
      i = 0;
    } while (teste_registro != true);
    
  }else if (login == "2") {
    
    do {
      cout << "\nQual seu número de registro professor?" << endl;
      cin >> apoioInt;
  
      do {
  
        if (apoioInt == professor_registrado[i].GetNumero_Registro()){
          do {
            cout << "\nDigite sua senha." << endl;
            cin >> apoioString;

            do {
              
              if (apoioString == professor_registrado[i].GetSenha()) {
                cout << "\nLogin realizado." << endl;
                teste_senha = true;
                UtilizarMenuProfessor(i);
              }else {
                teste_senha = false;
              }
              
              i++;
            } while (i < 50 && teste_senha == false);

            if (teste_senha == false) {
              cout << "\nSenha errada." << endl;
            }

            i = 0;
          } while (teste_senha != true);
          teste_registro = true;
        }else {
          teste_registro = false;
        }
        
        i++;  
      } while (i < 50 && teste_registro == false);
      
      if (teste_registro == false) {
        cout << "\nNúmero de registro não encontrado." << endl;
      }
      
      i = 0;
    } while (teste_registro != true);
    
  }else if (login == "3") {
    
    do {
      cout << "\nQual seu número de registro administrador?" << endl;
      cin >> apoioInt;
  
      do {
  
        if (apoioInt == administrador_registrado[i].GetNumero_Registro()){
          do {
            cout << "\nDigite sua senha." << endl;
            cin >> apoioString;

            do {
              
              if (apoioString == administrador_registrado[i].GetSenha()) {
                cout << "\nLogin realizado." << endl;
                teste_senha = true;
                UtilizarMenuAdministrador(i);
              }else {
                teste_senha = false;
              }
              
              i++;
            } while (i < 50 && teste_senha == false);

            if (teste_senha == false) {
              cout << "\nSenha errada." << endl;
            }

            i = 0;
          } while (teste_senha != true);
          teste_registro = true;
        }else {
          teste_registro = false;
        }
        
        i++;  
      } while (i < 50 && teste_registro == false);
      
      if (teste_registro == false) {
        cout << "\nNúmero de registro não encontrado." << endl;
      }
      
      i = 0;
    } while (teste_registro != true);
    
  }else if (login == "4") {
    cout << "\nVoltando ao menu" << endl;
  }else {
    cout << "\nOpção inválida. Voltando ao menu" << endl;
  }

}

void Fundacao::SolicitarRegistroUsuario(){
  int apoioInt = 0;
  string apoioString = "";
  string registro = "0";
  int i = 0;
  bool teste_registro;
  bool teste_senha;

  cout << "\n--------------------------------";
  cout << "\nComo deseja se registrar?" << endl;
  cout << "1 - Aluno" << endl;
  cout << "2 - Professor" << endl;
  cout << "3 - Voltar ao menu" << endl << endl;
  cin >> registro;

  if (registro == "1") {

    while (i < 50 && aluno_pendente[i].GetNome() != ""){
      i++;
    }

    cout << "\nInsira seu nome:" << endl;
    cin.ignore();
    getline(cin, apoioString);
    aluno_pendente[i].SetNome(apoioString);

    cout << "\nInsira sua data de nascimento:" << endl;
    cin >> apoioString;
    aluno_pendente[i].SetData_Nascimento(apoioString);

    cout << "\nInsira seu telefone:" << endl;
    cin.ignore();
    getline(cin, apoioString);
    aluno_pendente[i].SetTelefone(apoioString);
    
    cout << "\nInsira seu e-mail:" << endl;
    cin >> apoioString;
    aluno_pendente[i].SetEmail(apoioString);

    aluno_pendente[i].AssociarResponsavel();

    apoioInt = rand() % (10001) + 10000;
    aluno_pendente[i].SetNumero_Registro(apoioInt);
    cout << "\nAnote seu número de registro: " << aluno_pendente[i].GetNumero_Registro();

    cout << "\nInsira sua senha:" << endl;
    cin >> apoioString;
    aluno_pendente[i].SetSenha(apoioString); 

    cout << "\nSolicitação de registro aberta. Aguarde seu registro ser afirmado." << endl;

  }else if (registro == "2") {

    while (i < 50 && professor_pendente[i].GetNome() != ""){
      i++;
    }

    cout << "\nInsira seu nome:" << endl;
    cin.ignore();
    getline(cin, apoioString);
    professor_pendente[i].SetNome(apoioString);

    cout << "\nInsira sua data de nascimento:" << endl;
    cin >> apoioString;
    professor_pendente[i].SetData_Nascimento(apoioString);

    cout << "\nInsira seu telefone:" << endl;
    cin.ignore();
    getline(cin, apoioString);
    professor_pendente[i].SetTelefone(apoioString);
    
    cout << "\nInsira seu e-mail:" << endl;
    cin >> apoioString;
    professor_pendente[i].SetEmail(apoioString);

    cout << "\nInsira sua área:" << endl;
    cin.ignore();
    getline(cin, apoioString);
    professor_pendente[i].SetArea(apoioString);

    cout << "\nInsira sua qualificação:" << endl;
    cin.ignore();
    getline(cin, apoioString);
    professor_pendente[i].SetQualificacao(apoioString);

    apoioInt = rand() % (1001) + 1000;
    professor_pendente[i].SetNumero_Registro(apoioInt);
    cout << "\nAnote seu número de registro: " << professor_pendente[i].GetNumero_Registro();

    cout << "\nInsira sua senha:" << endl;
    cin >> apoioString;
    professor_pendente[i].SetSenha(apoioString); 

    cout << "\nSolicitação de registro aberta. Aguarde seu registro ser afirmado." << endl;
    
  }else if (registro == "3") {
    cout << "\nVoltando ao menu" << endl;
  }else {
    cout << "\nOpção inválida. Voltando ao menu" << endl;
  }
}

void Fundacao::UtilizarMenuAluno(int arg_i){

  int i_aluno = arg_i;
  int identificador = 1;
  string menu = "0";  
  string apoioString = "";

  do {

    apoioString = "";

    cout << "\n------------------MENU-DO-ALUNO---------------------" << endl << endl;
    cout << "Seja bem vindo(a) " << aluno_registrado[i_aluno].GetNome() << endl;
    cout << "Diga a opcao que deseja:\n\n";
    cout << "1 - Modificar seus dados\n";
    cout << "2 - Consultar cursos\n";
  	cout << "3 - Sair da conta\n";
    cout << "4 - Solicitar matrícula \n\n";
    cin >> menu;

    if (menu == "1") {
      ModificarDadosUsuario(i_aluno, identificador);
    }else if(menu == "2"){
      ConsultarCurso();
    }else if(menu == "3"){
      
      do {
        cout << "\nVocê tem certeza que deseja sair de sua conta?" << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Não" << endl << endl;
        cin >> apoioString;
  
        if (apoioString == "1") {
          cout << "\nSua sessão será encerrada." << endl;
        }else if (apoioString == "2"){
          cout << "\nO programa voltará ao menu." << endl;
          menu = "0";
        }else {
          cout << "\nOpção inválida. Escolha uma opção válida." << endl;
        }
      } while (apoioString != "1" && apoioString != "2");
      
    }else if(menu == "4"){
      SolicitarMatricula(i_aluno);
    }else {
      cout << "\nOpção inválida. Escolha uma opção válida." << endl;
    }

  } while (menu != "3");  
  
}

void Fundacao::UtilizarMenuProfessor(int arg_i){
  
  int i_professor = arg_i;
  int identificador = 2;
  string menu = "0";  
  string apoioString = "";

  do {

    apoioString = "";

    cout << "\n------------------MENU-DO-PROFESSOR---------------------" << endl << endl;
    cout << "Seja bem vindo(a) " << aluno_registrado[i_professor].GetNome() << endl;
    cout << "Diga a opcao que deseja:\n\n";
    cout << "1 - Modificar seus dados\n";
    cout << "2 - Consultar cursos\n";
  	cout << "3 - Sair da conta\n";
    cin >> menu;

    if (menu == "1") {
      ModificarDadosUsuario(i_professor, identificador);
    }else if(menu == "2"){
      ConsultarCurso();
    }else if(menu == "3"){
      
      do {
        cout << "\nVocê tem certeza que deseja sair de sua conta?" << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Não" << endl << endl;
        cin >> apoioString;
  
        if (apoioString == "1") {
          cout << "\nSua sessão será encerrada." << endl;
        }else if (apoioString == "2"){
          cout << "\nO programa voltará ao menu." << endl;
          menu = "0";
        }else {
          cout << "\nOpção inválida. Escolha uma opção válida." << endl;
        }
      } while (apoioString != "1" && apoioString != "2");
      
    }else {
      cout << "\nOpção inválida. Escolha uma opção válida." << endl;
    }

  } while (menu != "3");
  
}

void Fundacao::UtilizarMenuAdministrador(int arg_i){
  
  int i_adm = arg_i;
  int identificador = 3;
  string menu = "0";  
  string apoioString = "";

  do {

    apoioString = "";

    cout << "\n------------------MENU-DO-ADMINISTRADOR---------------------" << endl << endl;
    cout << "Seja bem vindo(a) " << administrador_registrado[i_adm].GetNome() << endl;
    cout << "Diga a opcao que deseja:\n\n";
    cout << "1 - Modificar seus dados\n";
    cout << "2 - Consultar cursos\n";
  	cout << "3 - Sair da conta\n";
    cout << "4 - Registrar usuário\n";
    cout << "5 - Aprovar matrícula\n";
    cout << "6 - Registrar curso\n";
    cout << "7 - Modificar curso\n";
    cout << "8 - Consultar matrículas\n\n";
    cin >> menu;

    if (menu == "1") {
      ModificarDadosUsuario(i_adm, identificador);
    }else if(menu == "2"){
      ConsultarCurso();
    }else if(menu == "3"){
      
      do {
        cout << "\nVocê tem certeza que deseja sair de sua conta?" << endl;
        cout << "1 - Sim" << endl;
        cout << "2 - Não" << endl << endl;
        cin >> apoioString;
  
        if (apoioString == "1") {
          cout << "\nSua sessão será encerrada." << endl;
        }else if (apoioString == "2"){
          cout << "\nO programa voltará ao menu." << endl;
          menu = "0";
        }else {
          cout << "\nOpção inválida. Escolha uma opção válida." << endl;
        }
      } while (apoioString != "1" && apoioString != "2");
      
    }else if(menu == "4"){
      RegistrarUsuario();
    }else if(menu == "5"){
      AprovarMatricula();
    }else if(menu == "6"){
      RegistrarCurso();
    }else if(menu == "7"){
      ModificarCurso();
    }else if(menu == "8"){
      ConsultarMatriculas();
    }else {
      cout << "\nOpção inválida. Escolha uma opção válida." << endl;
    }

  } while (menu != "3");
  
}

void Fundacao::RegistrarUsuario(){

  int i_alunos = 0;
  int i_professor = 0;
  int i_adms = 0;
  int i_auxiliar = 0;
  string apoioString;
  int apoioInt;

  while (i_professor < 50 && professor_pendente[i_professor].GetNome() != ""){
    i_professor++;
  }

  while (i_alunos < 50 && aluno_pendente[i_alunos].GetNome() != ""){
    i_alunos++;
  }

  if (i_professor > 0 || i_alunos > 0) {
    cout << "\nHá " << i_professor << " professor(es) e " << i_alunos << " aluno(s) com registro pedente.\n";
  }else {
    cout << "\nNão há solicitações de registro em aberto\n";
  }

  cout << "\nO que você deseja fazer?\n";
  cout << "\n1 - Registrar um novo usuário";
  cout << "\n2 - Registrar um usuário pendente\n\n";
  cin >> apoioString;

  if (apoioString == "1"){
    cout << "\nQue tipo de usuário você deseja registrar?\n";
    cout << "\n1 - Aluno";
    cout << "\n2 - Professor";
    cout << "\n3 - Administrador\n\n";
    cin >> apoioString;

    if (apoioString == "1"){

      i_alunos = 0;

      while (i_alunos < 50 && aluno_registrado[i_alunos].GetNome() != ""){
        i_alunos++;
      }
      
      cout << "\nInsira seu nome:" << endl;
      cin.ignore();
      getline(cin, apoioString);
      aluno_registrado[i_alunos].SetNome(apoioString);
  
      cout << "\nInsira sua data de nascimento:" << endl;
      cin >> apoioString;
      aluno_registrado[i_alunos].SetData_Nascimento(apoioString);
  
      cout << "\nInsira seu telefone:" << endl;
      cin.ignore();
      getline(cin, apoioString);
      aluno_registrado[i_alunos].SetTelefone(apoioString);
      
      cout << "\nInsira seu e-mail:" << endl;
      cin >> apoioString;
      aluno_registrado[i_alunos].SetEmail(apoioString);
  
      aluno_registrado[i_alunos].AssociarResponsavel();
  
      apoioInt = rand() % (10001) + 10000;
      aluno_registrado[i_alunos].SetNumero_Registro(apoioInt);
      cout << "\nAnote o número de registro: " <<           
      aluno_registrado[i_alunos].GetNumero_Registro();
  
      cout << "\nInsira sua senha:" << endl;
      cin >> apoioString;
      aluno_registrado[i_alunos].SetSenha(apoioString); 
  
      cout << "\nAluno Registrado\n" << endl;
      
    }else if (apoioString == "2"){
      
      while (i_professor < 50 && professor_registrado[i_professor].GetNome() != ""){
        i_professor++;
      }
  
      cout << "\nInsira seu nome:" << endl;
      cin.ignore();
      getline(cin, apoioString);
      professor_registrado[i_professor].SetNome(apoioString);
  
      cout << "\nInsira sua data de nascimento:" << endl;
      cin >> apoioString;
      professor_registrado[i_professor].SetData_Nascimento(apoioString);
  
      cout << "\nInsira seu telefone:" << endl;
      cin.ignore();
      getline(cin, apoioString);
      professor_registrado[i_professor].SetTelefone(apoioString);
      
      cout << "\nInsira seu e-mail:" << endl;
      cin >> apoioString;
      professor_registrado[i_professor].SetEmail(apoioString);
  
      cout << "\nInsira sua área:" << endl;
      cin.ignore();
      getline(cin, apoioString);
      professor_registrado[i_professor].SetArea(apoioString);
  
      cout << "\nInsira sua qualificação:" << endl;
      cin.ignore();
      getline(cin, apoioString);
      professor_registrado[i_professor].SetQualificacao(apoioString);
  
      apoioInt = rand() % (1001) + 1000;
      professor_registrado[i_professor].SetNumero_Registro(apoioInt);
      cout << "\nAnote o número de registro: " << professor_registrado[i_professor].GetNumero_Registro();
  
      cout << "\nInsira sua senha:" << endl;
      cin >> apoioString;
      professor_registrado[i_professor].SetSenha(apoioString); 
  
      cout << "\nProfessor registrado\n"<< endl;
      
    }else if (apoioString == "3"){

      while (i_professor < 50 && administrador_registrado[i_adms].GetNome() != ""){
        i_adms++;
      }
      
      cout << "\nInsira o nome do admnistrador:\n";
      cin.ignore();
      getline(cin, apoioString);
      administrador_registrado[i_adms].SetNome(apoioString);
    
      cout << "\nInsira a data de nascimento do admnistrador:\n";
      cin >> apoioString;
      administrador_registrado[i_adms].SetData_Nascimento(apoioString);
    
      cout << "\nInsira o telefone do admnistrador:\n";
      cin >> apoioString;
      administrador_registrado[i_adms].SetTelefone(apoioString);
    
      cout << "\nInsira o e-mail do admnistrador:\n";
      cin >> apoioString;
      administrador_registrado[i_adms].SetEmail(apoioString);

      apoioInt = rand() % (101) + 100;
      administrador_registrado[i_adms].SetNumero_Registro(apoioInt);
      cout << "\nAnote o número de registro do administrador: " << administrador_registrado[i_adms].GetNumero_Registro();

      cout << "\nInsira a senha do administrador:" << endl;
      cin >> apoioString;
      administrador_registrado[i_adms].SetSenha(apoioString);

      cout << "\nAdmnistrador registrado\n";
        
    }else {
      cout << "\nOpção inválida. Voltando ao menu" << endl;
    }
    
  }else if (apoioString == "2"){
    cout << "\nQue tipo de usuário pedente você deseja registrar?\n";
    cout << "\n1 - Aluno";
    cout << "\n2 - Professor\n\n";
    cin >> apoioString;

    if (apoioString == "1"){
      cout << "----------Lista de Alunos Pedentes-----------\n";

      for (int i = 0; i < i_alunos; i++) {
        cout << "\nNome: "<< aluno_pendente[i].GetNome() << " - Número de registro:" << aluno_pendente[i].GetNumero_Registro();
      }
    
      cout << "\n---------------------------------------------";

      i_alunos = 0;

      cout << "\nQual numero de registro do aluno que você deseja aprovar?" << endl;
      cin >> apoioInt;

      while (i_alunos < 50 && aluno_pendente[i_alunos].GetNumero_Registro() != apoioInt){
        i_alunos++;
      }

      while (i_auxiliar < 50 && aluno_registrado[i_auxiliar].GetNome() != ""){
        i_auxiliar++;
      }

      aluno_registrado[i_auxiliar].SalvarDadosAluno(aluno_pendente[i_alunos].GetNome(), aluno_pendente[i_alunos].GetData_Nascimento(), aluno_pendente[i_alunos].GetTelefone(), aluno_pendente[i_alunos].GetEmail(), aluno_pendente[i_alunos].GetNumero_Registro(), aluno_pendente[i_alunos].GetSenha());
      aluno_registrado[i_auxiliar].AssociarResponsavel(aluno_pendente[i_alunos].GetNomeResponsavel(), aluno_pendente[i_alunos].GetData_NascimentoResponsavel(), aluno_pendente[i_alunos].GetTelefoneResponsavel(), aluno_pendente[i_alunos].GetEmailResponsavel());

      aluno_pendente[i_alunos].SalvarDadosAluno("", "", "", "", 0, "");
      aluno_pendente[i_alunos].AssociarResponsavel("", "", "", "");

      cout << "\nAluno registrado.\n";

    }else if (apoioString == "2"){
      
      cout << "----------Lista de Professores Pedentes-----------\n";

      for (int i = 0; i < i_professor; i++) {
        cout << "\nNome: "<< professor_pendente[i].GetNome() << " - Número de registro:" << professor_pendente[i].GetNumero_Registro();
      }
    
      cout << "\n------------------------------------------------";

      i_professor = 0;

      cout << "\nQual numero de registro do aluno que você deseja aprovar?" << endl;
      cin >> apoioInt;

      while (i_professor < 50 && professor_pendente[i_professor].GetNumero_Registro() != apoioInt){
        i_professor++;
      }

      while (i_auxiliar < 50 && professor_registrado[i_auxiliar].GetNome() != ""){
        i_auxiliar++;
      }

      professor_registrado[i_auxiliar].SalvarDadosProfessor(professor_pendente[i_professor].GetNome(), professor_pendente[i_professor].GetData_Nascimento(), professor_pendente[i_professor].GetTelefone(), professor_pendente[i_professor].GetEmail(), professor_pendente[i_professor].GetNumero_Registro(), professor_pendente[i_professor].GetSenha(), professor_pendente[i_professor].GetArea(), professor_pendente[i_professor].GetQualificacao());

      professor_pendente[i_professor].SalvarDadosProfessor("", "", "", "", 0, "", "", "");

      cout << "\nProfessor registrado.\n";
      
    }else {
      cout << "\nOpção inválida. Voltando ao menu" << endl;
    }
    
  }else {
    cout << "\nOpção inválida. Voltando ao menu" << endl;
  }
  
}

void Fundacao::ModificarDadosUsuario(int arg_i, int arg_indentificador){

  int identificador = arg_indentificador;
  int posicao = arg_i;
  string apoioString;

  if (identificador == 1){
    
    cout << "\nOlá aluno, qual dado seu deseja mudar?\n\n";
    cout << "1 - Nome\n";
    cout << "2 - Telefone\n";
    cout << "3 - Email\n";
    cin >> apoioString;

    if (apoioString == "1"){
      
      cout << "\nQual o nome que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      aluno_registrado[posicao].SetNome(apoioString);

      cout << "\nMudança realizada\n";
      
    }else if (apoioString == "2"){
      cout << "\nQual o telefone que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      aluno_registrado[posicao].SetTelefone(apoioString);

      cout << "\nMudança realizada\n";
    }else if (apoioString == "3"){
      cout << "\nQual o email que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      aluno_registrado[posicao].SetEmail(apoioString);

      cout << "\nMudança realizada\n";
    }else {
      cout << "\nOpção inválida. Voltando ao menu" << endl;
    }
    
  }else if(identificador == 2){
    
    cout << "\nOlá professor, qual dado seu deseja mudar?\n\n";
    cout << "1 - Nome\n";
    cout << "2 - Telefone\n";
    cout << "3 - Email\n";
    cin >> apoioString;

    if (apoioString == "1"){
      cout << "\nQual o nome que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      professor_registrado[posicao].SetNome(apoioString);

      cout << "\nMudança realizada\n";
      
    }else if (apoioString == "2"){
      cout << "\nQual o telefone que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      professor_registrado[posicao].SetTelefone(apoioString);

      cout << "\nMudança realizada\n";
    }else if (apoioString == "3"){
      cout << "\nQual o email que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      professor_registrado[posicao].SetEmail(apoioString);

      cout << "\nMudança realizada\n";
    }else {
      cout << "\nOpção inválida. Voltando ao menu" << endl;
    }
    
  }else if(identificador == 3){
    
    cout << "\nOlá professor, qual dado seu deseja mudar?\n\n";
    cout << "1 - Nome\n";
    cout << "2 - Telefone\n";
    cout << "3 - Email\n";
    cin >> apoioString;

    if (apoioString == "1"){
      cout << "\nQual o nome que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      administrador_registrado[posicao].SetNome(apoioString);

      cout << "\nMudança realizada\n";
      
    }else if (apoioString == "2"){
      cout << "\nQual o telefone que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      administrador_registrado[posicao].SetTelefone(apoioString);

      cout << "\nMudança realizada\n";
    }else if (apoioString == "3"){
      cout << "\nQual o email que deseja colocar?\n";
      cin.ignore();
      getline (cin, apoioString);

      administrador_registrado[posicao].SetEmail(apoioString);

      cout << "\nMudança realizada\n";
    }else {
      cout << "\nOpção inválida. Voltando ao menu" << endl;
    }
    
  }
  
}

void Fundacao::RegistrarCurso(){
  
  int i_cursos = 0;
  int i_professor = 0;
  string apoioString = "";

  while (i_cursos < 50 && curso_registrado[i_cursos].GetNome() != ""){
    i_cursos++;
  }

  cout  << "\nQual o nome do curso que deseja registrar?\n\n";
  cin.ignore();
  getline(cin, apoioString);
  curso_registrado[i_cursos].SetNome(apoioString);

  cout  << "\nQual o horário do curso que deseja registrar?\n\n";
  cin.ignore();
  getline(cin, apoioString);
  curso_registrado[i_cursos].SetHorario(apoioString);

  cout  << "\nQual a data de início do curso que deseja registrar?\n\n";
  cin.ignore();
  getline(cin, apoioString);
  curso_registrado[i_cursos].SetData_Inicio(apoioString);

  cout  << "\nQual a data de fim do curso que deseja registrar?\n\n";
  cin.ignore();
  getline(cin, apoioString);
  curso_registrado[i_cursos].SetData_fim(apoioString);

  cout  << "\nQual o local do curso que deseja registrar?\n\n";
  cin.ignore();
  getline(cin, apoioString);
  curso_registrado[i_cursos].SetLocal(apoioString);

  curso_registrado[i_cursos].SetQnt_Matricula(0);

  cout << "\nVocê deseja associar um professor ao curso?\n";
  cout << "\n1 - Sim";
  cout << "\n2 - Não\n\n";
  cin >> apoioString;

  if (apoioString == "1") {

    cout  << "\nQual o nome do professor que deseja associar??\n\n";
    cin.ignore();
    getline(cin, apoioString);
  
    while (i_professor < 50 && professor_registrado[i_professor].GetNome() != apoioString){
      i_professor++;
    }
      
    curso_registrado[i_cursos].AssociarProfessor(professor_registrado[i_professor].GetNome(), professor_registrado[i_professor].GetData_Nascimento(), professor_registrado[i_professor].GetTelefone(), professor_registrado[i_professor].GetEmail(), professor_registrado[i_professor].GetNumero_Registro(), professor_registrado[i_professor].GetSenha(), professor_registrado[i_professor].GetArea(), professor_registrado[i_professor].GetQualificacao());
  }
  
}

void Fundacao::ConsultarCurso(){

  int i_cursos = 0;
  string apoioString = "";

  while (i_cursos < 50 && curso_registrado[i_cursos].GetNome() != ""){
    i_cursos++;
  }
  
  cout << "-------------Lista de Cursos--------------\n";

  for (int i = 0; i < i_cursos; i++) {
    curso_registrado[i].ListarDados();
  }

  cout << "------------------------------------------";

  cout  << "\nQual o nome do curso que deseja visualizar?\n\n";
  cin.ignore();
  getline(cin, apoioString);

  i_cursos = 0;

  while (i_cursos < 50 && curso_registrado[i_cursos].GetNome() != apoioString){
      i_cursos++;
  }

  curso_registrado[i_cursos].MostrarDetalhes();
  
}

void Fundacao::ModificarCurso(){
  int i_cursos = 0;
  int i_professor = 0;
  string apoioString = "";
  bool isTrue;

  cout << "\nQual o curso nome do curso que você deseja modificar?\n";
  cin.ignore();
  getline(cin, apoioString);

  while (i_cursos < 50 && curso_registrado[i_cursos].GetNome() == apoioString){
    i_cursos++;
  }

  do {

    cout << "\nQual dado do curso você deseja modifica?\n";
    cout << "1 - Nome\n";
    cout << "2 - Horário\n";
  	cout << "3 - Data de início\n";
    cout << "4 - Data de fim\n";
    cout << "5 - Local\n";
    cout << "6 - Professor associado\n";
    cin >> apoioString;

    if (apoioString == "1") {
      cout  << "\nQual o novo nome do curso?\n\n";
      cin.ignore();
      getline(cin, apoioString);
      curso_registrado[i_cursos].SetNome(apoioString);
    }else if (apoioString == "2"){
      cout  << "\nQual o novo horário do curso?\n\n";
      cin.ignore();
      getline(cin, apoioString);
      curso_registrado[i_cursos].SetHorario(apoioString);
    }else if (apoioString == "3"){
      cout  << "\nQual a nova data de início do curso?\n\n";
      cin.ignore();
      getline(cin, apoioString);
      curso_registrado[i_cursos].SetData_Inicio(apoioString);
    }else if (apoioString == "4"){
      cout  << "\nQual a nova data de fim do curso?\n\n";
      cin.ignore();
      getline(cin, apoioString);
      curso_registrado[i_cursos].SetData_fim(apoioString);
    }else if (apoioString == "5"){
      cout  << "\nQual o novo local do curso?\n\n";
      cin.ignore();
      getline(cin, apoioString);
      curso_registrado[i_cursos].SetLocal(apoioString);
    }else if (apoioString == "6"){
      cout  << "\nQual o nome do professor que deseja visualizar?\n\n";
      cin.ignore();
      getline(cin, apoioString);
    
      while (i_professor < 50 && professor_registrado[i_professor].GetNome() != apoioString){
        i_professor++;
      }
        
      curso_registrado[i_cursos].AssociarProfessor(professor_registrado[i_professor].GetNome(), professor_registrado[i_professor].GetData_Nascimento(), professor_registrado[i_professor].GetTelefone(), professor_registrado[i_professor].GetEmail(), professor_registrado[i_professor].GetNumero_Registro(), professor_registrado[i_professor].GetSenha(), professor_registrado[i_professor].GetArea(), professor_registrado[i_professor].GetQualificacao());   
    }else {
      cout << "\nOpção inválida. Voltando ao menu" << endl;
    }
    

    cout << "\nDeseja alterar mais algum dado do curso?" << endl;
    cout << "\n1 - Sim";
    cout << "\n2 - Não\n\n";
    cin >> apoioString;

    if (apoioString == "2") {
      isTrue = false;
    }
    
  } while (isTrue == true);
}

void Fundacao::SolicitarMatricula(int arg_i){

  int i_aluno = arg_i;
  int i_cursos = 0;
  int i_matricula = 0;
  int apoioInt;
  string apoioString;
  bool disponibilidade;
  bool continuar = true;
  
  while (i_matricula < 50 && matricula_pendente[i_matricula].GetCodigo_Matricula() != 0){
    i_matricula++;
  }
  
  matricula_pendente[i_matricula].AssociarAluno(aluno_registrado[i_aluno].GetNome(), aluno_registrado[i_aluno].GetData_Nascimento(), aluno_registrado[i_aluno].GetTelefone(), aluno_registrado[i_aluno].GetEmail(), aluno_registrado[i_aluno].GetNumero_Registro(), aluno_registrado[i_aluno].GetSenha());

  apoioInt = rand() % (100001) + 100000;
  matricula_pendente[i_matricula].SetCodigo_Matricula(apoioInt);

  cout << "\nQual a data de hoje?\n";
  cin >> apoioString;
  matricula_pendente[i_matricula].SetData_Matricula(apoioString);

  while (i_cursos < 50 && curso_registrado[i_cursos].GetNome() != ""){
    i_cursos++;
  }
  
  cout << "-------------Lista de Cursos--------------\n";

  for (int i = 0; i < i_cursos; i++) {
    curso_registrado[i].ListarDados();
  }

  cout << "------------------------------------------";

  do {

    cout  << "\nQual o nome do curso que deseja se matricular?\n\n";
    cin.ignore();
    getline(cin, apoioString);
  
    i_cursos = 0;
  
    while (i_cursos < 50 && curso_registrado[i_cursos].GetNome() != apoioString){
        i_cursos++;
    }

    disponibilidade = curso_registrado[i_cursos].VerificarDisponibilidade();

    if (disponibilidade == true) {
      matricula_pendente[i_matricula].AssociarCurso(curso_registrado[i_cursos].GetNome(), curso_registrado[i_cursos].GetHorario(), curso_registrado[i_cursos].GetData_Inicio(), curso_registrado[i_cursos].GetData_Fim(), curso_registrado[i_cursos].GetLocal(), curso_registrado[i_cursos].GetQnt_Matricula());

      curso_registrado[i_cursos].IncrementarMatriculas();

      continuar = false;
    }
    else {
      cout << "\nO curso em questão está indisponível, deseja escolher outro curso?\n\n";
      cout << "1 - Sim\n";
      cout << "2 - Não\n";
      cin >> apoioString;

      if (apoioString == "1"){
        continuar = true;
      } else if (apoioString == "2"){
        continuar = false;
      }
    }
    
  } while (continuar == true);

  cout << "\nDeseja se matricular em um segundo curso?\n\n";
  cout << "1 - Sim\n";
  cout << "2 - Não\n";
  cin >> apoioString;

  if (apoioString == "1"){
    continuar = true;
    do {

      cout  << "\nQual o nome do curso que deseja se matricular?\n\n";
      cin.ignore();
      getline(cin, apoioString);
    
      i_cursos = 0;
    
      while (i_cursos < 50 && curso_registrado[i_cursos].GetNome() != apoioString){
          i_cursos++;
      }
  
      disponibilidade = curso_registrado[i_cursos].VerificarDisponibilidade();
  
      if (disponibilidade == true) {
        matricula_pendente[i_matricula].AssociarCurso(curso_registrado[i_cursos].GetNome(), curso_registrado[i_cursos].GetHorario(), curso_registrado[i_cursos].GetData_Inicio(), curso_registrado[i_cursos].GetData_Fim(), curso_registrado[i_cursos].GetLocal(), curso_registrado[i_cursos].GetQnt_Matricula());

        curso_registrado[i_cursos].IncrementarMatriculas();
        continuar = false;
      }else {
        cout << "\nO curso em questão está indisponível, deseja escolher outro curso?\n\n";
        cout << "1 - Sim\n";
        cout << "2 - Não\n";
        cin >> apoioString;
  
        if (apoioString == "1"){
          continuar = true;
        } else if (apoioString == "2"){
          continuar = false;
        }
      }
    
    } while (continuar == true);
  }

  cout << "\n\nSolicitação de matricula realiza.\n";
  cout << "Anote seu número de matrícula: " << matricula_pendente[i_matricula].GetCodigo_Matricula();
  
}

void Fundacao::RemoverSolicitacaoMatricula(int arg_i){

  int i_matricula = arg_i;

  matricula_pendente[i_matricula].SetCodigo_Matricula(0);
  matricula_pendente[i_matricula].SetData_Matricula("");
  matricula_pendente[i_matricula].AssociarAluno("", "", "", "", 0, "");
  matricula_pendente[i_matricula].AssociarCurso("", "", "", "", "", 0);
  
}

void Fundacao::AprovarMatricula(){

  int i_aluno = 0;
  int i_curso = 0;
  int i_matricula = 0;
  int i_auxiliar = 0;
  int apoioInt;
  string apoioString;
  
  while (i_matricula < 50 && matricula_pendente[i_matricula].GetCodigo_Matricula() != 0){
    i_matricula++;
  }

  if (i_matricula > 0) {
    cout << "\nHá " << i_matricula << " matrícula(s) pedentes.\n";
  }else {
    cout << "\nNão há solicitações de matrícula em aberto\n";
  }

  cout << "\nO que você deseja fazer?\n";
  cout << "\n1 - Aprovar uma matrícula";
  cout << "\n2 - Voltar ao menu\n\n";
  cin >> apoioString;

  if (apoioString == "1"){

    cout << "-----------Lista de Matrículas Pedentes-----------\n";

    for (int i = 0; i < i_matricula; i++) {
      cout << "\nNome do aluno: "<< matricula_pendente[i].GetNomeAluno() << " - Código de Matrícula:" << matricula_pendente[i].GetCodigo_Matricula();
    }
    
    cout << "\n-----------------------------------------------";

    i_matricula = 0;

    cout << "\nQual o código de matrícula do aluno que você deseja aprovar?" << endl;
    cin >> apoioInt;

    while (i_matricula < 50 && matricula_pendente[i_matricula].GetCodigo_Matricula() != apoioInt){
      i_matricula++;
    }

      while (i_auxiliar < 50 && matricula_registrada[i_auxiliar].GetCodigo_Matricula() != 0){
      i_auxiliar++;
    }

    matricula_registrada[i_auxiliar].SetCodigo_Matricula(matricula_pendente[i_matricula].GetCodigo_Matricula());
    matricula_registrada[i_auxiliar].SetData_Matricula(matricula_pendente[i_matricula].GetData_Matricula());

    matricula_registrada[i_auxiliar].AssociarAluno(matricula_pendente[i_matricula].GetNomeAluno(), matricula_pendente[i_matricula].GetData_NascimentoAluno(), matricula_pendente[i_matricula].GetTelefoneAluno(), matricula_pendente[i_matricula].GetEmailAluno(), matricula_pendente[i_matricula].GetNumero_RegistroAluno(), matricula_pendente[i_matricula].GetSenhaAluno());

    matricula_registrada[i_auxiliar].AssociarCurso( matricula_pendente[i_matricula].GetNomeCurso(0),  matricula_pendente[i_matricula].GetHorarioCurso(0),  matricula_pendente[i_matricula].GetData_InicioCurso(0),  matricula_pendente[i_matricula].GetData_FimCurso(0),  matricula_pendente[i_matricula].GetLocalCurso(0),  matricula_pendente[i_matricula].GetQnt_Matricula(0));

    matricula_registrada[i_auxiliar].AssociarCurso( matricula_pendente[i_matricula].GetNomeCurso(1),  matricula_pendente[i_matricula].GetHorarioCurso(1),  matricula_pendente[i_matricula].GetData_InicioCurso(1),  matricula_pendente[i_matricula].GetData_FimCurso(1),  matricula_pendente[i_matricula].GetLocalCurso(1),  matricula_pendente[i_matricula].GetQnt_Matricula(1));

    RemoverSolicitacaoMatricula(i_matricula);
 
    cout << "\nSua matrícula foi realiza.";
    
  }else if (apoioString == "2") {
    cout << "\nRetornando ao menu";
  }else {
    cout << "\nOpção inválida. Voltando ao menu";
  }
  
}

void Fundacao::ConsultarMatriculas(){
  
  int i_matriculas = 0;

  while (i_matriculas < 50 && matricula_registrada[i_matriculas].GetCodigo_Matricula() != 0){
    i_matriculas++;
  }
  
  cout << "-------------Lista de Matrículas--------------\n";

  for (int i = 0; i < i_matriculas; i++) {
    matricula_registrada[i].ListarDados();
  }

  cout << endl;
  
}