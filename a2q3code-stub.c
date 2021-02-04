#include <stdio.h>

int main(void)
{
  int inChar, outChar; //note that getchar and putchar use the int type

  while (( inChar = getchar()) != EOF)
    {
      // Your bitwie code appers here ...

      //uncomment the following to return the input character as the output
      // outChar = inChar;

      //last instruction in while loop
      putchar(outChar);
    }
  
  return 0;
}
