#include <stdio.h>
#include <stdlib.h>

int square_plot_max_side(double bigger_side, int smaller_side)
{
    if (smaller_side == 0)
        return bigger_side;
    else
    {
        int i = bigger_side / smaller_side;
        int temp = bigger_side;
        bigger_side = smaller_side;
        smaller_side = temp - smaller_side * i;
        return square_plot_max_side(bigger_side, smaller_side);
    }
}

// gcc -o main chapter_4_square_plots.c && ./main
int main()
{
    /*
    Unexpected positive behavior: if you switch the positions of the bigger and smaller sides
    (like bigger = 80 and  smaller = 90), this algorithm will first invert their position.
    */
    int bigger_side = 1680; // try 80
    int smaller_side = 640; // try 90
    int plot_side = square_plot_max_side(bigger_side, smaller_side);
    printf("Plot side = %d\n", plot_side);
    return 0;
}