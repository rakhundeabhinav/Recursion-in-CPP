

# 🔂 Recursion in C++

## 🎯 **Aim**  
To understand the concept of recursion in C++ and explore how problems can be solved by functions that repeatedly call themselves until a base condition is met.

---

## 📖 **Theory**  
Recursion is a technique where a function solves a problem by calling itself with a smaller input. This continues until a **base case** is reached, which halts further calls and begins returning results.

---

## 🧩 **Key Concepts**

- 🌀 **Recursive Function**: A function that calls itself.
- 🛑 **Base Case**: The condition that stops recursion.
- 🔁 **Recursive Case**: The logic that reduces the problem and triggers another call.
- 🧠 **Call Stack**: Each recursive call is stored in memory; once the base case is reached, the stack unwinds and results propagate back.

---

## 🏗️ **Types of Recursion**

| 🔍 Type               | 📌 Description                                      |
|----------------------|-----------------------------------------------------|
| 🔄 Direct Recursion   | Function calls itself directly.                     |
| 🔗 Indirect Recursion | Function A calls B, and B calls A.                  |
| 🧵 Tail Recursion     | Recursive call is the final operation.              |
| 🧶 Non-Tail Recursion | Recursive call is followed by additional logic.     |
| 📈 Linear Recursion   | One recursive call per step.                        |
| 🌳 Tree Recursion     | Multiple recursive calls per step.                  |

---

## 🧮 **Algorithms Implemented**

### 1️⃣ **Factorial using Recursion**

**Steps**:
1. 📥 Input an integer `n`.
2. 🧾 Define `int fact(int n)`:
   - If `n == 0`, return `1` (base case).
   - Else, return `n * fact(n - 1)` (recursive case).
3. ▶️ Call `fact(n)` from `main()`.
4. 📤 Display the result.

---

### 2️⃣ **Sum of Natural Numbers using Recursion**

**Steps**:
1. 📥 Input an integer `n`.
2. 🧾 Define `int sum(int n)`:
   - If `n <= 1`, return `n` (base case).
   - Else, return `n + sum(n - 1)` (recursive case).
3. ▶️ Call `sum(n)` from `main()`.
4. 📤 Display the result.

---

### 3️⃣ **String Reversal using Recursion**

**Steps**:
1. 📥 Input a string `str`.
2. 📏 Find its length `n`.
3. 🧾 Define `void reverse(string &str, int i, int n)`:
   - If `i == n`, stop (base case).
   - Else, call `reverse(str, i + 1, n)` (recursive case).
   - After returning, print `str[i]`.
4. ▶️ Call `reverse(str, 0, n)` from `main()`.
5. 📤 Display the reversed string.

---

## 🚀 **Applications of Recursion**

Recursion is widely used across domains:

### 🔢 Mathematical Computations
- Factorial, Fibonacci, power functions, GCD

### 🔍 Searching & Sorting
- Binary Search, Merge Sort, Quick Sort

### 🌲 Data Structures
- Tree traversal (preorder, inorder, postorder)
- Graph traversal (DFS)
- Linked list operations

### 🧠 Backtracking Problems
- N‑Queens problem
- Sudoku solver
- Maze pathfinding

### 🔡 String & Array Operations
- String reversal
- Palindrome checking
- Generating permutations and combinations

---

## 🧠 **Conclusion**

This study of recursion in C++ highlights:

- 🔂 **Self-Referential Logic**: Functions solving problems by calling themselves.
- 🛑 **Base Case Control**: Prevents infinite loops and stack overflow.
- 🧼 **Code Elegance**: Simplifies complex logic into readable, modular functions.
- ⚙️ **Versatility**: Used in math, sorting, searching, and data structure traversal.

👉 Recursion is expressive and powerful — but must be used with care due to memory and performance considerations.

