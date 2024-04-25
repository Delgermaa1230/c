#include <stdio.h>
void print(int a, int b) {
	 a = 10;
	 b = 20;
	 printf("%d", a+b);
}
int main() {
	int c=0;
	int a=2;
	int b=3;
	print(a,b);
	printf("%d",a+b);


}

