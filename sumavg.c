#include <stdio.h>

int main() {
    //Student 3024246
    //Variables n, num, sum and avg declared below
    int n;
    double num, sum = 0.0, avg;
    //Asks the User to input a positive integer for how many doubles the program will ask for
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    //For loop to iterate through the code below n (previous input) amount of times
    for (int i = 0; i < n; ++i) {

        //Asks the user to input a double (non-negative)
        printf("Enter a non-negative number that is a double: \n");
        scanf("%lf", &num);

        //Checks whether num is below zero and asks user to re-enter the number until they enter a positive number
        if (num < 0){
            printf("Negative Numbers not accepted, try again: \n");
            i--; //Assures the for loop does not continue to iterate every time user enters a negative integer.
            continue;
        }
        printf("Number %d is: %.5lf\n", i+1, num); //Displays the double which the user chose
        sum += num; //Adds the number onto the sum

    }
    //Code below calculates the average and then displays both the sum and the average in a print statement
    avg = sum / n;
    printf("The sum of numbers entered = %.5lf\n", sum);
    printf("The average of numbers entered = %.5lf\n", avg);
    return 0;
}
