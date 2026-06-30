#include<stdio.h>
void print_student_profile(int id, int age, double cg, int cre);
int main(void)
{
    int id, age;
    double cg;
    int cre;
    printf(" Enter Student ID, Age, CGPA and Credits Completed:");
    scanf("%d %d %lf %d", &id, &age, &cg, &cre);
    print_student_profile(id, age, cg, cre);
    return 0;

}
void print_student_profile(int id, int age, double cg, int cre)
{
    printf("\t\tSTUDENT PROFILE\n");
    printf("ID Number : %d\n", id);
    printf("Age : %d\n", age);
    printf("CGPA : %f\n", cg);
    printf("Credits : %d", cre);
}
