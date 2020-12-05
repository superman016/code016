#include <iostream>

#include "Sort.h"

using namespace std;

void Sort::big_to_small(bool Switch) {
	bigToSmall_ = Switch;
}

void Sort::print() {
	for (int i = 0; i < length_; i++) {
		cout << array_[i] << " ";
	}
	cout << endl;
}

bool Sort::compare(int a, int b) {
	//在从小到大排序时，若 a > b ，返回 true，否则反之 
	bool res = true;
	 
	if (a < b) {
		if (bigToSmall_ == true) 
			res = true;
		else 
			res = false;
	}
	
	return res;
}

Sort::Sort(int array[], int length) {
	bigToSmall_ = false;
	length_ = length;
	for (int i = 0; i < length; i++) {
		array_[i] = array[i];
	}
}

void Sort::bubbling_sort() {
	 
}

void Sort::select_sort() {
	int exchange;
	
	for (int i = 0; i < length_ - 1; i++) {
		exchange = i;
		for (int j = i; j < length_; j++) {
			if (compare(array_[exchange], array_[j])) {
				exchange = j;
				cout << array_[j] << " ";
			} 
		}
		swap(array_[i], array_[exchange]);
		cout << endl;
	}
}
