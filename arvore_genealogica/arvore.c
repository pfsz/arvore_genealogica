#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct pessoa{
    char nome[100];
    char sexo;
    struct pessoa* pai;
    struct pessoa* mae;
    struct pessoa* irmao;
};

//insere irmaos em uma lista encadeada
Arvore* insere_irmao(Arvore* no, char sexo, char *nome){
    return NULL;
}

//insere pai estrutura de arvore
Arvore* insere_pai(Arvore* no, char sexo, char *nome){
    return NULL;
}

//insere mae na estrutura de arvore
Arvore* insere_mae(Arvore* no, char sexo, char *nome){
    return NULL;
}
//insere filho person na estrutura de arvore

Arvore* insere_filho(Arvore* no, char sexo, char *nome){
    return NULL;
}

Arvore* cria(){

    Arvore* person = = (Arvore*) malloc(sizeof(Arvore));
    if(person != NULL)
        *person = NULL;
    return person;

}
