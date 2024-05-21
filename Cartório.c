#include <stdio.h> //biblioteca de comunica��o com o usu�rio//>
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	
       //inicio da cria��o de vari�veis/string	
       char arquivo[40];
       char cpf[40];
       char nome[40];
       char sobrenome[40];
       char cargo[40];
       //final da cria��o de vari�veis/string
       
       printf("Digite o CPF a ser cadastrado: "); //coletando informa��es do usu�rio
       scanf("%s", cpf);
       
       strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings
       
       FILE *file; //Cria o arquivo
       file = fopen(arquivo, "w"); //cria o arquivo e o w escreve no arquivo
       fprintf(file,cpf); // salva o valor da vari�vel
       fclose(file); //fecha o arquivo
       
       file = fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,","); //salva o valor da vari�vel
       fclose(file); //fecha o arquivo
       
       printf("Digite o nome a ser cadastrado: "); //Coletando informa��es do usu�rio
       scanf("%s",nome); //salva as informa��es
       
       file= fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,nome); //salva o valor da vari�vel
       fclose(file); //fecha o arquivo
       
       
       file = fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,","); //salva o valor da vari�vel
       fclose(file); //fecha o arquivo
       
       
       printf("Digite o sobrenome a ser cadastrado: "); //Coletando informa��es do usu�rio
       scanf("%s",sobrenome); //salva as informa��es
       
       file= fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,sobrenome);  //salva o valor da vari�vel
       fclose(file); //fecha o arquivo
       
       file = fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,","); //salva o valor da vari�vel
       fclose(file); //fecha o arquivo
       
       printf("Digite o cargo a ser cadastrado: "); //Coletando informa��es do usu�rio
       scanf("%s", cargo); //salva as informa��es
       
       file= fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,cargo); //salva o valor da vari�vel
       fclose(file); //fecha o arquivo
       
       system("pause"); //pausa o sistema pro usu�rio conseguir ler
       
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
	//In�cio da cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
	//finais da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser consultado: "); //Coletando informa��es do usu�rio
	scanf("%s",cpf); // salva as informa��es do usu�rio
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); //abre o arquivo e d� permiss�o pra ler ele
	
	if(file == NULL) //caso o arquivo for igual a null(vazio)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!. \n"); //essa mensagem ser� exibida se n�o existir o que � procurado
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: "); //coletando informa��es do usu�rio
		printf("%s", conteudo); //salvando as informa��es do usu�rio
		printf("\n\n"); //Pular linhas
	}
	
	system("pause"); // pausar o sistema pro usu�rio conseguir ler
	
	
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
	char cpf[40]; //Criando a vari�vel/string
	
	printf("Digite o CPF do usu�rio a ser deletado: "); //Coletando informa��es
	scanf("%s", cpf); //Salvando as informa��es
	 
	remove(cpf); // Fun��o para remover o cpf cadastrado
	
	FILE *file; //cria o arquivo
	file = fopen(cpf, "r"); //abre o arquivo e d� permiss�o pra ler
	
	if(file == NULL);
	{
		printf("O usu�rio n�o se encontra no sistema!. \n"); //Mensagem exibida caso o usu�rio for deletado ou n�o existir
		system("pause"); //Pausar o sistema pro usu�rio conseguir ler
	}
	
	
}

 
 
int main()
{
	int opcao=0;  //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
    {
    	
    	system("cls"); //limpa todo o sistema
	
	 setlocale(LC_ALL, "Portuguese");
	
	 printf("### Cart�rio do Daniel ###\n\n"); ///in�cio do menu
	 printf("Escolha a op��o desejada do menu: \n\n");
	 printf("\t1 - Registrar nomes \n");
	 printf("\t2 - Consultar nomes \n");
	 printf("\t3 - Deletar nomes \n\n");
	 printf("Op��o: "); //fim do menu
	

	 scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
    	system("cls"); // Respons�vel por limpar a tela
    	
    	switch(opcao)
    	{
    		    case 1:
    			registro(); //chamada de fun��es
		        break;
		        
		        case 2:
		        consulta();
		        break;	
		        
		        case 3:
		        deletar();
		        break;
		        
		        default:
		        printf("essa op��o n�o est� dispon�vel!\n");
		        system("pause");
		        break;
		        //fim da sele��o
		        			
		}
}
}
