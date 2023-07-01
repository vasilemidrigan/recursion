// Calculate the sum of arithmetic series from 1 to N

#include <stdio.h>

int sum(int n);

int main() {
				int x = sum(9);
}

int sum(int n) {
				if(n == 1) {
								return 1;	
				}

				return n + sum(n - 1);
}
