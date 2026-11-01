# Computer Networks Lab Practicals

A collection of C programs implemented as part of the **Computer Networks Laboratory** coursework.

This repository contains practical implementations of error detection and error correction techniques used in computer networks.

## 📂 Programs Included

| No. | Program | Description |
|:---:|---|---|
| 1 | `even_parity_check.c` | Implements even parity generation by counting the number of 1s and appending a parity bit. |
| 2 | `hamming_encoded.c` | Implements Hamming Code encoding for error detection and correction. |
| 3 | `hamming_check.c` | Checks received data using Hamming Code to identify errors. |

## 🛠️ Technologies Used

- **Programming Language:** C
- **Compiler:** GCC
- **IDE:** Visual Studio Code

## 🚀 How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/bitwise-arnesh/cn-lab-practicals.git
```

### 2. Navigate to the Project Directory

```bash
cd cn-lab-practicals
```

### 3. Compile and Execute

**Even Parity Check**

```bash
gcc even_parity_check.c -o even_parity
./even_parity
```

**Hamming Code Encoding**

```bash
gcc hamming_encoded.c -o hamming_encoded
./hamming_encoded
```

**Hamming Code Checking**

```bash
gcc hamming_check.c -o hamming_check
./hamming_check
```

*Note: On Windows, execute the compiled programs using `.\even_parity.exe`, `.\hamming_encoded.exe`, and `.\hamming_check.exe` respectively.*

## 📚 Concepts Covered

- Binary Data Representation
- Even Parity Generation
- Error Detection
- Hamming Code Encoding
- Error Checking and Correction

## 🎯 Purpose

This repository serves as a collection of Computer Networks laboratory practicals for learning and understanding fundamental error detection and correction techniques.

---

**Course:** Computer Networks Lab  
**Language:** C

**Author:** [Arnesh Bera](https://github.com/bitwise-arnesh)
