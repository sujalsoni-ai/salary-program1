# 💼 Employee Salary Calculation System in C

A simple **C programming project** that calculates an employee's gross salary, income tax, and net salary based on their basic salary.

## 📌 About the Project

This project is designed for beginners who are learning C programming. It takes an employee number and basic salary as input, calculates House Rent Allowance (HRA) and Dearness Allowance (DA), determines income tax using conditional statements, and displays the salary details.

## ✨ Features

- 🆔 Accepts employee number
- 💰 Takes basic salary as input
- 🏠 Calculates HRA at 12% of basic salary
- 📊 Calculates DA at 95% of basic salary
- 🧾 Calculates income tax based on salary slabs
- 📈 Displays gross and net salary
- 🔀 Uses `if-else` conditional statements

## 🧮 Salary Calculation Rules

| Basic Salary | Income Tax Rate |
|---|---:|
| Up to ₹10,000 | 10% |
| ₹10,001–₹30,000 | 20% |
| ₹30,001–₹50,000 | 25% |
| Above ₹50,000 | 30% |

## 🛠️ Technologies Used

- **Language:** C
- **Compiler:** GCC / MinGW
- **Editor:** Visual Studio Code

## 🚀 How to Run

1. Clone or download this repository.
2. Open the project folder in VS Code.
3. Save the source code as `salary.c`.
4. Open the terminal in VS Code.
5. Compile the program:

   ```bash
   gcc salary.c -o salary
   ```

6. Run the program on Windows:

   ```bash
   .\salary.exe
   ```

## 💻 Sample Output

```text
Enter the employee number: 101
Enter the basic salary: 20000

emp_no=101
basic=20000.000000
hra=2400.000000
da=19000.000000
gross=41400.000000
it=8280.000000
net=49680.000000
```

*Note: This sample reflects the current code's calculations, including its existing net salary formula.*

## 📚 Concepts Learned

- Variables and data types
- `printf()` and `scanf()`
- Arithmetic operators
- `if-else if-else` statements
- Basic salary calculations
- Input and output in C

## 🔧 Future Improvements

- Correct the net salary calculation.
- Format salary values to two decimal places.
- Add input validation for negative salaries.
- Improve the output using a formatted salary slip.

## 👨‍💻 Author

**Sujal Soni**

🎓 BCA 1st Year Student  
💻 Learning C Programming  
🌱 Exploring Git & GitHub

---

⭐ If you find this project useful, consider giving the repository a star!

**Made with ❤️ while learning C programming.**
