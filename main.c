#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,min=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(min>a[i])
                min=a[i];
        }
        printf("%d\n",min*(n-1));
    }
	return 0;
}
