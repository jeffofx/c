#include <stdio.h>

/*written on phone*/

main ()
{

printf ("F    C\n");

	float fahr, cel;
	int start, step, stop;

	start = 110;
	stop = -10;
	step = 5;

	fahr = start;

	while (fahr >= stop)
		{
		printf ("%3.0f", fahr);
		cel = 5.0/9.0*(fahr-32);
		printf ("%6.1f\n", cel);
		fahr = fahr - step;
					}
}