#include <iostream>

#include "Hash.h"

using namespace std;

Hash::Hash() {
	length_ = 0;
	for (int i = 0; i < length_; i++) {
		array_[i] = 0;
	}
}
