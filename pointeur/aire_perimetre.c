#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void aire(int largeur ,int longeur);
void puissanceXY(int x,int y);
int main()
{
	aire(12,14);
	puissanceXY(3,4);

return (0);
}


void aire(int largeur ,int longeur)
{
	int a = largeur * longeur;

	printf("%d\n",a);

}


void puissanceXY(int x,int y)
{
	int c;

	c = pow(x,y);

	printf("%d",c);
}
