#include <stdio.h>
#include <string.h>

#define MAX 50
struct Usuario {
  char login[30], senha[30], nome[60], endereco[100], telefone[20], nascimento[11];
};

struct Usuario usuarios[MAX];

int total = 0;

int buscar(char *login, char *senha){
  for (int i = 0; i < total; i++)
      if (!strcmp(usuarios[i].login, login) && !strcmp(usuarios[i].senha, senha))
      return i;
  return -1;
}

void cadastrar(){
  struct Usuario *u = &usuarios[total];
  printf("Login: ");    scanf("%29s", u->login);
  printf("Senha: ");    scanf("%29s", u->senha);
  printf("Nome: ");     scanf(" %59[^\n]", u->nome);
  printf("Endereco: "); scanf(" %99[^\n]", u->endereco);
  printf("Telefone: "); scanf("%19s", u->telefone);
  printf("Nascimento (dd/mm/aaaa): "); scanf("%10s", u->nascimento);
  total++;
  printf("\nCadastro realizado!\n");

}

void acessar(){
      char login[30], senha[30];
    printf("Login: "); scanf("%29s", login);
    printf("Senha: "); scanf("%29s", senha);
    int i = buscar(login, senha);
    if (i < 0) { printf("Login ou senha incorretos.\n"); return; }
    struct Usuario *u = &usuarios[i];
    printf("\nNome: %s | Endereco: %s | Telefone: %s | Nascimento: %s\n",u->nome, u->endereco, u->telefone, u->nascimento);
}

void atualizar(){
  char login[30], senha[30];
    printf("Login: "); scanf("%29s", login);
    printf("Senha: "); scanf("%29s", senha);
    int i = buscar(login, senha);
    if (i < 0) { printf("Login ou senha incorretos.\n"); return; }
    struct Usuario *u = &usuarios[i];
    int op;
    printf("1-Nome 2-Endereco 3-Telefone 4-Nascimento 5-Senha\nOpcao: ");
    scanf("%d", &op);
    if (op == 1) { printf("Novo nome: ");       scanf(" %59[^\n]", u->nome); }
    if (op == 2) { printf("Novo endereco: ");   scanf(" %99[^\n]", u->endereco); }
    if (op == 3) { printf("Novo telefone: ");   scanf("%19s", u->telefone); }
    if (op == 4) { printf("Novo nascimento: "); scanf("%10s", u->nascimento); }
    if (op == 5) { printf("Nova senha: ");      scanf("%29s", u->senha); }
    printf("Atualizado!\n");

}

int main() {
    int op;
    do { cadastrar();
         printf("1-Novo cadastro 2-Menu principal\nOpcao: ");
         scanf("%d", &op);
    } while (op == 1);
 
    do {
        printf("\n1-Acessar 2-Atualizar 0-Sair\nOpcao: ");
        scanf("%d", &op);
        if (op == 1) acessar();
        if (op == 2) atualizar();
    } while (op != 0);
}

