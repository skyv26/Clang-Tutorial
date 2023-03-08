<!-- TABLE OF CONTENTS -->

# 📗 Table of Contents

- [📖 Introduction](#introduction)
- [💻 Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Setup](#setup)
  - [Single line and Multi-line comments ](#comments)
  - [Constants, Variables and Keywords](#const-var-key)
  - [What is main function ?](#main-func)
  - [I/O Library](#io-library)
  - [Miscellaneous](#miscellaneous)
  - [Usage](#usage)

<!-- PROJECT DESCRIPTION -->

# 🧑‍💻 Introduction <a name="introduction"></a>

> **In this tutorial we will first learn about the basics of C programming language. We are learning the basics because it will make our upcoming concepts more clear and help us in future for understanding other programming languages more better.**

Please consider take the below code-snippet as reference to understand the things.

<code>

    // I/O library for displaying data and recieving user input
    #include <stdio.h> 

    // entry point of the program
    int main() {

      // declare variable `temperature_in_celsius` of float-constants type
      float temperature_in_celsius;

      // Print the simple or reference message
      printf("Please enter the valid temperature value : ");

      // Getting the user input and store the value at the address
      // of temperature_in_celsius variable using `address of` 
      // operator &. Whereas %f is called Format Specifier.
      scanf("%f", &temperature_in_celsius);

      /* Print the value along with beautiful message and also solve
        experession too.
      */
      printf("Temperature in Fahrenheit with formula %.2f°C x (9/5) + 32.00 : %.2f°F\n", temperature_in_celsius, ((temperature_in_celsius*9)/5) + 32);

      // if program run successfully then it will return 0 as success message.
      return 0;
    }
</code>
<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->

## 💻 Getting Started <a name="getting-started"></a>

> In order to start with this project do as follows :

### Prerequisites <a name="prerequisites"></a>

- use git clone in order to get the copy this repo. Use below command

  - git clone https://github.com/skyv26/Clang-Tutorial.git

- make sure that you have `gcc` compiler for compiling the C program on `linux or MacOS` or you can also use the online editor. If you are window user you can also use windows based C program IDE apart from VSCode IDE.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Setup <a name="setup"></a>

- You can simply open it on your vscode in order to start working on it
  - cd Clang-Tutorial

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Single line and Multi-line comments <a name="comments"></a>

- Please use /* ANY COMMENT */ as single-line or multi-line comment.
- Use // for single-line but ANSI C standards also prefer to use it as multi-line comment.

### Constants, Variables and Keywords <a name="const-var-key"></a>
<br />

**Constants**: A constant is a value that remains fixed and unchangeable throughout the program's execution. In C, constants are declared using the "const" keyword and can be of various data types, such as integer, floating-point, or character. Examples of constants in C include pi (3.14159) or the speed of light (299,792,458 m/s).

**Variables**: A variable is a container that holds a value that can be modified during the program's execution. In C, variables are declared using a specific data type, such as "int" for integers or "float" for floating-point numbers, followed by a unique name. Examples of variables in C include age, height, or temperature.

**Keywords**: Keywords are reserved words in C programming language that have predefined meanings and cannot be used as variable or function names. There are 32 reserve keywords as given below

| Keywords |  |  |  |
| -- | -- | -- | -- |
| auto | break | case | char |
| const | continue | default | do |
| double | else | enum |extern |
| float | for | goto | if |
| int | long | register | return |
| short | signed | sizeof | static |
| struct | switch | typedef | union |
| unsigned | void | volatile | while|


In summary, constants are values that remain fixed, variables are containers that hold values that can be modified, and keywords are reserved words with predefined meanings. Understanding the differences between these concepts is essential for writing effective and efficient programs in C.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### What is main function ? <a name="main-func"></a>
<br />

> At the beginning just keep remember it is a main function and work as an entry point in C language. main( ) is a collective name given to a set of statements. This name has to be main( ), it cannot be anything else. All statements that belong to main( ) are enclosed within a pair of braces { }

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### I/O Library <a name="io-library"></a>

> The file stdio. h is a built-in header file in C. The acronym stdio stands for Standard Input and Output. This header file contains 3 variables, multiple function definitions, and multiple macro definitions. These variables, functions, and macros are related to the input and output operations in C

like for printing message or value in C program we will use `printf` function and based on requirements we can add `format specifier` which help the compiler to know what type of value is needed to print `%d`, `%f`and `%c` are called as `format-specifiers` whereas, for getting the user's input or response we use `scanf` function and it also takes two parameters
first it will take the format-specifier and then we will use `variable name` which referes to a memory block for saving data.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Miscellaneous <a name="miscellaneous"></a>

Some characters like `\n` is a newline characters to make our output looks more visible and easy to read.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Usage <a name="usage"></a>

- for compiling C program please use 
  - gcc FILE_NAME.c -o OUTPUT

- To run the code use `./OUTPUT` variable name.

<p align="right">(<a href="#readme-top">back to top</a>)</p>
