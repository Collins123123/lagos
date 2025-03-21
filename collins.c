#include <stdio.h>

int main() {
    int bal = 50000; // Initial bal
    int withdrawal = 20000; // Amount to withdraw

    // Calculate the remaining bal
    int remaining_bal = bal - withdrawal ;

    // Display the remaining bal
    printf("Your remaining bal is: %d\n", remaining_bal);

    return 0;
}