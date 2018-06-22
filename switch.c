#include <cs50.h>
#include <stdio.h>

int main(void)
{
  char c = get_char("Answer: ");

  switch(c){
    case 'Y':
        printf("yes\n");
        break;
    case 'y':
        printf("yes\n");
        break;
    case 'n':
        printf("no\n");
        break;
    case 'N':
        printf("no\n");
        break;
    default:
        printf("well, someone doesn't know how to follow instructions!\n");
  }

}
