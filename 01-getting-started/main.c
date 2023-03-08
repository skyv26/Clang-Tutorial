/*
  Write a program to convert celsius temperature to fahrenheit.

  Author: Aakash Verma
  Github: @skyv26
  LinkedIn: @skyv2022
*/

#include <stdio.h>

int main() {
  float temperature_in_celsius;
  printf("Please enter the valid temperature value : ");
  scanf("%f", &temperature_in_celsius);
  printf("Temperature in Fahrenheit with formula %.2f°C x (9/5) + 32.00 : %.2f°F\n", temperature_in_celsius, ((temperature_in_celsius*9)/5) + 32);
  return 0;
}