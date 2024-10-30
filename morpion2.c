#include <stdio.h>
#include <stdlib.h>

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
    }

    //initialisation de la grille remplie d'espaces
    for (int j=0; j<n;j++)
        {
            for (int k=0; k<m; k++)
                {
                grille[j][k]=' ';
                }
        }


    //initialisation des pions de chaque joueur:
	//int* listepionsj1 = (int*) malloc (sizeof(int)*12)
	//int* listepionsj2 = (int*) malloc (sizeof(int)*12)

    //deroulement du jeu
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

    // Libération de la mémoire
    for (int i = 0; i < n; i++) {
        free(grille[i]);
    }
    free(grille);

    return 0;
}


//fonction gagner(Ca marche pas)
void gagner(char**g){
	for(int i=0;i<n-2;i++)
	{
		for(int j=0;j<n-2;j++)
		{
			if (g[j][i]=g[j+1][i]=g[j+2][i]=g[j+3][i])
			{
				printf("gagné");
			}
			else{
                if (g[j][i]=g[j][i+1]=g[j][i+2]=g[j][i+3])
        			{
        				printf("gagné");
        			}
                else{
                    if (g[j][i]=g[j+1][i+1]=g[j+2][i+2]=g[j+3][i+3])
                    {
                        printf("gagné");
                    }
                }
    		}
    	}
    }
    printf("Pas encore de victoire\n");
}

//fonction qui permet d'afficher la grille
void affiche_grille(char** g){
    for(int j=0;j<n;j++)
    {
    	for(int k=0;k<n;k++)
    	{
    		printf("|%c\t",g[j][k]);
    	}
        printf("|\n");    
    }
}
