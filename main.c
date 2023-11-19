#include <stdio.h>
#include <stdlib.h>
//실습3-2
//call by reference

void swap (int *x, int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void){
	int a = 3;
	int b = 5;
	swap(&a, &b);   //'swap(&a, &b);는 주소에 의한 참조를 사용하여 a와 b의 값을 서로 교환하는 함수 호출
	printf("a:%i, b:%i\n", a, b);
	
	return 0;
}