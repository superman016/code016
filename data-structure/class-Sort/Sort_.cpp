#include <iostream>

#include "Sort.h"

using namespace std;

Sort::Sort(int array[], int length) {
	length_ = length;
	for (int i = 0; i < length; i++) {
		array_[i] = array[i];
	}
}
