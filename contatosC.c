#include <stdio.h>
#include <string.h>
//struct -> estrutura
#define MAX 1


struct st_contato{
   char nome[100];
   char telefone[20];
   char email[100];
   int ano_nascimento;

};
struct st_agenda{
 struct st_contato contatos[100];

}agenda;
  int main(){
      int i;
    for(i = 0 ; i< MAX;i++){
    printf("informe o nome: ");
    fgets(agenda.contatos[i].nome,100,stdin);

    printf("Informe o ano de nascimento:");
    scanf("%d",&agenda.contatos[i].ano_nascimento);
    getchar();

    printf("informe o telefone: ");
    fgets(agenda.contatos[i].telefone,20,stdin);

    printf("informe o email: ");
    fgets(agenda.contatos[i].email,100,stdin);
    }
    for(i = 0 ; i< MAX;i++){
    printf("=============AGENDA DE CONTATOS==============\n");
    printf("=============CONTATO %d==============\n", (i+1));
    printf("Nome:%s \n",agenda.contatos[i].nome);
    printf("Telefone: %s\n",agenda.contatos[i].telefone);
    printf("Email: %s\n",agenda.contatos[i].email);
    printf("Ano de nascimento: %d\n",agenda.contatos[i].ano_nascimento);
    }
 return 0;
}
