# Random Decimal Min-Max Finder

This project is a C-based statistical utility designed to generate a sequence of random floating-point numbers within a normalized range $[0, 1]$ and analyze the dataset to determine its boundaries (Minimum and Maximum values).

## 🚀 Overview

The program demonstrates fundamental concepts of **Random Number Generation (RNG)** and **Iterative Data Analysis** in C. Unlike standard integer generation, this algorithm scales the random output to produce precise decimal values (e.g., `0.45`, `0.92`).

### Key Features
* **Dynamic Input:** Accepts user-defined dataset size ($N$).
* **Normalized Range:** Generates numbers strictly between `0.00` and `1.00`.
* **Seeded RNG:** Uses `srand(time(NULL))` to ensure unique sequences upon every execution.
* **Boundary Analysis:** efficiently finds the Maximum and Minimum values using a single-pass iteration ($O(N)$ complexity).

## ⚙️ Algorithm Logic

The generation logic uses the following formula to map integer randomness to a decimal scale:

$$R = \frac{\text{rand()} \pmod{101}}{100.0}$$

* **Step 1:** `rand() % 101` produces an integer between $0$ and $100$.
* **Step 2:** Dividing by `100.0` converts it to a float between $0.00$ and $1.00$.

## 💻 Usage

### 1. Compilation
To compile the source code, use a standard C compiler like GCC:

```bash
gcc main.c -o random_analyzer
