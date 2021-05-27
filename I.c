#include <stdio.h>
int main()
{
	int a, i, result;
	double n, frac;
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++) {
		
		scanf("%lf", &n);
        frac = n - (int)n;
    
		if((int)(n)%  10 == 0 && frac == 0.0) {

		printf("YES\n");
	
		}
		else {
			printf("NO\n");
		}

	}
	return 0;
}
