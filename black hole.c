#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifdef _WIN32
#include <windows.h>  // for Sleep on Windows
#else
#include <unistd.h>   // for usleep on Linux/macOS
#endif

#define WIDTH 40
#define HEIGHT 20

int main() {
    int bhX = WIDTH / 2;
    int bhY = HEIGHT / 2;

    float objX = 2.0;
    float objY = 2.0;

    float gravity = 0.8; // speed

    int x, y;  // Declare loop variables outside the loop for C90 compatibility

    while (1) {
#ifdef _WIN32
        system("cls"); // clear screen on Windows
#else
        system("clear"); // clear screen on Linux/macOS
#endif

        // Draw grid
        for (y = 0; y < HEIGHT; y++) {
            for (x = 0; x < WIDTH; x++) {
                int objPosX = (int)round(objX);
                int objPosY = (int)round(objY);

                if (x == bhX && y == bhY)
                    printf("@"); // Black hole
                else if (x == objPosX && y == objPosY)
                    printf("*"); // Object
                else
                    printf(".");
            }
            printf("\n");
        }

        // Distance calculation
        float dx = bhX - objX;
        float dy = bhY - objY;
        float distance = sqrt(dx * dx + dy * dy);

        // Stop when object reaches black hole
        if (distance < 1.0) {
            printf("\nObject swallowed by the black hole!\n");
            break;
        }

        // Gravity pull
        objX += gravity * dx / distance;
        objY += gravity * dy / distance;

#ifdef _WIN32
        Sleep(100); // Sleep 100 ms on Windows
#else
        usleep(100000); // Sleep 100 ms on Linux/macOS
#endif
    }

    return 0;
}

