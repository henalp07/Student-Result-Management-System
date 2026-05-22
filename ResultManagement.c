#include <stdio.h>
#include <string.h>

// Constant for total number of students
#define SIZE 100

// Structure to store student details
struct Student {

    int roll;
    char name[100];

    // Subject marks
    int python;
    int javascript;
    int cprogram;

    // Result details
    int total;
    float percentage;
    char grade;
};

// Function to calculate total, percentage and grade
void calculateResult(struct Student *s) {

    // Calculate total marks
    s->total = s->python + s->javascript + s->cprogram;

    // Calculate percentage
    s->percentage = s->total / 3.0;

    // Assign grade according to percentage
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

// Function to display one student's result
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

int main() {

    // Array of 100 students with predefined data
    struct Student s[SIZE] = {

        {1,"Aarav Sharma",78,85,90},
        {2,"Vivaan Patel",60,72,80},
        {3,"Aditya Verma",88,91,95},
        {4,"Krishna Gupta",56,60,65},
        {5,"Arjun Singh",92,94,96},
        {6,"Sai Kumar",70,75,80},
        {7,"Ishaan Mehta",81,79,85},
        {8,"Rohan Deshmukh",66,68,70},
        {9,"Rahul Joshi",90,89,93},
        {10,"Karan Yadav",45,50,55},
        {11,"Ananya Iyer",95,97,98},
        {12,"Diya Shah",84,82,86},
        {13,"Priya Nair",76,79,80},
        {14,"Sneha Kulkarni",65,67,69},
        {15,"Meera Reddy",91,90,92},
        {16,"Pooja Chavan",58,62,64},
        {17,"Riya Mishra",73,75,77},
        {18,"Aisha Khan",88,85,87},
        {19,"Kavya Menon",69,70,72},
        {20,"Neha Jain",94,96,95},
        {21,"Yash Pawar",50,60,58},
        {22,"Manav Agarwal",82,84,86},
        {23,"Harsh Tiwari",77,79,81},
        {24,"Nikhil Bansal",63,66,68},
        {25,"Siddharth Malhotra",89,90,91},
        {26,"Tanvi Patil",71,74,76},
        {27,"Muskan Arora",85,87,89},
        {28,"Payal Saxena",60,62,64},
        {29,"Ritika Chauhan",93,95,94},
        {30,"Shreya Thakur",78,80,82},
        {31,"Dev Tripathi",67,69,71},
        {32,"Om Rajput",88,90,92},
        {33,"Laksh Dubey",72,74,76},
        {34,"Aryan Bhatt",91,89,90},
        {35,"Parth Naidu",59,61,63},
        {36,"Simran Soni",83,85,87},
        {37,"Tanya Kapoor",74,76,78},
        {38,"Naina Gill",68,70,72},
        {39,"Varun Shetty",92,94,93},
        {40,"Aman Bhatia",47,59,61},
        {41,"Sakshi Rawat",80,82,84},
        {42,"Ira Fernandes",86,88,90},
        {43,"Ritesh Choudhary",64,66,68},
        {44,"Ayush Solanki",79,81,83},
        {45,"Palak Oberoi",90,92,94},
        {46,"Deepak Maurya",52,55,58},
        {47,"Ankit Sinha",75,77,79},
        {48,"Komal Goswami",87,89,91},
        {49,"Rachit Srivastava",69,71,73},
        {50,"Zoya Ansari",96,97,98},

        {51,"Aditi Sharma",78,82,85},
        {52,"Rohan Kulkarni",67,70,72},
        {53,"Neel Patel",91,93,95},
        {54,"Kritika Verma",58,60,64},
        {55,"Aryan Singh",88,90,92},
        {56,"Nidhi Mehta",74,76,79},
        {57,"Saurabh Yadav",61,65,68},
        {58,"Tanisha Jain",95,97,98},
        {59,"Mohit Gupta",45,50,55},
        {60,"Pallavi Nair",83,85,87},
        {61,"Akash Chavan",69,71,73},
        {62,"Ritika Iyer",90,92,94},
        {63,"Vikas Reddy",57,59,61},
        {64,"Snehal Patil",80,82,84},
        {65,"Harshita Kapoor",72,75,77},
        {66,"Rahul Tiwari",66,68,70},
        {67,"Simran Kaur",93,95,96},
        {68,"Kunal Bansal",54,58,60},
        {69,"Anushka Joshi",86,88,89},
        {70,"Yuvraj Pawar",62,64,66},
        {71,"Divya Chauhan",89,91,93},
        {72,"Manish Dubey",48,52,55},
        {73,"Isha Thakur",77,79,81},
        {74,"Rajat Solanki",64,66,68},
        {75,"Mansi Sinha",92,94,95},
        {76,"Abhishek Maurya",59,61,63},
        {77,"Priti Rawat",81,83,85},
        {78,"Adarsh Fernandes",73,75,78},
        {79,"Kashish Srivastava",87,89,90},
        {80,"Nitin Bhatt",55,57,60},
        {81,"Sanya Oberoi",94,96,97},
        {82,"Rakesh Naidu",68,70,72},
        {83,"Tina Arora",79,81,83},
        {84,"Pranav Saxena",60,63,65},
        {85,"Mehak Gill",91,92,94},
        {86,"Deepali Mishra",56,58,60},
        {87,"Arnav Shetty",84,86,88},
        {88,"Komal Rajput",71,73,75},
        {89,"Shivam Agarwal",65,67,69},
        {90,"Riya Malhotra",96,97,99},
        {91,"Kartik Goswami",52,55,58},
        {92,"Ayesha Khan",82,84,86},
        {93,"Lakshay Choudhary",74,76,78},
        {94,"Poonam Menon",69,70,72},
        {95,"Vivek Tripathi",88,89,91},
        {96,"Saket Deshmukh",58,60,62},
        {97,"Ishita Sharma",85,87,89},
        {98,"Dhruv Kumar",63,65,67},
        {99,"Nandini Shah",93,94,96},
        {100,"Arpit Ansari",47,50,53}
    };

    // Variable declarations
    int i, choice, roll, found;

    // Calculate result for all students
    for(i = 0; i < SIZE; i++) {
        calculateResult(&s[i]);
    }

    // Menu driven program
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

            // Display all students
            case 1:

                printf("\n================ ALL STUDENTS ================\n");

                for(i = 0; i < SIZE; i++) {
                    displayStudent(s[i]);
                }

                break;

            // Search student by roll number
            case 2:

                printf("\nEnter Roll Number : ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < SIZE; i++) {

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

                for(i = 0; i < SIZE; i++) {

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

                for(i = 0; i < SIZE; i++) {

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

                for(i = 0; i < SIZE; i++) {

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

                for(i = 0; i < SIZE; i++) {

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

                for(i = 0; i < SIZE; i++) {

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

            // Invalid choice
            default:

                printf("\nInvalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}
