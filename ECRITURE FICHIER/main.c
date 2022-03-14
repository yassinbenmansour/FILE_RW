
#include <stdio.h>
#include <stdlib.h>



/*
fputc �crit un caract�re dans le fichier (

fputs �crit une cha�ne dans le fichier

fprintf �crit une cha�ne format�e dans le fichier
*/

int main()
{
    FILE* fichier = NULL;
 
    fichier = fopen("texte2.txt", "w");
 
    if (fichier != NULL)
    {
        fputc('A', fichier); // �criture du caract�re A
        fclose(fichier);
    }
 
    return 0;
}
