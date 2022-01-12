#include <stdio.h>

int main()
{
    int year, result;

    printf("Enter Year: ");
    switch(scanf("%d", &year) != 1)
    {
        case 1:
          result = -1;
          break;
        
        default:
          switch(year<=0)
          {
            case 1:
              result = -1;
              break; 
              
            default:
              switch((year % 4 == 0) && ( year % 100 != 0) || (year % 400 == 0))
              {
                  case 1:
                    result = 1;
                    break;

                  default:
                    result = 0;
              }
          }
    }

	outputLeapYrResult(result);
 }

void outputLeapYrResult(int result)
{
 printf("\nActualOutput:");
 printf("%d", result);   
}
