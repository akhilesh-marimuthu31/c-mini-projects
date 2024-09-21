
//temperature converter from celcius to fahrenheit
#include <stdio.h>

void celsius_to_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
}

void celsius_to_kelvin(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f°C = %.2fK\n", celsius, kelvin);
}

int main() {
    float celsius;

    // Get temperature input in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert and display results
    celsius_to_fahrenheit(celsius);
    celsius_to_kelvin(celsius);

    return 0;
}
