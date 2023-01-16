#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int* items;
	int length;
	int used;
} Array;

Array Array_create (int l) {
	Array a;
	a.items = malloc(sizeof(int) * l);
	a.length = l;
	a.used = 0;
	return a;
}


void Array_print (Array a) {
	for (int i = 0; i < a.used; i++) {
		printf("\n(%d): %d", i, a.items[i]);
	}
}

Array Array_set(Array a, int element, int index) {
	a.items[index] =  element;
	if (index > a.used) {
		a.used = index + 1;
	}
	return a;
}
