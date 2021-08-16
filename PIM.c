#include <stdio.h>

#include <string.h>

#include <windows.h>

#include <conio.h>

typedef struct {
  int id;
  int id_unidade;
  char nome[50];
  double rg;
  char dtnasc[10];
  char sexo;
  char endereco[200];
  char telf[20];
  //char  data[20];
  //char  hora[20];
}
paciente;

typedef struct {
  int id;
  int id_unidade;
  char nome[50];
  double rg;
  char dtnasc[10];
  char sexo;
  char endereco[200];
  char telf[20];
  char login[50];
  char senha[50];
}
funcionario;

typedef struct {
  int id;
  int id_unidade;
  char nome[50];
  double rg;
  char endereco[200];
  char dtnasc[10];
  char sexo;
  char especialidade[30];
  int crm;
  char telf[20];
  float vconsulta;
}
medico;

typedef struct {
  char nome[50];
  char endereco[50];
  int id_unidade;
}
clinica;

typedef struct {
  paciente p;
  medico m;
  char horario[20];
  char data[15];
  int status;
}
consulta;

void comentariodaconsulta(){ char comentario[300];

printf("Bom dia ,comente sobre o nosso atendimento: "); scanf("%s",comentario);
}

void calculodasunidades(int unidade1, int unidade2,int unidade3){

printf("O numero de pacientes na unidade 1: "); scanf("%d", &unidade1);
printf("O numero de pacientes na unidade 2: "); scanf("%d", &unidade2);
printf("O numero de pacientes na unidade 3: "); scanf("%d", &unidade3);
}

void redemaisatende(int unidade1, int unidade2,int unidade3){ int i; int contador; paciente p[300];
  
	int Unidades[3];
    int maior;
    int unidadeM;
    
    printf("\n\t\tMaior numero de paciente por clinica.\n\n");

    // Recebendo os valores do vetor.
    for (i = 1; i < 4; ++i) {
        printf(" Unidade[%d]: ", i);
        scanf("%d", &Unidades[i]);
    }
    
    /* 
    As variáveis, maior e menor, recebem inicialmente o valor
    do primeiro elemento do vetor, ou seja, A[0].
    */
    maior = Unidades[0]; 
    unidadeM = 0;


    for (i = 0; i < 5; ++i) {
        if (Unidades[i] > maior)
        {
        	maior = Unidades[i];
        	unidadeM = i;
		}
    }
        
    printf("\n\nRede que mais atende: Unidade %d\n", unidadeM);
    printf("\n\nNumero de Paciente: %d\n", maior);
    
    getch();

}

void faturamentodarede(){
int ortopedista1, clinico_geral1, dermatologista1,valor_ortopedista, valor_clinico_geral, valor_dermatologista, valor_unidade1, valor_unidade2, valor_unidade3,
ortopedista2,clinico_geral2,dermatologista2,ortopedista3,clinico_geral3,dermatologista3;
valor_ortopedista = 120;
valor_clinico_geral = 100;
valor_dermatologista = 90;


printf("Digite o numero de pacientes no ortepedista da unidade 1: "); scanf("%d", &ortopedista1);
printf("Digite o numero de pacientes no clinico geral da unidade 1: "); scanf("%d", &clinico_geral1);
printf("Digite o numero de pacientes no dermatologista da unidade 1: "); scanf("%d", &dermatologista1);
printf("Digite o numero de pacientes no ortepedista da unidade 2: "); scanf("%d", &ortopedista2);
printf("Digite o numero de pacientes no clinico geral da unidade 2: "); scanf("%d", &clinico_geral2);
printf("Digite o numero de pacientes no dermatologista da unidade 2: "); scanf("%d", &dermatologista2);
printf("Digite o numero de pacientes no ortepedista da unidade 3: "); scanf("%d", &ortopedista3);
printf("Digite o numero de pacientes no clinico geral da unidade 3: "); scanf("%d", &clinico_geral3);
printf("Digite o numero de pacientes no dermatologista da unidade 3: "); scanf("%d", &dermatologista3);

valor_unidade1 = valor_ortopedista*ortopedista1 + valor_clinico_geral * clinico_geral1 + valor_dermatologista * dermatologista1;

valor_unidade2 = valor_ortopedista*ortopedista2 + valor_clinico_geral * clinico_geral2 + valor_dermatologista * dermatologista2;

valor_unidade3 = valor_ortopedista*ortopedista3 + valor_clinico_geral * clinico_geral3 + valor_dermatologista * dermatologista3;

printf("O valor da unidade 1: %d\n", valor_unidade1); printf("O valor da unidade 2: %d\n", valor_unidade2); printf("O valor da unidade 3: %d\n", valor_unidade3);
}

int main() {
	

  int idUnidadeSessao = 1;

  int posiAtualNPaciente = 0;
  int totPacientes = 20;
  paciente pa[totPacientes]; // VARIAVEL DE PARTICIPANTE

  int posiAtualNMedico = 0;
  int totMedicos = 20;
  medico med[totMedicos]; // VARIAVEL DE PARTICIPANTE

  int posiAtualNFuncionario = 0;
  int totFuncionarios = 20;
  funcionario fun[totFuncionarios]; // VARIAVEL DE PARTICIPANTE

  //  int horarios = 9;
  //int diaSemana = 6;
  int posiAtualNConsulta = 0;
  int totConsulta = 20;
  consulta consu[totConsulta];

  //	pa.id = 1;
  //	pa.id_unidade = 2;
  //	strcpy(pa.nome, "Kaio Lopes");
  //	pa.rg = 111111;
  //	strcpy(pa.dtnasc, "02/05/2996");
  //	strcpy(pa.endereco, "Rua H, 628");
  //	(pa.sexo, 'M');

  int opmenu;
  int opcada;
  int opcd;
  int voltarmenu;
  int unidade1;
  int unidade2;
  int unidade3;

  int id_unidade;
  char nome[50];
  double rg;
  char dtnasc[10];
  char sexo;
  char endereco[200];
  char telf[20];
  int id;
  float vconsulta;
  char login[50];
  char senha[50];
  char especialidade[30];
  int crm;
  char horario[5];
  char data[10];
  
  	//variaveis
	char loginGenerico[15] = "admin";
	char senhaGenerica[15] = "admin";
	
    
	//Inicio		

		
	printf("Seja Bem vindo ao sistema de gerenciamento especializado da Clinica XI \n");
	
    
	printf("LOGIN: ");
    scanf("%s",login);
    scanf("%s",senha);

    
    if ((strcmp(loginGenerico, login)==0) && (strcmp(senhaGenerica, senha)== 0))
    {
    	system("cls");
		printf("OLA %s ", login);
		printf(" SEJA BEM VINDO !!\n ");
    }
	else{
    
    	system("cls");
    	printf("USUARIO OU SENHA INCORRETA");
        return ;	
    }
    

  do {

    system("cls");

    printf("\n              ########       MENU      ########                   \n");
    printf("\n     [1] CADASTRO                             \n");
    printf("\n     [2] AGENDAR CONSULTA                            \n");
    printf("\n     [3] CANCELAMENTO DE CONSULTA                         \n");
    printf("\n     [4] RELATORIOS                         \n");
    printf("\n     [5] RECLAMACAO E ELOGIO PACIENTES                         \n");

    scanf("%d", & opmenu);
    printf("%d", opmenu);

    switch (opmenu) {
    case 1:
      system("cls");
      do {
        printf("\n               #######      CADASTRO     ####### ");
        printf(" \n     O que deseja cadastrar ? \n");
        printf("\n     [1] CADASTRAR PACIENTE                         \n");
        printf("\n     [2] CADASTRAR MEDICO                         \n");
        printf("\n     [3] CADASTRAR FUNCIONARIO                         \n");
		printf("\n     [4] VOLTAR                         \n");

        scanf("%d", & opcada);
        printf("%d", opcada);

        switch (opcada) {
        case 1:

          system("cls");

          printf("\n ######  Cadastro de Paciente #####");

          pa[posiAtualNPaciente].id = posiAtualNPaciente;
          //printf(pa[posiAtualNPaciente].id);

          printf("\n   ID Unidade : \n");
          printf("\n   [1] Unidade 1\n");
          printf("\n   [2] Unidade 2\n");
          printf("\n   [3] Unidade 3\n");
          scanf("%d", & id_unidade);
          pa[posiAtualNPaciente].id_unidade = id_unidade;
          //printf(pa[posiAtualNPaciente].id_unidade);

          printf("\n   Nome: ");
          scanf("%s", & nome);
          strcpy(pa[posiAtualNPaciente].nome, nome);
          //printf("%s",pa[posiAtualNPaciente].nome);
          fflush(stdin);

          printf("\n   RG: ");
          scanf("%d", & rg);
          pa[posiAtualNPaciente].rg = rg;
          //printf("%d",pa[posiAtualNPaciente].rg);
          fflush(stdin);

          printf("\n   Data de Nascimento: ");
          scanf("%s", & dtnasc);
          strcpy(pa[posiAtualNPaciente].dtnasc, dtnasc);
          //printf("%s", pa[posiAtualNPaciente].dtnasc);
          fflush(stdin);

          printf("\n   Sexo: ");
          scanf("%c", & sexo);
          pa[posiAtualNPaciente].sexo = sexo;
          //printf("%c", pa[posiAtualNPaciente].sexo);
          fflush(stdin);

          printf("\n   Endereco: ");
          scanf("%s", & endereco);
          strcpy(pa[posiAtualNPaciente].endereco, endereco);
          //printf("%s", pa[posiAtualNPaciente].endereco);
          fflush(stdin);

          printf("\n   Telefone: ");
          scanf("%s", & telf);
          strcpy(pa[posiAtualNPaciente].telf, telf);
          //printf("%s", pa[posiAtualNPaciente].telf);
          fflush(stdin);

          posiAtualNPaciente++;
          system("cls");
          break;
        case 2:
          system("cls");

          printf("\n ######  Cadastro de Medico #####");

          med[posiAtualNMedico].id = posiAtualNMedico;
          //printf(pa[posiAtualNPaciente].id);

          med[posiAtualNMedico].id_unidade = idUnidadeSessao;
          //printf(pa[posiAtualNPaciente].id_unidade);

          printf("\n   Nome: ");
          scanf("%s", & nome);
          strcpy(med[posiAtualNMedico].nome, nome);
          //printf("%s",pa[posiAtualNPaciente].nome);
          fflush(stdin);

          printf("\n   RG: ");
          scanf("%d", & rg);
          med[posiAtualNMedico].rg = rg;
          //printf("%d",pa[posiAtualNPaciente].rg);
          fflush(stdin);

          printf("\n   Data de Nascimento: ");
          scanf("%s", & dtnasc);
          strcpy(med[posiAtualNMedico].dtnasc, dtnasc);
          //printf("%s", pa[posiAtualNPaciente].dtnasc);
          fflush(stdin);

          printf("\n   Sexo: ");
          scanf("%c", & sexo);
          med[posiAtualNMedico].sexo = sexo;
          //printf("%c", pa[posiAtualNPaciente].sexo);
          fflush(stdin);

          printf("\n   Endereco: ");
          scanf("%s", & endereco);
          strcpy(med[posiAtualNMedico].endereco, endereco);
          //printf("%s", pa[posiAtualNPaciente].endereco);
          fflush(stdin);

          printf("\n   Especialidade: ");
          scanf("%s", & especialidade);
          strcpy(med[posiAtualNMedico].especialidade, especialidade);
          //printf("%s", pa[posiAtualNPaciente].endereco);
          fflush(stdin);

          printf("\n   CRM: ");
          scanf("%d", & crm);
          med[posiAtualNMedico].crm = crm;
          //printf("%d",pa[posiAtualNPaciente].rg);
          fflush(stdin);

          printf("\n   Telefone: ");
          scanf("%s", & telf);
          strcpy(med[posiAtualNMedico].telf, telf);
          //printf("%s", pa[posiAtualNPaciente].telf);
          fflush(stdin);

          posiAtualNMedico++;
          system("cls");
          break;
        case 3:
          system("cls");

          printf("\n ######  Cadastro de funncionario #####");

          fun[posiAtualNFuncionario].id = posiAtualNFuncionario;

          fun[posiAtualNFuncionario].id_unidade = idUnidadeSessao;

          printf("\n   Nome: ");
          scanf("%s", & nome);
          strcpy(fun[posiAtualNFuncionario].nome, nome);
          fflush(stdin);

          printf("\n   RG: ");
          scanf("%d", & rg);
          fun[posiAtualNFuncionario].rg = rg;
          fflush(stdin);

          printf("\n   Data de Nascimento: ");
          scanf("%s", & dtnasc);
          strcpy(fun[posiAtualNFuncionario].dtnasc, dtnasc);
          fflush(stdin);

          printf("\n   Sexo: ");
          scanf("%c", & sexo);
          fun[posiAtualNFuncionario].sexo = sexo;
          fflush(stdin);

          printf("\n   Endereco: ");
          scanf("%s", & endereco);
          strcpy(fun[posiAtualNFuncionario].endereco, endereco);
          fflush(stdin);

          printf("\n   Telefone: ");
          scanf("%s", & telf);
          strcpy(fun[posiAtualNFuncionario].telf, telf);
          fflush(stdin);

          printf("\n   Login: ");
          scanf("%s", & login);
          strcpy(fun[posiAtualNFuncionario].login, login);
          fflush(stdin);

          printf("\n   Senha: ");
          scanf("%s", & senha);
          strcpy(fun[posiAtualNFuncionario].senha, senha);
          fflush(stdin);

          char login[50];
          char senha[50];

          posiAtualNPaciente++;
          system("cls");
          break;
        default:
          printf(" \n OPCAO INVALIDA ");
          system("cls");
          break;
        }
      }
      while (opcada != 4);
      break;

    case 2:
      system("cls");

      do {

        printf("\n ###### AGENDAR CONSULTA ##### \n");

        printf("\n   Lista de Pacientes: \n");
        int p;
        for (p = 0; p < posiAtualNPaciente; p++) {

          printf("\n  ID: ");
          printf("%d", pa[p].id);
          printf("  Nome: ");
          printf("%s", pa[p].nome);
          printf("  RG: ");
          printf("%d", pa[p].rg);
          printf("\n");
        }

        printf("\n ######  ######  ######");
        printf("\n   Digite o RG do Paciente: ");
        scanf("%d", & rg);

        int valid;
        for (valid = 0; valid < posiAtualNPaciente; valid++) {
          //    if (strcmp(rg, pa[valid].rg) == 0){
          if (rg == pa[valid].rg) {

            printf("Data: ");
            scanf("%s", & data);

            printf("Hora: ");
            scanf("%s", & horario);

            strcpy(consu[posiAtualNConsulta].data, data);
            strcpy(consu[posiAtualNConsulta].horario, horario);

            consu[posiAtualNConsulta].p = pa[posiAtualNPaciente];
			consu[posiAtualNConsulta].status = 1;
            posiAtualNConsulta++;

            printf("Consulta agendada");

          } else {
            printf("Essa Pessoa N Existe");
          }
          
          posiAtualNConsulta--;
          
        }
        fflush(stdin);
        system("cls");
        printf("Deseja cadastrar uma nova consulta? [1]sim/[2]nao");
        scanf("%d", & voltarmenu);
      }
      while (voltarmenu == 1);
      break;

    case 3:
      system("cls");
      
      do {
	

      printf("\n ######  Cancelar Consulta #####");

      printf("\n   Lista de Pacientes com consulta agendada: \n");
      
      int p;
      
        for (p = 0; p < posiAtualNPaciente; p++) {
		  if(consu[posiAtualNConsulta].status == 1){
          printf("\n  ID: ");
          printf("%d", pa[p].id);
          printf("  Nome: ");
          printf("%s", pa[p].nome);
          printf("  RG: ");
          printf("%d", pa[p].rg);
          printf("  DATA: ");
		  printf("%s", consu[posiAtualNConsulta].data);
		  printf("  HORA: ");
          printf("%s", consu[posiAtualNConsulta].horario);
        }
	}
        printf("\n ######  ######  ######");
        printf("\n   Digite o RG do Paciente: ");
        scanf("%d", & rg);

        int valid;
        for (valid = 0; valid < posiAtualNPaciente; valid++) {
          //    if (strcmp(rg, pa[valid].rg) == 0){
          if (rg == pa[valid].rg) {

			fflush(stdin);
            printf("Consulta Cancelada");
			consu[posiAtualNConsulta].status = 0;

          } else {
            fflush(stdin);
			printf("Essa Pessoa N Existe");
          }
        }
    	break;
      }
      while (voltarmenu == 1);
      break;
    case 4:
      
	  system("cls");
      
	  do{
	  printf("\n ######  RELATORIOS ##### \n");
      printf("[1]Total de pacientes por unidade. \n"); 
	  printf("[2]Rede que mais atende. \n"); 
	  printf("[3]Faturamento de rede. \n");
	  printf("[4]Voltar. \n");
	  scanf("%d", &opcd);
	  
	switch (opcd) {

	 case 1:
  	 calculodasunidades(unidade1,unidade2,unidade3); 
	 break;

	 case 2:
	 redemaisatende(unidade1,unidade2,unidade3); 
	 break;
		
	 case 3: 
	 faturamentodarede(); 
	 break;
	 
	 default:
	 break;
	 }
	 
	}while (opcd != 4);
	 break;
    
    case 5:
      system("cls");
      do {
      comentariodaconsulta();
      fflush(stdin);
      system("cls");
      printf("Obrigado pelo seu comentario!");
      printf("\n");
	  printf("Deseja deixar mais um comentario ? [1]sim/[2]nao");
      scanf("%d", & voltarmenu);
	  }
	  while (voltarmenu == 1);
      break;
    default:
      printf(" \n OPCAO INVALIDA ");
      break;
    }
  }
  while (opmenu != 5);

  return 0;
}

