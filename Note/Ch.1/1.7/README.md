### 1.7 지역 범위

``` C++
#include <iostream>
using namespace std;

int main()
{	
	// 이름이 같으면 같은 메모리 공간을 만드려하기 때문에 x
	int x = 0;
	// int x = 0;
	// int x(0);
	cout << x << " " << &x << endl;

	// 메로리가 서로 다르다
	// { }로 묶이는 순간 다른 영역을 표시한다고 이해하면 될 듯.
	// { }로 묶이는 순간 다른 메모리 위치에 값을 저장?
	{
		// int x = 1;
		// 같은 메모리 주소를 사용하고 있음
		x = 1;
		cout << x << " " << &x << endl;
	}
	cout << x << " " << &x << endl;

}
``` 