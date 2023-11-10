#include <stdio.h>
int main()
{
  char name[10], adress[20];
  int date, mon, year, age;
  printf("Name: ");
  scanf("%s", name);
  printf("adress: ");
  scanf("%s", adress);

  printf("Date: ");
  scanf("%d", &date);
  printf("Month: ");
  scanf("%d", &mon);
  printf("Year: ");
  scanf("%d", &year);

  printf("age: ");
  scanf("%d", &age);

  printf("Hi %s!! adress %s \nYour DOB is %d/%d/%d and age is %d", name, adress, date, mon, year, age);
  return 0;
}
