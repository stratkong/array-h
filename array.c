#include "array.h"

int main () {

	Array arr = Array_create(10);

	printf("%d\n", arr.length);

	arr.items[0] = 1;
	arr.items[1] = 10;
	arr.items[2] = 20;

	arr = Array_set(arr, 100, 7);

	Array_print(arr);



	return 0;
}