#include <iostream>
#include "Matrix.h" //���� Matrix �����ڵ�ͷ�ļ� 

using namespace std;

int main() {
	double a[3] = {1, 2, 3};
	double b[3][3] = {{3, 2, 1}, {3, 2, 1}, {3, 2, 1}};
	
	Matrix A(3);    //����һ������Ϊ 1 ��һά����
	A.setByArray(a);//������� setByArray ��һά��������ת��Ϊ���� 

	Matrix B = to_matrix(b, 3, 3);//ʹ��ȫ�ֺ��� to_matrix ��һ����ά����ת��Ϊһ����ά���� 

	Matrix res = A * B;           //������� A �� B �ĳ˻����þ������ res ���ս�� 
	
	A.print();       //��ӡ���� A ��ֵ 
	cout << endl; 
	B.print("B");    //��ӡ���� B ��ֵ�������������ʶ 
	
	cout << endl;
	res.shape("res");//������� res ����״�������������ʶ
	cout << res;     //������ճ˻�����ľ��� 
	
	return 0;
}
