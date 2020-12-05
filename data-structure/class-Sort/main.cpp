#include <iostream>

#include "Sort.h"

using namespace std;

int main(int argc, char** argv) {
	int arr[5] = {6, 5, 4, 1, 3};
	
	Sort test(arr, 5);
	
	test.big_to_small(true);
	test.select_sort();
	test.print();
	
	return 0;
}
