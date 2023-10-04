#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//5.  Дана длина окружности. Найти площадь круга, ограниченного этой окружностью. В качестве значения Pi использовать 3.14. 
int main()
{   
    int l, null;
    double ans;
    const double pi = 3.14;
  
    scanf("%d", &l);
    ans = pow(l,2)/(4*pi);
    printf("\n%lf", ans);

    
    scanf("\n%d",&null);
    return 0;
}