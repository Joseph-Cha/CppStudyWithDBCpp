### 1.4 입출력 스트림과의 첫 만남

``` C++
#include <iostream> // cout, cin, endl, 
using namespace std;


int main()
{

	int x = 1024;
	double pi = 3.141592;
	cout << "I love this lecture\n\n\n"; //<< std::endl;
	cout << "x is " << x << " pi is " << pi << endl;


	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	cout << "\a";

	int a;
	cin >> a;
	cout << "Your input is " << x << endl;
	// << : output operator
}
```