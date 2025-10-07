#include <stdio.h>
#include <conio.h>

int main() {
    int evenNum = 10;   // Starting number for square values
    int negOdd = -19;   // Starting negative odd number

    for (int i = 0; i < 9; i++) {  // 9 lines total
        if (i % 2 == 0) {
            // Print square of evenNum, (i/2 + 1) times
            int square = evenNum * evenNum;
            for (int j = 0; j <= i / 2; j++) {
                printf("%d ", square);
            }
            evenNum--;  // Decrease for next line
        } else {
            printf("%d", negOdd);
            negOdd += 2;  // Next negative odd number
        }
        printf("\n");
    }

    return 0;
}
