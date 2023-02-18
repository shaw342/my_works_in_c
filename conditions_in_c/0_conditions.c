#include <stdio.h>

int main(void)
{
int number1;
int number2;
char sentence_number1[]= "entrer votre premier nombre :";
char sentence_number2[]= "entrer votre deuxieme nombre :";
char answar_1[]= "les deux nombre ne sont pas egaux";
char answar_2[]= "les deux nombre sont egaux";
char saut_de_ligne[]="\n";

for(int i = 0;i<sentence_number1[i];i++)
{
putchar(sentence_number1[i]);
}
for(int j=0;j<saut_de_ligne[j];j++){

putchar(saut_de_ligne[j]);
}
scanf("%d",&number1);

for(int k = 0;k<sentence_number2[k];k++)
{
putchar(sentence_number2[k]);
}
for(int l=0;l<saut_de_ligne[l];l++){

putchar(saut_de_ligne[l]);
}
scanf("%d",&number2);

if(number1 != number2){
for(int e = 0;e<answar_1[e];e++)
{
putchar(answar_1[e]);
}
}else
{
for(int r = 0;r<answar_2[r];r++){
putchar(answar_2[r]);
}
for(int s=0;s<saut_de_ligne[s];s++){

putchar(saut_de_ligne[s]);
}
}

return 0;
}
