# Student Result Management System (C)

## 📌 Project Overview

The **Student Result Management System** is a console-based application developed using the **C Programming Language**.  
This project is designed to manage, calculate, and display student academic records efficiently through a simple menu-driven interface.

The system stores and processes data for **100 students** using **structures and arrays**. It automatically calculates:

- Total Marks
- Percentage
- Grade

based on the marks obtained in:

- Python
- JavaScript
- C Programming

The project demonstrates the practical implementation of core C programming concepts such as structures, functions, arrays, loops, and conditional statements.

---

# 🎯 Objectives of the Project

The main objectives of this project are:

- To understand real-world implementation of **C programming**
- To learn how to manage records using **structures**
- To perform calculations using functions.

---

# 🚀 Features

## ✅ Student Record Management

The system stores complete information of students including:

- Roll Number
- Student Name
- Python Marks
- JavaScript Marks
- C Programming Marks
- Total Marks
- Percentage
- Grade

---

## ✅ Automatic Result Calculation

The application automatically calculates:

- Total Marks
- Percentage
- Grade

using predefined grading conditions.

---

## ✅ Search Functionality

Users can search any student record using:

- Roll Number

---

## ✅ Grade-wise Student Display

The system can display students according to grades:

- Grade A Students
- Grade B Students
- Grade C Students
- Grade D Students
- Grade F Students

---

# 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C Programming | GCC Compiler | Program compilation |
| Visual Studio Code | Code editor / IDE |

---

# 📚 Concepts Used in the Project

This project uses the following C programming concepts:

- Structures (`struct`)
- Arrays
- Functions
- Loops
- Conditional Statements
- Pointers
- Menu-driven Programming
- Data Processing

---

# 📂 Project Structure

```bash
Student-Result-Management-System/
│
├── ResultManagement.c
├── README.md
```

---

# ⚙️ Working of the Program

## Step 1: Student Data Storage

The program stores predefined records of 100 students using an array of structures.

```c
struct Student
```

Each structure contains:

```c
roll
name
python
javascript
cprogram
total
percentage
grade
```

---

## Step 2: Result Calculation

The function:

```c
calculateResult()
```

calculates:

- Total Marks
- Percentage
- Grade

for every student.

---

## Step 3: Menu Operations

The user can choose different operations from the menu:

1. Display All Students
2. Search Student by Roll Number
3. Display Grade A Students
4. Display Grade B Students
5. Display Grade C Students
6. Display Grade D Students
7. Display Grade F Students
8. Exit

---

# 📊 Grading System

| Percentage | Grade |
|---|---|
| 90 and Above | A |
| 75 – 89 | B |
| 60 – 74 | C |
| 40 – 59 | D |
| Below 40 | F |

---

# ▶️ How to Compile and Run

## 🔹 Step 1: Compile the Program

```bash
gcc ResultManagement.c -o ResultManagement
```

---

## 🔹 Step 2: Run the Program

### On Windows

```bash
.\ResultManagement
```

### On Linux / macOS

```bash
./ResultManagement
```

---

# 📋 Sample Menu Output

```bash
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

# 📌 Sample Student Output

```bash
====================================================

Roll Number : 1
Name        : Aarav Sharma

Python      : 78
JavaScript  : 85
C Program   : 90

Total Marks : 253
Percentage  : 84.33
Grade       : B

====================================================
```

---

# 🔍 Example Functionalities

## ✅ Search Student by Roll Number

The program allows users to search a particular student record quickly using the roll number.

---

## ✅ Grade-wise Filtering

Users can display students belonging to a specific grade category.

Example:

- Only Grade A students
- Only Grade B students
- etc.

---

# 💡 Advantages of the Project

- Easy to understand
- Beginner-friendly
- Improves programming logic
- Efficient data organization
- Simple console-based UI

---

# 🔮 Future Improvements

This project can be enhanced further by adding:

- File handling for permanent data storage
- Student record insertion and deletion
- Updating student details
- Database connectivity
- Password-based login system

---

# 🎓 Learning Outcomes

After completing this project, learners will understand:

- How structures work in C
- Managing multiple records using arrays
- Function-based modular programming
- Performing result calculations programmatically

---

# 📌 Conclusion

The **Student Result Management System** is an excellent beginner-level project for understanding fundamental concepts of C programming. It provides practical experience in managing structured data, implementing logical operations, and developing menu-driven applications.

This project serves as a strong foundation for creating more advanced management systems in the future.

---

# 👨‍💻 Developed Using

- C Programming Language
- GCC Compiler
- Visual Studio Code
