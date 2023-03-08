/*
  Write a program to convert celsius temperature to fahrenheit.

  Author: Aakash Verma
  Github: @skyv26
  LinkedIn: @skyv2022
*/

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