#include <stdio.h>
void inverser(int *nombre1,int *nombre2);


int main()
{
int nombre1 = 2;
int nombre2 = 4;

printf("nombre1 = %d et nombre2 = %d\n",nombre1,nombre2);
inverser(&nombre1,&nombre2);
printf("nombre1 = %d et nombre2 = %d\n",nombre1,nombre2);




return 0;
}

void inverser(int *nombre1,int *nombre2)
{
int temporaire;
temporaire = *nombre2;
*nombre2= *nombre1;
*nombre1 = temporaire;
}
