struct class
{char name[50];
int roll;
int serial;
};
#include<stdio.h>
#include<string.h>
main()
{
struct class student1={"aman", 1, 12};
struct class student2={"rahul", 2, 13};
struct class student3={"bansal", 3, 14};
printf("%s\t %d\t %d\n", student1.name, student1.roll, student1.serial);
printf("%s\t %d\t %d\n", student2.name, student2.roll, student2.serial);
printf("%s\t %d\t %d\n", student3.name, student3.roll, student3.serial);
}
