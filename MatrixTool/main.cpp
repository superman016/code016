#include <iostream>
#include "Matrix.h" //包含 Matrix 类所在的头文件 

using namespace std;

int main() {
	double a[3] = {1, 2, 3};
	double b[3][3] = {{3, 2, 1}, {3, 2, 1}, {3, 2, 1}};
	
	Matrix A(3);    //定义一个长度为 1 的一维矩阵
	A.setByArray(a);//调用类的 setByArray 将一维数组数组转化为矩阵 

	Matrix B = to_matrix(b, 3, 3);//使用全局函数 to_matrix 将一个二维数组转化为一个二维矩阵 

	Matrix res = A * B;           //计算矩阵 A 和 B 的乘积并用矩阵对象 res 接收结果 
	
	A.print();       //打印矩阵 A 的值 
	cout << endl; 
	B.print("B");    //打印矩阵 B 的值，设置了输出标识 
	
	cout << endl;
	res.shape("res");//输出矩阵 res 的形状，设置了输出标识
	cout << res;     //输出接收乘积结果的矩阵 
	
	return 0;
}
