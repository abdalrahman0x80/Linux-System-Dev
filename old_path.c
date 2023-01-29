#include <unistd.h>
#include <stdio.h>
int main(){
  puts(getenv("OLDPWD"));
  return 0;
}
