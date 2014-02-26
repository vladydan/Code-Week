/*
** norme.h for Norme (licence : Licence)
**
** Made by :   Ivad for Group_Name
** Mail :      ivanovic.ivad@gmail.com
**
** Started on Mon Feb 24 01:16:36 2014 by Ivad
** Updated on Mon Feb 24 01:16:36 2014 by Ivad
*/

#ifndef __FILE_NAME_H__
#define __FILE_NAME_H__

// typedef
typedef struct s_foo	s_foo;

// structures
struct		s_foo {
  char		var2;
  int		var1;
};

typedef struct	s_bar {
  char		var2;
  int		var1;
}		s_bar;

/*
** Pas de god structure !
*/

// fonctions
int	func(void);
int	foo(s_foo *);

#endif // !__FILE_NAME_H__
