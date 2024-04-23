#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//variaveis do plano de saude 
char nome[40];
char CPF [11];
char datanasc[12];
float valorindividualplanosaude, valortotalplanosaude;
// variaveis do plano odontologico 
char nomeplanoodonto[40];
char CPFodonto [11];
char datanascodonto[12];
float valorodontoindividual, valorodontototal;
int tipoplano, operador;
int quantidadededependente;
int main(){
    do
    {
    
printf("qual o plano 1=saude ou 2=odonto\n");
scanf("%d", &tipoplano);
if (tipoplano==1){
    printf("informe seu nome:\n");
    scanf("%s", &nome);
    printf("informe seu CPF\n");
    scanf("%s",&CPF);
    printf("informe sua data de nascimento (Ex. 00/00/0000)\n");
    scanf("%s", &datanasc);
    printf("informe a quantidade de dependente\n");
    scanf("%d",&quantidadededependente);
    valorindividualplanosaude=120;
    valortotalplanosaude=valorindividualplanosaude*quantidadededependente;
     
}else{//opcao para o plano odonto
    printf("informe seu nome: \n");
    scanf("%s", &nomeplanoodonto);
    printf("informe seu CPF\n");
    scanf("%s", &CPFodonto);
    printf("informe sua data de nascimento (Ex. 00/00/0000)\n");
    scanf("%s", &datanascodonto);
    printf("informe a quantidade de dependente\n");
    scanf("%d",&quantidadededependente);
    valorodontoindividual=80;
    valorodontototal= valorodontoindividual*quantidadededependente;
}
if (tipoplano==1){
    printf("cliente...: &%s\n",nome);
    printf("CPF...: &%s\n",CPF);
    printf("data nasc...:&%s\n",datanasc);
    printf("valor individual...: R$ %f", valorindividualplanosaude);
    printf("valor da fatura...:&%f\n",valortotalplanosaude);
}else{// condição para imprimir PO
    printf("cliente...: &%s\n",nomeplanoodonto);
    printf("CPF...: &%s\n",CPFodonto);
    printf("data nasc...:&%s\n",datanascodonto);
    printf("valor individual...: R$ %f\n", valorodontoindividual);
    printf("valor da fatura...:&%f\n",valorodontototal);
}   
    printf("deseja pesquisar outra UF 1-sim ou 0-nao\n");
    scanf("%d ", &operador);
    }while (operador!=0);
}