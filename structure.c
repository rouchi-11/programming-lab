#include <stdio.h>

struct Student {
    char name[50];
    float marks[5];
    float percentage;
    char result[10];
};

int main() {
    int i, j;
    struct Student students[10]; 
    float pass_percentage = 0.0;
    int distinctions = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d in 5 subjects: ", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%f", &students[i].marks[j]);
        }
    }

    for (i = 0; i < 10; i++) { 
        float sum = 0.0;
        for (j = 0; j < 5; j++) {
            sum += students[i].marks[j];
        }
        students[i].percentage = (sum / 5.0);
        if (students[i].percentage >= 40.0) {
            sprintf(students[i].result, "Pass"); 
            pass_percentage++;
        } else {
            sprintf(students[i].result, "Fail"); 
        }

        int countDistinction = 0;
        for (j = 0; j < 5; j++) {
            if (students[i].marks[j] >= 75) {
                countDistinction++;
            }
        }
        if (countDistinction == 5) {
            distinctions++;
        }
    }

    printf("\nStudent\tPercentage\tResult\n");
    for (i = 0; i < 10; i++) { 
        printf("%s\t%.2f%%\t\t%s\n", students[i].name, students[i].percentage, students[i].result);
    }

    pass_percentage = (pass_percentage / 10) * 100;
    printf("\nTotal Pass Percentage of the Class: %.2f%%\n", pass_percentage);

    printf("Total number of distinctions in the class: %d\n", distinctions);

    return 0;
}

