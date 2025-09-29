# Recursive Programs in C++

## **Aim**
To understand and implement recursion in C++ through different examples including sum of natural numbers, string reversal, and factorial calculation.

## **Theory**
- **Recursion:** Recursion is a technique in programming where a function calls itself to solve a problem. A recursive function has a **base case** to stop the recursion and a **recursive case** that continues the process.  
- **Advantages of Recursion:**  
  - Makes code **simpler and cleaner** for problems that have repetitive subproblems.  
  - Useful in mathematical computations like factorial, sum of numbers, Fibonacci series, etc.  
  - Helps in solving problems related to strings, arrays, and trees naturally.  
- **Disadvantages of Recursion:**  
  - Can lead to **stack overflow** if base case is missing or recursion depth is too high.  
  - Often **less efficient** than iterative solutions for simple tasks.  

---

## **Algorithms**

### **Program 1: Sum of First n Natural Numbers**
1. Define a recursive function `calculateSum(n)` that returns the sum of first `n` natural numbers.  
2. Base case: if `n <= 1`, return `n`.  
3. Recursive case: return `n + calculateSum(n-1)`.  
4. In `main()`, input the number `n`.  
5. Call `calculateSum(n)` and display the result.  

---

### **Program 2: Reverse a String Using Recursion**
1. Define a function `getLength(str)` to calculate the length of the string manually.  
2. Define a recursive function `printReverse(str, index, n)` to print the string in reverse.  
3. Base case: if `index == n`, return.  
4. Recursive case: call `printReverse(str, index+1, n)` then print `str[index]`.  
5. In `main()`, input the string and call the recursive function to display it in reverse.  

---

### **Program 3: Factorial of a Number**
1. Define a recursive function `factorial(num)` to calculate factorial.  
2. Base case: if `num == 0`, return 1.  
3. Recursive case: return `num * factorial(num-1)`.  
4. In `main()`, input the integer.  
5. Call the recursive function and display the factorial.  

---

## **Conclusion**
- Recursion is a powerful technique for solving problems that can be broken down into smaller, similar subproblems.  
- These programs demonstrate practical examples of recursion:  
  - Calculating sum of natural numbers.  
  - Reversing a string.  
  - Finding factorial of a number.  
- Recursive solutions often make code simpler and easier to understand, though care must be taken to define proper base cases to prevent infinite recursion and stack overflow.
