### 1.11 헤더 파일 만들기

``` C++
#include <iostream>
#include "MyHeaders/add.h"
using namespace std;

int main()
{
    int a = add(1, 2);
    cout << "Hello World";

    return 0;
}
```

#include "MyHeaders/add.h"
폴더 경로와 파일 이름을 위와 같이 표시함으로 
헤더파일을 포함시킬 수 있다.
헤더 파일을 사용하는 이유는 함수의 선언과 구현을 분리하기 위함이다.