#include <stdio.h>

struct Course
{
	
    int Math_Hours;
    float Math_Score;
    int Programming_Hours;
    float Programming_Score;
    
};

struct Student
{
	
    struct Course courses;
    
    char course[2];
    float GPA;
    
};

void GPA_Calc(float Math_Score , float Programming_Score , int Math_Hours , int Programming_Hours)
{
	
 float GPA;
 GPA = ((Math_Score*Math_Hours) + (Programming_Score*Programming_Hours))/(Math_Hours+Programming_Hours);
 printf("\nYour GPA is %.3f\n" , GPA);
 
}

int main()
{
	
    float Math_Score , Programming_Score;
    int Math_Hours ,Programming_Hours;

    struct Student S;

    S.course[0] = "Mathematics";
    S.course[1] = "Programming";

    Math_Score = S.courses.Math_Score;
    printf("Enter your score in Math (out of 4)\n");
    scanf("%f" , &Math_Score);
    Math_Hours = S.courses.Math_Hours = 3;

    Programming_Score = S.courses.Programming_Score;
    printf("\nEnter your score in Programming (out of 4)\n");
    scanf("%f" , &Programming_Score);
    Programming_Hours = S.courses.Programming_Hours = 4;

    GPA_Calc(Math_Score , Programming_Score , Math_Hours , Programming_Hours);

    return 0;
}

