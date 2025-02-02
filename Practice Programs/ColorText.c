// Color prints in C ...
#include<stdio.h>
#include<conio.h>

void main()
{
    // Red
    printf("\033[31m color red ...\033[0m\n");
    
    // Green
    printf("\033[32m color green ...\033[0m\n");
    
    // Light Green (Bold Green)
    printf("\033[1;32m color light green ...\033[0m\n");
    
    // Grey (Dim White)
    printf("\033[2;37m color grey ...\033[0m\n");
    
    // Purple (Magenta)
    printf("\033[35m color purple ...\033[0m\n");
    
    // Blue
    printf("\033[34m color blue ...\033[0m\n");
    
    // Cyan
    printf("\033[36m color cyan ...\033[0m\n");

    // Yellow
    printf("\033[33m color yellow ...\033[0m\n");

    // Black
    printf("\033[30m color black ...\033[0m\n");

    // Dark Gray
    printf("\033[90m color dark gray ...\033[0m\n");

    // Bright Red
    printf("\033[91m color bright red ...\033[0m\n");

    // Bright Green
    printf("\033[92m color bright green ...\033[0m\n");

    // Bright Blue
    printf("\033[94m color bright blue ...\033[0m\n");

    // Bright Magenta (Bright Purple)
    printf("\033[95m color bright purple ...\033[0m\n");

    // Bright White
    printf("\033[97m color bright white ...\033[0m\n");

    // Additional Colors:

    // Orange (Dim Yellow)
    printf("\033[38;5;214m color orange ...\033[0m\n");

    // Light Pink (Bright Magenta)
    printf("\033[38;5;13m color light pink ...\033[0m\n");

    // Light Blue (Bright Cyan)
    printf("\033[38;5;14m color light blue ...\033[0m\n");

    // Olive (Dark Yellow/Green)
    printf("\033[38;5;58m color olive ...\033[0m\n");

    // Light Gray
    printf("\033[37m color light gray ...\033[0m\n");

    // Brown
    printf("\033[38;5;94m color brown ...\033[0m\n");

    // Pink
    printf("\033[38;5;205m color pink ...\033[0m\n");

    // Gold (Dim Yellow)
    printf("\033[38;5;220m color gold ...\033[0m\n");

    // Light Purple
    printf("\033[38;5;183m color light purple ...\033[0m\n");

    // Navy Blue
    printf("\033[38;5;17m color navy blue ...\033[0m\n");

    // Turquoise
    printf("\033[38;5;48m color turquoise ...\033[0m\n");

    // Beige
    printf("\033[38;5;230m color beige ...\033[0m\n");
}

