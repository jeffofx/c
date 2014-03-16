//140315 0051 in bed
#include <stdio.h>
main()
{
	 int c, nl;
   nl = 0;
  while ((c = getchar ()) != EOF)
// why does this line lead to 0?
//   while (c = (getchar ()) != EOF)
// I know != is done first, but still. ..
/* p17 of KR... Because if != is true you get 1 and 0 otherwise? so at the end c is set to 0 and not incremented 140315s*/
     if (c == '\n')
       ++nl;
       printf ("%d\n", nl);
}