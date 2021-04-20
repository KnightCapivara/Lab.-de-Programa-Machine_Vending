// Eng. Computação - UFGD / Laboratório de Programação 1. – Prova 1. | name: Danillo Acassio Vieira Targino - date: 20/04/2021.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int dinheiro, troco, soma = 0, item, contm = 0, cont2 = 0, cont5 = 0, cont10 = 0, cont20 = 0;

    setlocale(LC_ALL,"Portuguese");

    printf("Insira sua cédula: ");
    scanf("%d", &dinheiro);

    system("cls");

    printf("\nMÁQUINA DE VENDAS \n1. Chocolate R$3 \n2. Refrigerante R$4 \n3. Sanduíche R$7 \n4. Ceverja R$6 \n5. Fruta R$1 \n6. Água R$2 \n\nEscolha apenas 1 item: ");
    scanf("%d", &item);

    switch(item){
        case 1:
            printf("Sua escolha foi o item 1");
            troco = dinheiro - 3;
            break;
        case 2:
            printf("\nSua escolha foi o item 2");
            troco = dinheiro - 4;
            break;
        case 3:
            printf("\nSua escolha foi o item 3");
            troco = dinheiro - 7;
            break;
        case 4:
            printf("\nSua escolha foi o item 4");
            troco = dinheiro - 6;
            break;
        case 5:
            printf("\nSua escolha foi o item 5");
            troco = dinheiro - 1;
            break;
        case 6:
            printf("\nSua escolha foi o item 6");
            troco = dinheiro - 2;
            break;
    }

    printf("\nSeu troco é de R$%d! ", troco);
    while(troco != 0){
        if(troco >= 20){
            troco = troco - 20;
            cont20++;
        }
        else{
            if(troco >= 10){
                troco = troco - 10;
                cont10++;
            }
            else{
                if(troco >= 5){
                    troco = troco - 5;
                    cont5++;
                }
                else{
                    if(troco >= 2){
                        troco = troco - 2;
                        cont2++;
                    }
                    else{
                        if(troco == 1){
                            troco = troco -1;
                            contm++;
                        }
                    }
                }
            }
        }
    }

    printf("\n\nMoeda de 1: %d \nNota de 2: %d \nNota de 5: %d \nNota de 10: %d \nNota de 20: %d\n", contm, cont2, cont5, cont10, cont20);

    system("pause");
    return 0;
}
