# 🟢 Easy Level Challenges – C++

Welcome to the **Easy** section of this C++ exercise repository

Here, you'll find beginner-friendly coding challenges that are not just about syntax — each problem is written with a **semi real-world scenario** in mind to help you understand *why* the logic matters and how it applies outside of practice.

---

## ✅ Current Challenges (with context)

### 1. 🧮 `basic_addition_tool.cpp`  
**Context**: You're helping develop a budgeting app for students. The first requirement is a feature that lets users add two expenses together and see the total cost.  
**Your Task**: Ask the user for two floating-point numbers (to represent prices), then print the sum with two decimal places, labeled clearly.  
**Goal**: Practice using `float` and formatted output.

---

### 2. 🎮 `even_turn_checker.cpp`  
**Context**: In a turn-based game, some characters can only take action on even-numbered turns.  
**Your Task**: Write a program that asks for the current turn number (as an integer), and prints whether it’s an “Action Turn” or a “Wait Turn.”  
**Goal**: Learn how to use conditional logic and the modulus operator.

---

### 3. 🧯 `temperature_alert.cpp`  
**Context**: You’re building a basic weather alert system for a greenhouse. If the temperature falls below 10°C or goes above 35°C, it should trigger an alert.  
**Your Task**: Ask the user to input the current temperature, then print either “Temperature is safe” or “ALERT: Temperature out of range!”  
**Goal**: Practice `if-else` logic and working with thresholds.

---

### 4. 🔐 `login_simulator.cpp`  
**Context**: A simple login interface is needed for an internal tool. Only one user (“admin”) with password “1234” is allowed.  
**Your Task**: Ask for a username and password. If both match, print “Access granted.” Otherwise, print “Invalid credentials.”  
**Goal**: Work with `string` comparison and `cin`.

---

### 5. 🧠 `mental_math_timer.cpp`  
**Context**: You’re building a mini-game for a brain training app. It presents users with simple random additions to solve under mental pressure.
**Your Task**: Generate two random integers between 10 and 99. Display them and ask the user to type the result. Check if the answer is correct.  
**Bonus**: Use `ctime` and `cstdlib` for randomness.  
**Goal**: Practice random number generation, conditionals, and input/output.

---

### 6. 🗓️ `days_in_month.cpp`  
**Context**: You're working on a calendar app that needs to show how many days are in a given month (excluding leap years for now).  
**Your Task**: Ask the user to enter a number between 1 and 12 (representing the month). Then, display how many days that month has.  
**Hint**: Use a `switch` or a series of `if` statements.  
**Goal**: Practice conditional structures and numerical input validation.

---

### 7. 🧾 `receipt_generator.cpp`  
**Context**: A small café wants a simple digital register to calculate and print the customer's bill. The user will enter the number of products bought and then input each product’s price.  
**Your Task**: Use a loop to read multiple product prices and then show the total amount to be paid.  
**Bonus**: Display each item as it’s entered in a nice format.  
**Goal**: Learn how to use loops, accumulate totals, and work with formatted output.

---

### 8. 🔢 `number_guessing_game.cpp`  
**Context**: You're building a simple number guessing game where the computer picks a number between 1 and 50, and the user must guess it.  
**Your Task**: Use `rand()` to generate the number, and then repeatedly ask the user for guesses until they get it right. Give hints like “Too low” or “Too high.”  
**Goal**: Practice loops, conditionals, and user feedback. Also introduces basic game logic.

---

### 9. 📊 `grade_average.cpp`  
**Context**: A teacher is building a digital gradebook that calculates averages and determines if students passed. A student can have any number of grades(betwen 0 - 100).  
**Your Task**: Ask how many grades will be entered, then use a loop to read them. Calculate and display the average. If the average is 60 or higher, print “Passed,” otherwise, “Failed.”  
**Goal**: Use dynamic loops, arithmetic operations, and clear output messaging.

---

### 10. 🧮 `basic_calculator.cpp`  
**Context**: You're tasked with building a minimal calculator that supports the four basic arithmetic operations (+, -, *, /).  
**Your Task**: Ask the user to input two numbers and an operator symbol. Then, perform the operation and display the result. Handle division by zero with a warning.  
**Bonus**: Wrap the logic in a function.  
**Goal**: Introduce user-defined functions, `char` input, and nested conditionals.

---

### 11. 🎲 `even_odd_counter.cpp`  
**Context**: You're analyzing a set of survey responses and need to count how many numbers are even or odd.  
**Your Task**: Ask the user for 10 integers. Count and display how many are even and how many are odd.  
**Goal**: Practice loops, conditionals, and counters.

---

### 12. 💯 `grade_to_letter.cpp`  
**Context**: A university wants to display letter grades based on numeric scores.  
**Your Task**: Ask the user for a score between 0 and 100. Display the corresponding letter grade:  
- A (90–100), B (80–89), C (70–79), D (60–69), F (<60)  
**Goal**: Reinforce conditionals and range handling.

---

### 13. 🛍️ `discount_calculator.cpp`  
**Context**: You're building a checkout system for a small retail store that automatically applies discounts based on total purchase value.
**Your Task**: Read a price from the user. Apply the following discounts:  
- Over $100 → 15%  
- $50–100 → 10%  
- Under $50 → 5%  
Display the final price with discount.  
**Goal**: Arithmetic operations, conditionals, formatting output.

---

### 14. 📅 `leap_year_checker.cpp`  
**Context**: You’re building a feature for a calendar app that needs to determine if a year is a leap year.  
**Your Task**: Ask the user for a year, and print if it **is** or **is not** a leap year.  
Rules:
- Divisible by 4  
- Not divisible by 100 **unless** also divisible by 400  
**Goal**: Logical operators and modular arithmetic.

---

### 15. 🧾 `invoice_summary.cpp`  
**Context**: A freelancer wants a tool to generate a simple invoice based on hours worked.  
**Your Task**: Ask for the number of tasks, then for each: task name, hours spent, and hourly rate.  
Print a summary and total payment.  
**Goal**: Combine strings, loops, and calculations.

---

### 16. 🔁 `multiplication_table.cpp`  
**Context**: You’re developing an educational app that helps children learn multiplication tables.
**Your Task**: Ask the user for a number (1–10) and print its multiplication table up to 10.  
**Bonus**: Add a visual format (e.g., 3 x 1 = 3).  
**Goal**: Loops and formatted output.

---

### 17. 🔄 `reverse_array.cpp`  
**Context**: You're helping build a tool that reverses datasets (like recent search history).  
**Your Task**: Ask the user for 5 numbers, store them in an array, and display them in reverse order.  
**Goal**: Learn arrays and for-loops working in reverse.

---

### 18. 🔡 `vowel_counter.cpp`  
**Context**: You're working on a speech analysis tool that evaluates sentence clarity by counting vowels.
**Your Task**: Ask the user for a sentence. Count how many vowels (a, e, i, o, u) it contains.  
**Bonus**: Ignore case (A/a, E/e, etc.).  
**Goal**: Introduce character analysis and basic string handling.

---

### 19. 🧮 `power_function.cpp`  
**Context**: You're building a lightweight math library.  
**Your Task**: Write a function that takes two integers `base` and `exponent`, and returns `base^exponent` without using `pow()`.  
**Goal**: Practice user-defined functions and loops.

---

### 20. 🏁 `fibonacci_sequence.cpp`  
**Context**: A math professor is designing a demo tool to visualize the Fibonacci sequence up to *n* terms for students.
**Your Task**: Ask for *n* and print that many numbers of the Fibonacci sequence.  
**Goal**: Combine loops and algorithmic thinking with a real use case.



## 🧪 How to Run

To compile and run an exercise:

```bash
g++ filename.cpp -o output
./output
```


---
🤖 Authorship

These contextualized challenges were generated by ChatGPT to simulate real-life programming scenarios and make learning more engaging.

However, all solutions are human-made — written by me to ensure clarity, logic, and learning value.