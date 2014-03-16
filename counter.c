// 140307f doesn't work
// 140310m Stackoverflow: you have to send the EOF character by ctl-d. World
#include <stdio.h>
main()
{
 double nc;
for (nc = 0; getchar () != EOF; ++nc)
;
printf ("%3.3f\n", nc)
;
}