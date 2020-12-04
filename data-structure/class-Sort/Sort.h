#ifndef __SORT__H__
#define __SORT__H__

#include <iostream>

#define MAXN 1000

using namespace std;

//��������ǰ׺ _ �ű�ʾ���ڳ�Ա���ԣ���׺ _ ��ʾ�ṹ�������� 
 
// Sort �࣬ʹ�ø����㷨ʵ���������� 
class Sort {
	public:
		Sort(int array[], int lenth);
		
	public:
		void bubbling_sort();//ð������ 
		void select_sort();  //ѡ������
		void fast_sort();    //��������
		void merge_sort();   //�ϲ�����
		void shell_sort();   //ϣ������
		void insert_sort();  //��������
		void heap_sort();    //������ 
		
	private:
		
		
	private:
		int array_[MAXN];
		int length_;
};

#endif //__SORT__H__
