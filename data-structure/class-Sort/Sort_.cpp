#include <iostream>

#include "Sort.h"

using namespace std;

void Sort::big_to_small(bool Switch) {
	//�����򷽷�����Ϊ�Ӵ�У
	bigToSmall_ = Switch;

}

void Sort::print() {
	//��ӡ��ʱ�����ڵ�����
	for (int i = 0; i < length_; i++) {
		cout << array_[i] << " ";
	}
	cout << endl;

}

bool Sort::compare(int a, int b) {
	//�ڴ�С��������ʱ���� a > b ������ true������֮
	bool res;

	if (bigToSmall_) {
		if (a < b)
			res = true;
		else
			res = false;
	} else {
		if (a > b)
			res = true;
		else
			res = false;
	}

	return res;
}

Sort::Sort(int array[], int length) {
	//���캯�������򷽷�Ĭ��Ϊ��С����
	bigToSmall_ = false;
	length_ = length;
	for (int i = 0; i < length; i++) {
		array_[i] = array[i];
	}

}

void Sort::bubbling_sort() {
	//ð������
	int exchange = length_ - 1;
	int END;

	while (exchange != 0) {
		END = exchange;
		exchange = 0;
		for (int i = 0; i < END; i++) {
			if (compare(array_[i], array_[i + 1])) {
				cout << array_[i + 1] << " ";
				exchange = i + 1;
				swap(array_[i], array_[i + 1]);
			}
		}

		if (exchange == 0) continue;
		cout << endl;
	}

}

void Sort::select_sort() {
	//ѡ������
	int exchange = length_;

	for (int i = 0; i < length_ - 1; i++) {
		exchange = i;
		for (int j = i; j < length_; j++) {
			if (compare(array_[i], array_[j])) {
				exchange = j;
				cout << array_[j] << " ";
			}
		}

		if (exchange == i) continue;
		swap(array_[i], array_[exchange]);
		cout << endl;
	}

}

void Sort::insert_sort() {
	//��������
	int temp;

	for (int i = 1; i < length_; i++) {
		temp = array_[i];
		int j = i;
		while (j > 0 && compare(array_[j - 1], temp)) {
			cout << array_[j] << " ";
			array_[j] = array_[j - 1];
			j--;
		}

		if (j == i) continue;
		array_[j] = temp;
		cout << endl;
	}

}

void Sort::shell_sort() {
	//ϣ������
	int temp;
	int j;

	for (int d = length_ / 2; d > 0; d /= 2) {
		for (int i = d; i < length_; i++) {
			temp = array_[i];
			j = i;
			while (j - d >= 0 && compare(array_[j - d], temp)) {
				cout << array_[j] << " ";
				array_[j] = array_[j - d];
				j -= d;
			}

			if (j == i) continue;
			array_[j] = temp;
			cout << endl;
		}
	}

}

int Sort::partition(int first, int last) {
	//��ָ����������бȽϽ��������������λ����Ϊ��һ�ֵ���ֵ
	bool isExchange = false;

	int i = first, j = last;
	while (i < j) {
		while (i < j && compare(array_[j], array_[i])) j--;//�Ҳ�ɨ��
		if (i < j) {
			cout << array_[j] << " ";
			swap(array_[i], array_[j]);
			isExchange = true;
			i++;
		}
		while (i < j && compare(array_[j], array_[i])) i++;//���ɨ��
		if (i < j) {
			cout << array_[i] << " ";
			swap(array_[i], array_[j]);
			isExchange = true;
			j--;
		}
	}

	if (isExchange) cout << endl;

	return i;
}

void Sort::fast_sort_fun(int first, int last) {
	//��������ݹ麯��
	if (first >= last) return ;

	int pivot = partition(first, last);
	fast_sort_fun(pivot + 1, last);
	fast_sort_fun(first, pivot - 1);

}

void Sort::fast_sort() {
	//��������
	fast_sort_fun(0, length_ - 1);

}

void Sort::merge(int first, int mid, int last) {
	//�ϲ���������������
	int tempArr[length_];

	int i = first, j = mid, k = first;
	while (i < mid && j < last) {
		if (compare(array_[j], array_[i])) {
			tempArr[k] = array_[i];
			i++;
		} else {
			tempArr[k] = array_[j];
			j++;
		}
		k++;
	}
	while (i < mid) {
		tempArr[k] = array_[i];
		i++;
		k++;
	}
	while (j < last) {
		tempArr[k] = array_[j];
		j++;
		k++;
	}

	for (i = first; i < last; i++) {
		array_[i] = tempArr[i];
	}

}

void Sort::merge_pass(int step) {
	//��ָ���������������һ�ι鲢
	int i = 0;
	while (i + 2*step < length_) {
		merge(i, i + step, i + 2*step);
		i += 2*step;
	}
	if (i + step < length_) {
		merge(i, i + step, length_);
	} else {
		merge(i, (i + length_) / 2, length_);
	}

}

void Sort::merge_sort() {
	//�Բ�ͬ���������н��й鲢������������
	int step = 1;
	while (step < length_) {
		merge_pass(step);
		print();
		step *= 2;
	}
}

void Sort::sift_heap(int first, int last) {
	//��ʼ������
	int root = first;
	int son = 2*root + 1;

	while (son < last) {
		if (son < last - 1 && compare(array_[son + 1], array_[son])) son++;

		if (compare(array_[root], array_[son])) break;
		swap(array_[root], array_[son]);
		root = son;
		son = 2*root + 1;
	}

}

void Sort::heap_sort() {
	//������
	for (int i = (length_ + 1) / 2 - 1; i > -1; i--) {
		sift_heap(i, length_);
	}

	for (int i = 1; i < length_; i++) {
		swap(array_[0], array_[length_ - i]);
		sift_heap(0, length_ - i);
	}
}

