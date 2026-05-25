# Student Result Management System

## Overview
The Student Result Management System is a console-based application written in C.
This program reads student records from a CSV file, calculates total marks,
percentage, and grade, and provides different options to display and search
student information.

---

## Features
- Load student data from a CSV file
- Calculate:
  - Total Marks
  - Percentage
  - Grade
- Display all student records
- Search student by roll number
- Display students according to grades:
  - Grade A
  - Grade B
  - Grade C
  - Grade D
  - Grade F
- Menu-driven interface

---

## Technologies Used
- Language: C
- Concepts:
  - Structures
  - Functions
  - File Handling
  - Arrays
  - Conditional Statements
  - Loops

---

## File Structure

### Main Source File
- main.c

### Data File
- students.csv

---

## CSV File Format

The program reads data from students.csv.

### Format
```csv
RollNumber,Name,PythonMarks,JavaScriptMarks,CProgramMarks
```

### Example
```csv
1,Ali,90,85,88
2,Sara,78,80,75
3,John,60,58,62
4,Ayesha,35,40,38
```

---

## Grade Criteria

| Percentage | Grade |
|------------|-------|
| 90 and above | A |
| 75 to 89 | B |
| 60 to 74 | C |
| 40 to 59 | D |
| Below 40 | F |

---

## Functions Used

### calculateResult()
Calculates:
- Total marks
- Percentage
- Grade

### displayStudent()
Displays complete details of a student.

### loadStudents()
Loads student records from CSV file into structure array.

### main()
Controls the menu-driven system and user interaction.

---

## Menu Options

```text
1. Display All Students
2. Search Student by Roll Number
3. Display Grade A Students
4. Display Grade B Students
5. Display Grade C Students
6. Display Grade D Students
7. Display Grade F Students
8. Exit
```

---

## How to Compile and Run

### Compile
```bash
gcc main.c -o result
```

### Run
```bash
./result
```

---

## Sample Output

```text
========== STUDENT RESULT MANAGEMENT SYSTEM ==========

1. Display All Students
2. Search Student by Roll Number
3. Display Grade A Students
4. Display Grade B Students
5. Display Grade C Students
6. Display Grade D Students
7. Display Grade F Students
8. Exit

Enter Your Choice :
```

---

## Concepts Demonstrated
- Structure in C
- Pointer usage
- File handling using fopen(), fscanf(), and fclose()
- Menu-driven programming
- Searching algorithms
- Data processing

---

## Advantages
- Simple and easy to understand
- Efficient student record management
- Beginner-friendly project
- Demonstrates practical use of file handling in C

---

## Limitations
- Data can only be read from CSV file
- No option to add/update/delete records dynamically
- Console-based interface only

---

## Future Enhancements
- Add new student records
- Update and delete student data
- Store records in database
- Create graphical user interface (GUI)
- Generate result reports automatically

---

## Author
Developed using C Programming for academic learning and project implementation.
