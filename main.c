#include <stdio.h>

#include "gates.h"
#include "bus.h"

int a[4] = {0, 0, 1, 1};
int b[4] = {0, 1, 0, 1};
int c[4];

int main() {
	and16(a,b);

	return 0;
}

