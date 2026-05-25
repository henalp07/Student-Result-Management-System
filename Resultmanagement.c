#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Student {

    int roll;
    char name[100];

    int python;
    int javascript;
    int cprogram;

    int total;
    float percentage;
    char grade;
};

void calculateResult(struct Student *s) {

    s->total = s->python + s->javascript + s->cprogram;

    s->percentage = s->total / 3.0;

    if(s->percentage >= 90)
        s->grade = 'A';

    else if(s->percentage >= 75)
        s->grade = 'B';

    else if(s->percentage >= 60)
        s->grade = 'C';

    else if(s->percentage >= 40)
        s->grade = 'D';

    else
        s->grade = 'F';
}

void displayStudent(struct Student s) {

    printf("\n====================================================");

    printf("\nRoll Number : %d", s.roll);
    printf("\nName        : %s", s.name);

    printf("\nPython      : %d", s.python);
    printf("\nJavaScript  : %d", s.javascript);
    printf("\nC Program   : %d", s.cprogram);

    printf("\nTotal Marks : %d", s.total);
    printf("\nPercentage  : %.2f", s.percentage);
    printf("\nGrade       : %c", s.grade);

    printf("\n====================================================\n");
}

int loadStudents(struct Student s[]) {

    FILE *fp;

    fp = fopen("students.csv", "r");

    if(fp == NULL) {

        printf("\nError Opening File!\n");
        return 0;
    }

    int i = 0;

    while(fscanf(fp,"%d,%99[^,],%d,%d,%d",
                 &s[i].roll,
                 s[i].name,
                 &s[i].python,
                 &s[i].javascript,
                 &s[i].cprogram) == 5) {

        calculateResult(&s[i]);

        i++;
    }

    fclose(fp);

    return i;
}

int main() {

    struct Student s[SIZE];

    int i, choice, roll, found;
    int totalStudents;

    totalStudents = loadStudents(s);

    do {

        printf("\n\n========== STUDENT RESULT MANAGEMENT SYSTEM ==========");

        printf("\n1. Display All Students");
        printf("\n2. Search Student by Roll Number");
        printf("\n3. Display Grade A Students");
        printf("\n4. Display Grade B Students");
        printf("\n5. Display Grade C Students");
        printf("\n6. Display Grade D Students");
        printf("\n7. Display Grade F Students");
        printf("\n8. Exit");

        printf("\n\nEnter Your Choice : ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:

                printf("\n================ ALL STUDENTS ================\n");

                for(i = 0; i < totalStudents; i++) {

                    displayStudent(s[i]);
                }

                break;

            case 2:

                printf("\nEnter Roll Number : ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < totalStudents; i++) {

                    if(s[i].roll == roll) {

                        printf("\n=========== STUDENT FOUND ===========\n");

                        displayStudent(s[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0) {

                    printf("\nStudent Record Not Found!\n");
                }

                break;

            case 3:

                printf("\n=========== GRADE A STUDENTS ===========\n");

                found = 0;

                for(i = 0; i < totalStudents; i++) {

                    if(s[i].grade == 'A') {

                        displayStudent(s[i]);
                        found = 1;
                    }
                }

                if(found == 0) {

                    printf("\n0 Students Found in Grade A\n");
                }

                break;

            case 4:

                printf("\n=========== GRADE B STUDENTS ===========\n");

                found = 0;

                for(i = 0; i < totalStudents; i++) {

                    if(s[i].grade == 'B') {

                        displayStudent(s[i]);
                        found = 1;
                    }
                }

                if(found == 0) {

                    printf("\n0 Students Found in Grade B\n");
                }

                break;

            case 5:

                printf("\n=========== GRADE C STUDENTS ===========\n");

                found = 0;

                for(i = 0; i < totalStudents; i++) {

                    if(s[i].grade == 'C') {

                        displayStudent(s[i]);
                        found = 1;
                    }
                }

                if(found == 0) {

                    printf("\n0 Students Found in Grade C\n");
                }

                break;

            case 6:

                printf("\n=========== GRADE D STUDENTS ===========\n");

                found = 0;

                for(i = 0; i < totalStudents; i++) {

                    if(s[i].grade == 'D') {

                        displayStudent(s[i]);
                        found = 1;
                    }
                }

                if(found == 0) {

                    printf("\n0 Students Found in Grade D\n");
                }

                break;

            case 7:

                printf("\n=========== GRADE F STUDENTS ===========\n");

                found = 0;

                for(i = 0; i < totalStudents; i++) {

                    if(s[i].grade == 'F') {

                        displayStudent(s[i]);
                        found = 1;
                    }
                }

                if(found == 0) {

                    printf("\n0 Students Found in Grade F\n");
                }

                break;

            case 8:

                printf("\nExiting Program...\n");
                break;

            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}
