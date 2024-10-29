#include <stdio.h>
#include <stdlib.h>

int n = 3;
int m = 3;
int a = 0;
int b = 0;
//fonction gagner(Ca marche pas)
//void gagner(char**g){
//	for(int i=0;i<n-2;i++)
//	{
//		for(int j=0;j<n-2;j++)
//		{
//			if (g[j][i]=g[j+1][i]=g[j+2][i]="x")
//			{
//				printf("gagner");
//			}
//			if (g[j][i]=g[j][i+1]=g[j][i+2]="x")
//			{
//				printf("gagner");
//			}
//		}
//	}
//}
//grille de depart(Ca marche pas)

//int main (){
//int n=4;
//int m=4;
//char** grille = (char**) malloc (sizeof(char*)*n);
//if(grille==NULL)
//{
//	exit(EXIT_FAILURE);
//}
//for(int i=0;i<n;i++)
//{ 
//	grille[i]= (char*) malloc (sizeof(char)*m);
//	if (grille[i]==NULL)
//	{
//		exit(EXIT_FAILURE);
//	}
//}
//for(int i=0;i<n;i++)
//	{
//		printf(" ");
//		printf("_");
//	}
//printf("\n");
//for(int j=0;j<n;j++)
//{
//	printf("|");
//	for(int k=0;k<n;k++)
//	{
//		printf("%c",grille[j][k]);
//		printf("|");
//	}
//	printf("\n");
//	printf("|");
//	for(int i=0;i<n;i++)
//	{
//		printf("_");
//		printf("|");
//	}
//	printf("\n");
//}
	
//}
			
//fonction qui permet d'afficher la grille
void affiche_grille(char** g){
for(int j=0;j<n;j++)
{
	for(int k=0;k<n;k++)
	{
		printf("%c\t",g[j][k]);
	}
	printf("\n");
}
}

int main () {
//definition de la grille	
char** grille = (char**) malloc (sizeof(char*)*n);
if(grille==NULL)
{
	exit(EXIT_FAILURE);
}
for(int i=0;i<n;i++)
{ 
	grille[i]= (char*) malloc (sizeof(char)*m);
	if (grille[i]==NULL)
	{
		exit(EXIT_FAILURE);
	}
}//deroulement du jeu
affiche_grille(grille);
for(int l=0;l<9;l++)
{
printf("Joueur1: quelle ligne? ");
scanf("%d",&a);
printf("Joueur1: quelle colonne? ");
scanf("%d",&b);
grille[a][b]= 'x';
affiche_grille(grille);
gagner(grille);
printf("Joueur2: quelle ligne? ");
scanf("%d",&a);
printf("Joueur2: quelle colonne? ");
scanf("%d",&b);
grille[a][b]= 'o';
affiche_grille(grille);
gagner(grille);
}
}
