#include <stdio.h>
//#include <stdlib.h>
int main()
{
  char name[999];
  char dob[60];
  int phoneNumber;
  printf("Name \t: ");
  fgets(name, 20, stdin);
  printf("DOB\t: ");
  fgets(dob, 30, stdin);
  printf("Mobile\t: ");
  scanf("%d", &phoneNumber);
  return 0;
}
