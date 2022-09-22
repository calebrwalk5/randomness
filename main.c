#include <stdio.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int o_1875464fddc993b2fb3b2f28303f8b6a=rand();
  int o_bfa01ebb18f02a1894d054cd85fdc228=o_1875464fddc993b2fb3b2f28303f8b6a * rand() - rand();
  printf("\x25""d\012",o_bfa01ebb18f02a1894d054cd85fdc228);
  return (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);
}
