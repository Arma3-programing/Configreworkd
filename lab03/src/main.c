#include <stdio.h>
#include <math.h>
//Функция
int main()
{
    int x1, y1, z1, x2, y2, z2, res;
    x1 = 20;
    y1 = 10;
    z1 = 5;
    x2 = -20;
    y2 = -10;
    z2 = -5;
    
    
    res = ( x1 * x1 - 2 * x1 * x2 + x2 * x2) + (y1 * y1 - 2 * y1 * y2 + y2 * y2) + (z1 * z1 - 2 * z1 * z2 + z2 * z2);
    //res = sqrt(res);
    
    printf("Result: %d", res);
    
    return 0;
}
//19       
//-> 20       return 0;
  // 21   }
  // 22  
//(lldb) print res
//(int) $0 = 2100
//(lldb) 


