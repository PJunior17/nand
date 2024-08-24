#include <stdio.h>
#include "gates.h"
void and16(int a[], int b[]) {
	int k;	
	int c[4];
	for(int i = 0; i < 4; i++) {
		k = and(a[i],b[i]);
		c[i] = k;
		printf("%d\n", c[i]);
	}
}
