#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

void* conserta(char *nome){
char *r, certo[100];
if (strstr(nome, "Excelentissimo Senhor")){
    strcpy(certo, "Exmo. Sr.");
    strcat(certo, nome+strlen("Excelentissimo Senhor"));
    strcpy(nome, certo);
}
if (strstr(nome, "Excelentissima Senhora")){
    strcpy(certo, "Exma. Sra.");
    strcat(certo, nome+strlen("Excelentissima Senhora"));
    strcpy(nome, certo);
}
if (strstr(nome, "Ilustrissima Senhora")){
    strcpy(certo, "Ilma. Sra.");
    strcat(certo, nome+strlen("Ilustrissima Senhora"));
    strcpy(nome, certo);
}
if (strstr(nome, "Ilustrissimo Senhor")){
    strcpy(certo, "Ilmo. Sr.");
    strcat(certo, nome+strlen("Ilustrissimo Senhor"));
    strcpy(nome, certo);
}
if (strstr(nome, "Vossa Excelencia")){
    strcpy(certo, "V. Ex.a");
    strcat(certo, nome+strlen("Vossa Excelencia"));
    strcpy(nome, certo);
}
if (strstr(nome, "Vossa Magnificencia")){
    strcpy(certo, "V. Mag.a");
    strcat(certo, nome+strlen("Vossa Magnificencia"));
    strcpy(nome, certo);
}
if (strstr(nome, "Vossa Senhoria")){
    strcpy(certo, "V.S.a");
    strcat(certo, nome+strlen("Vossa Senhoria"));
    strcpy(nome, certo);
}
if (strstr(nome, "Senhoria")){
    strcpy(certo, "S.a");
    strcat(certo, nome+strlen("Senhoria"));
    strcpy(nome, certo);
}
if (strstr(nome, "Senhora")){
    strcpy(certo, "Sra.");
    strcat(certo, nome+strlen("Senhora"));
    strcpy(nome, certo);
}
if (strstr(nome, "Senhor")){
    strcpy(certo, "Sr.");
    strcat(certo, nome+strlen("Senhor"));
    strcpy(nome, certo);
}
if (strstr(nome, "Dona")){
    strcpy(certo, "D.");
    strcat(certo, nome+strlen("Dona"));
    strcpy(nome, certo);
}
if (strstr(nome, "Excelencia")){
    strcpy(certo, "Ex.a");
    strcat(certo, nome+strlen("Excelencia"));
    strcpy(nome, certo);
}
if (strstr(nome, "Magnificencia")){
    strcpy(certo, "Mag.a");
    strcat(certo, nome+strlen("Magnificencia"));
    strcpy(nome, certo);
}
}

int main(){
char *t, entrada[100], Nomes[TAM][100];
int i, cont=0;
for (i=0; i<TAM; i++){
    fgets(entrada, 99, stdin);
    if (!(strncmp(entrada, "FIM", 3))) break;
    strcpy(Nomes[i], entrada);
    conserta(Nomes[i]);
    cont++;
    }
for(i=0; i<cont; i++){
    printf("%s\n", Nomes[i]);
}
return 0;
}
