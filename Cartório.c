#include <stdio.h> //biblioteca de comunicação com o usuário//>
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro() //Função responsável por cadastrar os usuários no sistema
{
	
       //inicio da criação de variáveis/string	
       char arquivo[40];
       char cpf[40];
       char nome[40];
       char sobrenome[40];
       char cargo[40];
       //final da criação de variáveis/string
       
       printf("Digite o CPF a ser cadastrado: "); //coletando informaçôes do usuário
       scanf("%s", cpf);
       
       strcpy(arquivo, cpf); //Responsável por copiar os valores das strings
       
       FILE *file; //Cria o arquivo
       file = fopen(arquivo, "w"); //cria o arquivo e o w escreve no arquivo
       fprintf(file,cpf); // salva o valor da variável
       fclose(file); //fecha o arquivo
       
       file = fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,","); //salva o valor da variável
       fclose(file); //fecha o arquivo
       
       printf("Digite o nome a ser cadastrado: "); //Coletando informaçôes do usuário
       scanf("%s",nome); //salva as informaçôes
       
       file= fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,nome); //salva o valor da variável
       fclose(file); //fecha o arquivo
       
       
       file = fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,","); //salva o valor da variável
       fclose(file); //fecha o arquivo
       
       
       printf("Digite o sobrenome a ser cadastrado: "); //Coletando informaçôes do usuário
       scanf("%s",sobrenome); //salva as informaçôes
       
       file= fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,sobrenome);  //salva o valor da variável
       fclose(file); //fecha o arquivo
       
       file = fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,","); //salva o valor da variável
       fclose(file); //fecha o arquivo
       
       printf("Digite o cargo a ser cadastrado: "); //Coletando informaçôes do usuário
       scanf("%s", cargo); //salva as informaçôes
       
       file= fopen(arquivo, "a"); //abre o arquivo e o "a" atualiza o arquivo
       fprintf(file,cargo); //salva o valor da variável
       fclose(file); //fecha o arquivo
       
       system("pause"); //pausa o sistema pro usuário conseguir ler
       
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
	//Início da criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	//finais da criação de variáveis/string
	
	printf("Digite o CPF a ser consultado: "); //Coletando informações do usuário
	scanf("%s",cpf); // salva as informações do usuário
	
	FILE *file; //cria o arquivo
	file = fopen(cpf,"r"); //abre o arquivo e dá permissão pra ler ele
	
	if(file == NULL) //caso o arquivo for igual a null(vazio)
	{
		printf("Não foi possível abrir o arquivo, não localizado!. \n"); //essa mensagem será exibida se não existir o que é procurado
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informaçôes do usuário: "); //coletando informaçôes do usuário
		printf("%s", conteudo); //salvando as informaçôes do usuário
		printf("\n\n"); //Pular linhas
	}
	
	system("pause"); // pausar o sistema pro usuário conseguir ler
	
	
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
	char cpf[40]; //Criando a variável/string
	
	printf("Digite o CPF do usuário a ser deletado: "); //Coletando informaçôes
	scanf("%s", cpf); //Salvando as informaçôes
	 
	remove(cpf); // Função para remover o cpf cadastrado
	
	FILE *file; //cria o arquivo
	file = fopen(cpf, "r"); //abre o arquivo e dá permissão pra ler
	
	if(file == NULL);
	{
		printf("O usuário não se encontra no sistema!. \n"); //Mensagem exibida caso o usuário for deletado ou não existir
		system("pause"); //Pausar o sistema pro usuário conseguir ler
	}
	
	
}

 
 
int main()
{
	int opcao=0;  //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
    {
    	
    	system("cls"); //limpa todo o sistema
	
	 setlocale(LC_ALL, "Portuguese");
	
	 printf("### Cartório do Daniel ###\n\n"); ///início do menu
	 printf("Escolha a opção desejada do menu: \n\n");
	 printf("\t1 - Registrar nomes \n");
	 printf("\t2 - Consultar nomes \n");
	 printf("\t3 - Deletar nomes \n\n");
	 printf("Opção: "); //fim do menu
	

	 scanf("%d", &opcao); //armazenando a escolha do usuário
	
    	system("cls"); // Responsável por limpar a tela
    	
    	switch(opcao)
    	{
    		    case 1:
    			registro(); //chamada de funçôes
		        break;
		        
		        case 2:
		        consulta();
		        break;	
		        
		        case 3:
		        deletar();
		        break;
		        
		        default:
		        printf("essa opção não está disponível!\n");
		        system("pause");
		        break;
		        //fim da seleção
		        			
		}
}
}
