/*
NOTES et OBJECTIFS :
    - determiner dans chaque fonction de flags s'il y a un length modifier
    et si oui, appeler une fonction intermédiaire qui en fonction du length modifier
    redéterminé au sein de cette fonction, appelle la fonction correspondante avec
    comme paramètres (format, ind, args, count)
    (VOIR L'EXEMPLE DANS LA FONCTION is_c DANS LE FICHIER c.c)



    - arrondi 0 à régler (flags e et E)
    - revoir le Makefile
    - continuer les caractères d'attribut (semblent bons)
    - la précision est maintenant trouvée grâce à get_precision => il
    faut maintenant l'appliquer aux flags correspondants
    - faire de la gestion d'erreur pour des '%' sans flag correct !!!!!
*/

#include "include/my_printf.h"
#include "include/my.h"

int main(void)
{
    int a;
    int b;
    int nbr = 6456755;
    size_t size = sizeof(double);

    a = my_printf("% +-##  .5llhlhhX\n", -68);
    b = printf(   "% +-##  .5llhlhhX\n", -68);
    printf("my_printf : %d ; printf : %d\n", a, b);
    return 0;
}
