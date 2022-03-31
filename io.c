#include <stido.h>

int main(int short argc, char * const argv[]) {
  char * name;
  int age;
  printf("Enter your name: \n");
  scanf("%s",&name);
  printf("Enter your age: \n");
  scanf("%d",&age);
  printf("%s is %d years old.\n");
  return 0;
}
