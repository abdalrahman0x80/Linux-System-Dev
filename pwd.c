#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  puts(getenv("PWD"));
  return 0;
}
