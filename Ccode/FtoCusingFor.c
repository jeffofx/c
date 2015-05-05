#include <stdio.h>
/*written on phone*/
main ()
{
int fahr;
for (fahr=0; fahr<=110; fahr=fahr+5)
printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

printf ("\nDone.\n");

}