#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE * loucura;
    int t=0;

    char nomeDoCandango[1000];
    char vogaisDoCandango[1000];

    fgets(nomeDoCandango, 1000, stdin);

    for(int i=0;i<strlen(nomeDoCandango);i++){
        if(nomeDoCandango[i]=='a'||nomeDoCandango[i]=='e'||nomeDoCandango[i]=='o'||
        nomeDoCandango[i]=='i'||nomeDoCandango[i]=='u'||nomeDoCandango[i]=='A'||nomeDoCandango[i]=='E'
        ||nomeDoCandango[i]=='I'||nomeDoCandango[i]=='O'||nomeDoCandango[i]=='U')
        {
            vogaisDoCandango[t]=nomeDoCandango[i];
            t++;
        }
    }

    nomeDoCandango[strlen(nomeDoCandango)-1] = '\0';
    strcat(nomeDoCandango, ".txt");
    loucura = fopen(nomeDoCandango,"w");
    fprintf(loucura,"%s",vogaisDoCandango);

    fclose(loucura);
    
    return 0;
}