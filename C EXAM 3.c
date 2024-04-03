// Function to reverse a 3-digit number

#include <stdio.h>


int reverseNumber(int num) {
    int reversedNum = 0;

   
    while (num != 0) {
        int digit = num % 10;
        reversedNum = (reversedNum * 10) + digit;
        num /= 10;
    }

    return reversedNum;
}



int main() {
    int num;

  
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);



   
    if (num >= 100 && num <= 999) {
        int reversed = reverseNumber(num);
        printf("The reversed number is: %d\n", reversed);
    } else {
        printf("Please enter a valid 3-digit number.\n");
    }



    return 0;
}

