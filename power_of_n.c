// Calculate the power of a number. Ex power(2, 3) returns 8.

int power(int base, int exponent);

int main() {
				power(3, 4); // 81
}

int power(int base, int exponent) {

				if(exponent == 0) {
								return 1;	
				}

				return base * power(base, exponent - 1);				
}
