<h1 align="center">Matrix Threads</h1>

<p align="center">
        <span>Process</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>First Step</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Compile</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Run</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Clean</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Explanation</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</p>

---

## 📝 Process

step by step on how to perform a sum of numbers from the matrix using multiple threads.

---

## ☝️ First Step

```bash
$ git clone https://github.com/akazitoo/matrixThreads.git folder
$ cd folder
```

Cloning the project to local and arriving in the program folder

---

## ✔️ Compile

```bash
$ make
```
Create a file main

<br>

OBS: if you don't have make installed

```bash
$ sudo apt install make
```

---

## ⚙️ Run

```bash
$ make run
```
Run the main file 

---

## 🧹 Clean

```bash
$ make clean
```

Delete the compiled file

---

## 📌 Explanation

This is a program that performs the sum of the matrix numbers using multiple threads, which in the input we will put the value that refers to the row and column of this matrix, and each row of the matrix will have a thread responsible for it, which will then be added to a global variable called `sum_matrix` that stores the sum of all numbers in the matrix.