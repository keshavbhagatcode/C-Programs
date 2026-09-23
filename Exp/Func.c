//Modular function to calculate total marks, average marks and grade of a student based on marks obtained in 5 subjects
#include <stdio.h>

int calculateTotal(int marks[])
{
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }
    return total;
}
float calculateAverage(int total) 
{
    return (float)total / 5;
}
char calculateGrade(float average)
{
    if (average >= 80) {
        return 'A';
    } else if (average >= 60) {
        return 'B';
    } else {
        return 'C';
    }
}
void main() 
{
    int marks[5];
    printf("Enter marks obtained in 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    int total = calculateTotal(marks);
    float average = calculateAverage(total);
    char grade = calculateGrade(average);

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %f\n", average);
    printf("Grade: %c\n", grade);
}