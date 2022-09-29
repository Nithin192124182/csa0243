#include <stdio.h>
union
{ 
struct student {
    char name[50];
    int roll;
}s1;
struct stu{
    float marks;
} s2;
}d;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", &d.s1.name);

    printf("Enter roll number: ");
    scanf("%d", &d.s1.roll);
    printf("Enter marks: ");
    scanf("%f", &d.s2.marks);

    printf("Displaying Information:\n");
    printf("Name: %s\n", d.s1.name);
    printf("Roll number: %d\n", d.s1.roll);
    printf("Marks: %.1f\n", d.s2.marks);

    return 0;
}
