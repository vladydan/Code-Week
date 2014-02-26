/*
** norme.c for norme (licence : Licence)
**
** Made by :   Ivad for Group_Name
** Mail :      ivanovic.ivad@gmail.com
**
** Started on Mon Feb 24 00:45:50 2014 by Ivad
** Updated on Mon Feb 24 00:45:50 2014 by Ivad
*/

/*
** Le header ci dessus est obligatoire (Ctrl-C + Ctrl-H sous emacs).
*/

/*
** Ceci est un commentaire OK
*/

// Celui là aussi

// Celui là ...
// Toléré si instructions non liées

/*
 * Celui là toléré
 */

/*
* Celui là non !
 */

/*
** Les includes sont à faire tout en haut.
** Pas d'include inutile du style #include <lavie.h>
*/

/*
** Toutes les dénominations et tous les commentaires se feront en Anglais.
** nom_de_var
** nom_de_var2
** nom_de_func
** nom_de_func2
** fichier.c
** Toutes les dénominations doivent être claires.
** Les abréviations claires sont tolérées.
*/

/*
** Pas de globale non justifiée.
** Nom de globale précédé de g_
** Nom de structure maison précédé de s_
** Nom d'énumération maison précédé de e_
** Nom d'union maison précédé de u_
** Nom de variable statique précédé de _
*/

/*
** Attention : ceci est un exemple de fonctions. Faites bien attention
** aux accolades, aux espaces, aux parenthèses, aux allignements (il faut faire Alt + i sur emacs).
** Pas plus de 30 lignes par fonctions (entre accolades).
** Les fonctions qui ne sont utilisées dans d'autres fichiers doivent être static.
** Le mot clé const est obligatoire si la var n'est pas modifiée (rigueur !!!)
*/
int		func1(int const param1, int const param2, int const param3, int const param4) {
  return (param1 + param2 - param3 * parm4 / 42 % 2);
}

void		func2(int param1, int param2,
		      int param3, int param4)
{
  int		res;

  res = func1(param1, param2, param3, param4);
  if (res > 0)
    printf("Une instruction ? Pas besoin d'accolades\n");
  else if (res < 1)
    printf("Une instruction ? Pas besoin d'accolades\n");
  else {
    char	*ptr;

    ptr = malloc(sizeof(*ptr) * 2);
    // code
    free(ptr);
  }
  while (0)
    printf("Une instruction ? Pas besoin d'accolades\n");
  while (0);
}

/*
** Pas de forêts/batteries de if (n'en abuser pas, 2 else if max).
** Pas de switch case !
*/
