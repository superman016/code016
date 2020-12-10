#include <iostream>

#define MAXN 1000

using namespace std;

//哈希类，使用除留余数法作为哈希函数 
class Hash {
	public:
		Hash();
	
	private:
		int array_[MAXN];
		int length_;
		int mod_;
}; 


