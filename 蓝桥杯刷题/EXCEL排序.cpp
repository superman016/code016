#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

struct Student {
	int id;
	string name;
	int score;
	Student() {}
	Student(int i, string n, int s): id(i), name(n), score(s) {}
}; 

bool cmp_by_id(Student &a, Student &b) {
	if (a.id < b.id) {
		return true;
	} else {
		return false;
	}
}

bool cmp_by_name(Student &a, Student &b) {
	if (a.name < b.name) {
		return true;
	} else if (a.name > b.name) {
		return false;
	} else {
		return a.id < b.id;
	}
}

bool cmp_by_score(Student &a, Student &b) {
	if (a.score < b.score) {
		return true;
	} else if (a.score > b.score) {
		return false;
	} else {
		return a.id < b.id;
	}
}

int main() {
	int n, C;
	vector<Student> stu_arr;
	
	cin >> n >> C;
	
	Student stu;
	for (int i = 0; i < n; i++) {
		cin >> stu.id;
		cin >> stu.name;
		cin >> stu.score;
		stu_arr.push_back(stu);
	}
	
	if (C == 1) {
		sort(stu_arr.begin(), stu_arr.end(), cmp_by_id);
	} else if (C == 2) {
		sort(stu_arr.begin(), stu_arr.end(), cmp_by_name);
	} else {
		sort(stu_arr.begin(), stu_arr.end(), cmp_by_score);
	}
	
	int length = stu_arr.size();
	for (int i = 0; i < length; i++) {
		printf("%06d", stu_arr[i].id);
		cout << " " << stu_arr[i].name << " " << stu_arr[i].score << "\n";
	}
	
	return 0;
}
