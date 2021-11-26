#include <stdio.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int i, xiao = 1, da;
    for (i = 1; i < n; i++)
    {
        xiao *= 10;
    }
    da = xiao * 10;
    for (i = xiao; i < da; i++)
    {
        int t = i;
        int sum = 0;
        do{
            int r = t % 10;
            t /= 10;
            int j, b = r;
            for (j = 1; j < n; j++)
            {
                r *= b;
            }
            sum += r;
        } while (t > 0);
        if (sum == i) 
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
