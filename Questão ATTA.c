#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

char* conserta(char *nome){
char *r, certo[100];
if (strstr(nome, "Excelentíssimo Senhor")){
    strcpy(certo, "Exmo. ");
    strcat(certo, conserta(strstr(nome, "Senhor")));
    r=certo;
    return r;
}
if (strstr(nome, "Excelentíssima Senhora")){
    strcpy(certo, "Exma. ");
    strcat(certo, conserta(strstr(nome, "Senhora")));
    r=certo;
    return r;
}
if (strstr(nome, "Ilustrissima Senhora")){
    strcpy(certo, "Ilma. ");
    strcat(certo, conserta(strstr(nome, "Senhora")));
    r=certo;
    return r;
}
if (strstr(nome, "Ilustrissimo Senhor")){
    strcpy(certo, "Ilmo. ");
    strcat(certo, conserta(strstr(nome, "Senhor")));
    r=certo;
    return r;
}
if (strstr(nome, "Vossa Excelencia")){
    strcpy(certo, "V.");
    strcat(certo, conserta(strstr(nome, "Excelencia")));
    r=certo;
    return r;
}
if (strstr(nome, "Vossa Magnificencia")){
    strcpy(certo, "V.");
    strcat(certo, conserta(strstr(nome, "Magnificencia")));
    r=certo;
    return r;
}
if (strstr(nome, "Vossa Senhoria")){
    strcpy(certo, "V.");
    strcat(certo, conserta(strstr(nome, "Senhoria")));
    r=certo;
    return r;
}
if (strstr(nome, "Senhoria")){
    strcpy(certo, "S.a");
    strcat(certo, strchr(nome, ' '));
    r=certo;
    return r;
}
if (strstr(nome, "Senhora")){
    strcpy(certo, "Sra.");
    strcat(certo, strchr(nome, ' '));
    r=certo;
    return r;
}
if (strstr(nome, "Senhor")){
    strcpy(certo, "Sr.");
    strcat(certo, strchr(nome, ' '));
    r=certo;
    return r;
}
if (strstr(nome, "Dona")){
    strcpy(certo, "D.");
    strcat(certo, strchr(nome, ' '));
    r=certo;
    return r;
}
if (strstr(nome, "Excelencia")){
    strcpy(certo, "Ex.a");
    strcat(certo, strchr(nome, ' '));
    r=certo;
    return r;
}
if (strstr(nome, "Magnificencia")){
    strcpy(certo, "Mag.a");
    strcat(certo, strchr(nome, ' '));
    r=certo;
    return r;
}
return nome;
}

int main(){
char *t, entrada[100], Nomes[TAM][100];
int i, cont=0;
for (i=0; i<TAM; i++){
    fgets(entrada, 99, stdin);
    if (strstr(entrada, "FIM")) break;
    strcpy(Nomes[i], conserta(entrada));
    cont++;
    }
for(i=0; i<cont; i++){
    printf("%s\n", Nomes[i]);
}
return 0;
}
