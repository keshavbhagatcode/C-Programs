//A program with helper functions to convert temperature from Celsius to Fahrenheit, Fahrenheit to Celsius, and Celsius to Kelvin
#include <stdio.h>
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
float celsiusToKelvin(float celsius)
{
    return celsius + 273.15;
}
int main() 
{
    float celsius, fahrenheit, kelvin;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    kelvin = celsiusToKelvin(celsius);
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);
    printf("Temperature in Kelvin: %f\n", kelvin);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("Temperature in Celsius: %f\n", celsius);
    return 0;
}