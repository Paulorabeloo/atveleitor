#include <stdio.h>
int main(){
    int idade;
    printf("digite a sua idade:\n");
    scanf("%i", &idade);
    if (idade < 16){
        printf("nao eleitor\n");
    }
    else if ( idade >= 18 && idade <= 65){
        printf("eleitor obrigatorio\n");
    }
    else {
        printf("eleitor facultativo\n");
    }
return 0;
}
