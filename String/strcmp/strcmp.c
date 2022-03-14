#include <stdio.h>
#include <string.h>

int main()
{
    /*
    // -1
    char firstStr[] = "Apple";
    char secondStr[] = "Banana";
    */

    /*
 //    -1
     char firstStr[] = "HHHA";
     char secondStr[] = "HHHB";
     */

    /*
      // 0
      char firstStr[] = "HHHB";
      char secondStr[] = "HHHB";
       */

    char firstStr[] = "HHHB";
    char secondStr[] = "HHHA";

    printf("%d", strcmp(firstStr, secondStr));

    return 0;
}