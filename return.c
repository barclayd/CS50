#include <cs50.h>
#include <stdio.h>

int square(int n) {
    return n * n;
}

int main(void)
{
    int x = get_int("Enter an integer: ");
    int answer = square(x);
    printf("This is the answer: %i\n", answer);
}