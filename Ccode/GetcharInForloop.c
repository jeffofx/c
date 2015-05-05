//140315s Macq 
// testing nature of getchar in for loop
#include <stdio.h>
main(){
  int chara;
  printf("init chara:");
  for (chara = getchar(); chara != EOF;) 
       {printf("\n  current chara=%d", chara);
       printf("\n  intval=%d\n", chara);
       printf("inlop chara:");
       chara = getchar();}
 printf("\nfinchara=%d\n", chara);             }