#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int saisieInt2()
{
    int x;
    do
    {
      printf("saisir le nombre de formation ");
      scanf("%d",&x);
    }
    while(x<=0);
    return x;
}
void allocationFormation(int n)
{
    FORMATION *ft;
    ft=(FORMATION*) malloc (n*sizeof(FORMATION));
    if(!ft) exit(-1);
    return ft;
}
void saisieFormation(FORMATION*ft,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("saisir les informations sur la formation %d",i+1);
        printf("saisir le code");
        scanf("%d",&ft->codeFormation);
        printf("saisir le titre ");
        scanf("%s",&ft->titre);
        printf("saisir la description");
        scanf("%s",&ft->desc);

    }
}
void afficherFormation(FORMATION *ft,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n*********************\n");
        printf("les informations sur la Formation %d",i+1);
        printf("code : %d",ft->codeFormation);
        printf("titre : %s",ft->titre);
        printf("description : %s",ft->desc);
    }
}
