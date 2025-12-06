#include "main.h"
void print_square(int size)
{
    int i;
    int lines;
  
    for(lines=0;lines<size;lines++)
    {
        for(i=0; i<size ; i++)
            putchar('#');
      putchar('\n');
    }
}
