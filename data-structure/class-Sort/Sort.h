#ifndef __SORT__H__
#define __SORT__H__

#include <iostream>

#define MAXN 1000

using namespace std;

//命名规则：前缀 _ 号表示类内成员属性，后缀 _ 表示结构体内属性 
 
// Sort 类，使用各种算法实现数组排序 
class Sort {
	public:
		Sort(int array[], int lenth);
		
	public:
		void big_to_small(bool Switch);//将排序设置为从大到小 
		void print();
		void bubbling_sort();//冒泡排序 
		void select_sort();  //选择排序
		void fast_sort();    //快速排序
		void merge_sort();   //合并排序
		void shell_sort();   //希尔排序
		void insert_sort();  //插入排序
		void heap_sort();    //堆排序 
		
	private:
		bool compare(int a, int b);//比较两个元素的值,用于实现倒序排序 
		
	private:
		int array_[MAXN];
		int length_;
		bool bigToSmall_;
};

#endif //__SORT__H__
