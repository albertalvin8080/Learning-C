
#include <stdio.h>

int
main ()
{
  int i, j, somaPrim = 3, raizQuad, primo;


  for (i = 3; i <= 2000000; i += 2)
    {
      primo = 1;
      raizQuad = (int) sqrt (i);
      for (j = 3; j <= raizQuad; j += 2)
	{
	  if (i % j == 0)
	    {
	      primo = 0;
	      break;
	    }
	}

      if (primo)
	{
	  somaPrim += i;
	}
    }

  printf ("A soma dos numeros primos abaixo de 2 milhoes eh: %d\n\n",
	  somaPrim);

}
