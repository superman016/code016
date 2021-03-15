#include <iostream>

using namespace std;

struct Pos {
	double x;
	double y;
};

int main() {
	Pos a, b, n, m, top, bottom;
	
	cin >> a.x >> a.y >> b.x >> b.y;
	cin >> n.x >> n.y >> m.x >> m.y;
	
	top.x = max(min(a.x, b.x), min(n.x, m.x));
	top.y = min(max(a.y, b.y), max(n.y, m.y));	
	bottom.x = min(max(a.x, b.x), max(n.x, m.x));
	bottom.y = max(min(a.y, b.y), min(n.y, m.y));
	
	bool flag = top.x < bottom.x && top.y > bottom.y;
	printf("%.2lf", flag ? (top.y-bottom.y) * (bottom.x - top.x) : 0.00);
	
	return 0;
}
