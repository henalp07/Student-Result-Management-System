#include <stdio.h>      
#include <string.h>   

// Maximum number of students that can be stored
#define SIZE 100

// Structure to store student details
struct Student {

    int roll;               // Roll Number
    char name[100];         // Student Name

    int python;             // Marks in Python
    int javascript;         // Marks in JavaScript
    int cprogram;           // Marks in C Programming

    int total;              // Total Marks
    float percentage;       // Percentage
    char grade;             // Grade (A, B, C, D, F)
};

// Function to calculate total, percentage and grade
void calculateResult(struct Student *s) {

    // Calculate total marks
    s->total = s->python + s->javascript + s->cprogram;

    // Calculate percentage
    s->percentage = s->total / 3.0;

    // Assign grade based on percentage
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

// Function to display a student's complete information
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

// Function to load student data from CSV file
int loadStudents(struct Student s[]) {

    FILE *fp;

    // Open CSV file in read mode
    fp = fopen("students.csv", "r");

    // Check if file opened successfully
    if(fp == NULL) {

        printf("\nError Opening File!\n");
        return 0;
    }

    int i = 0;

    // Read records from CSV file
    while(fscanf(fp,
                 "%d,%99[^,],%d,%d,%d",
                 &s[i].roll,
                 s[i].name,
                 &s[i].python,
                 &s[i].javascript,
                 &s[i].cprogram) == 5) {

        // Calculate result after reading marks
        calculateResult(&s[i]);

        i++;
    }

    // Close file
    fclose(fp);

    // Return total number of students loaded
    return i;
}

// Main Function
int main() {

    // Array to store student records
    struct Student s[SIZE];

    int i;
    int choice;
    int roll;
    int found;

    // Load students from CSV file
    int totalStudents = loadStudents(s);

    // Menu-driven loop
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

            // Display all student records
            case 1:

                printf("\n================ ALL STUDENTS ================\n");

                for(i = 0; i < totalStudents; i++) {

                    displayStudent(s[i]);
                }

                break;

            // Search student using roll number
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

            // Display Grade A students
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

            // Display Grade B students
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

            // Display Grade C students
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

            // Display Grade D students
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

            // Display Grade F students
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

            // Exit program
            case 8:

                printf("\nExiting Program...\n");
                break;

            // Invalid menu option
            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}
