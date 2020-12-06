#ifndef __SORT__H__
#define __SORT__H__

#include <iostream>

#define MAXN 1000

using namespace std;

/**
关于变量命名:
前缀 _ 号表示结构体内属性 eg: _name 
后缀 _ 表示类内成员属性   eg: name_
**/

// Sort 类，使用各种算法实现数组排序，展示排序过程 
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
		bool compare(int a, int b);              //比较两个元素的值,用于实现倒序排序 
		int partition(int first, int last);      //对一个序列排序并分隔 
		void fast_sort_fun(int first, int last); //快速排序递归函数 
		void merge(int first, int mid, int last);//合并两段序列
		void merge_pass(int step);               //以指定步长完成合并 
		void sift_heap(int first, int last);                        //初始建堆 
		
	private:
		int array_[MAXN]; //存储待排序序列 
		int length_;      //序列长度 
		bool bigToSmall_; //排序方式 
};

#endif //__SORT__H__
