### 1.12 헤더 가드

**add.h**
``` C++
#pragma once

// 전처리기
// MY_ADD가 이미 정의 되어있으면 MY_ADD를 include하지 마라(정의 하지 마라) 
// => #pragma once로 한번에 구현 가능
// #ifndef MY_ADD

// #define My_ADD

int add(int a, int b)
{
    return a + b;
}

// #endif
```

**myWork.h**
``` C++
#pragma once

#include "add.h"

void doSomething()
{
    add(1, 2);
}
```

**program.cpp**
``` C++

#include <iostream>
#include "MyHeaders/myWork.h"
#include "MyHeaders/add.h"

using namespace std;

/*
#include "MyHeaders/myWork.h" -> MyHeaders/add.h를 포함하고 있음
#include "MyHeaders/add.h"
위와 같이 했을 때 의미는 아래와 같다(헤더 가드(#pragma once)하지 않았을 경우)
헤더를 두 번 include 했기 때문에

중복된 경우 한 번만 include를 해라 
=> 헤더 가드가 필요한 이유(#pragma once)

int add(int a, int b)
{
    return a + b;
}

void doSomething()
{
    add(1, 2);
}

int add(int a, int b)
{
    return a + b;
}
*/

int main()
{
    doSomething();
    cout << "Hello World";

    return 0;
}
```