#include<stdio.h>
#include<stdlib.h>
#include<time.h>




void my_putchar(char c){

  write(1,&c,1);
}
int main()
{
  
  int i ,j;
  char map[9][9];
  int MAX=7;
  int MIN=1;
  srand(time(NULL));
  int a=(rand()%(MAX-MIN+1))+MIN;
  int b=(rand()%(MAX-MIN+1))+MIN;
  int mur=16;
  
    for(i=0;i<9;i++){
      for(j=0;j<9;j++)

        {
	  map[i][j]='-';
	  map[0][j]='#';
	  map[i][0]='#';
	  map[8][j]='#';
	  map[i][8]='#';

	  
 	}
           
    }   
    
    for(i=0;i<16;i++){
      a=(rand()%(MAX-MIN+1))+MIN;
      b=(rand()%(MAX-MIN+1))+MIN;

      map[a][b]='#';

    }

	for(i=0;i<9;i++){
	  for(j=0;j<9;j++)
	    {
	      my_putchar(map[i][j]);
              my_putstr("  ");	      
	    }
	  my_putstr("\n");
	}
	
	return 0;

      }
