/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int nombreArticles;
    float total = 0.0, taxe = 0.0, totalAvecTaxe;
    const float tauxTaxe = 0.1; 

    printf("Entrez le nombre d'articles : ");
    scanf("%d", &nombreArticles);

    char noms[nombreArticles][50]; 
    int quantites[nombreArticles];
    float prix[nombreArticles];
    for (int i = 0; i < nombreArticles; i++) {
        printf("Entrez le nom de l'article %d : ", i + 1);
        scanf("%s", noms[i]);
        printf("Entrez la quantité pour %s : ", noms[i]);
        scanf("%d", &quantites[i]);
        printf("Entrez le prix unitaire pour %s : ", noms[i]);
        scanf("%f", &prix[i]);
        
        total += quantites[i] * prix[i];
    }
    taxe = total * tauxTaxe;
    totalAvecTaxe = total + taxe;

    printf("\n********** Ticket de caisse **********\n");
    for (int i = 0; i < nombreArticles; i++) {
        printf("%-20s x%d\t%.2f\n", noms[i], quantites[i], quantites[i] * prix[i]);
    }
    printf("-------------------------------------\n");
    printf("Sous-total :\t\t%.2f\n", total);
    printf("Taxe (1%%) :\t\t%.2f\n", taxe);
    printf("Total à payer :\t\t%.2f\n", totalAvecTaxe);
    printf("*************************************\n");

    return 0;
}
