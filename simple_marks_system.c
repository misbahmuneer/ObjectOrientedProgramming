//10. Simple Marks System
//Input marks of 5 subjects, calculate total, average, and percentage, and assign a grade.
#include <stdio.h>
int main() {
    float phy, chem, bio, math, comp;
    float total, average, percentage;
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &comp);
    total = phy + chem + bio + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100.0;
    printf("Total = %.2f\nAverage = %.2f\nPercentage = %.2f%%\n", total, average, percentage);
    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else if (percentage >= 40)
        printf("Grade E\n");
    else
        printf("Grade F\n");

    return 0;
}
