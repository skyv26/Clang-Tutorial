<!-- TABLE OF CONTENTS -->

# 📗 Table of Contents

- [📖 Introduction](#introduction)
- [💻 Getting Started](#getting-started)
  - [Setup](#setup)
  - [Prerequisites](#prerequisites)
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