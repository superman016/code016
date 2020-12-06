#ifndef __SORT__H__
#define __SORT__H__

#include <iostream>

#define MAXN 1000

using namespace std;

/**
���ڱ�������:
ǰ׺ _ �ű�ʾ�ṹ�������� eg: _name 
��׺ _ ��ʾ���ڳ�Ա����   eg: name_
**/

// Sort �࣬ʹ�ø����㷨ʵ����������չʾ������� 
class Sort {
	public:
		Sort(int array[], int lenth);
		
	public:
		void big_to_small(bool Switch);//����������Ϊ�Ӵ�С 
		void print();
		void bubbling_sort();//ð������ 
		void select_sort();  //ѡ������
		void fast_sort();    //��������
		void merge_sort();   //�ϲ�����
		void shell_sort();   //ϣ������
		void insert_sort();  //��������
		void heap_sort();    //������ 
		
	private:
		bool compare(int a, int b);              //�Ƚ�����Ԫ�ص�ֵ,����ʵ�ֵ������� 
		int partition(int first, int last);      //��һ���������򲢷ָ� 
		void fast_sort_fun(int first, int last); //��������ݹ麯�� 
		void merge(int first, int mid, int last);//�ϲ���������
		void merge_pass(int step);               //��ָ��������ɺϲ� 
		void sift_heap(int first, int last);                        //��ʼ���� 
		
	private:
		int array_[MAXN]; //�洢���������� 
		int length_;      //���г��� 
		bool bigToSmall_; //����ʽ 
};

#endif //__SORT__H__
