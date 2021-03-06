
### 1.14 전처리기와의 첫 만남

``` C++
#include <iostream>
#include <algorithm>

// using namespace는 이것을 사용하는 문{ } 안에 넣어주는 것이 좋다.
// 왜냐하면 std를 사용하는 다른 헤더 파일들과 혼동이 될 수도 있기 때문이다.
using namespace std;

// 메크로 
// 대문자
// MY_NUMBER를 만나면 다음을 출력
// 그냥 단순 교체만 하는 역할
// 요즘 추세는 메크로를 잘 안쓰고 있음 -> 과거 성능 이슈로 사용함
#define MY_NUMBER "Hello World"
#define MAX(a,b) (((a) > (b)) ? (a): (b))

// 메크로이지만 전처리기에서는 변환이 안됨
// 해당 파일 안에서만 적용

// #ifdef는 전처리기이다.
// 즉 빌드가 되기 전에 아래 부분이 결정이 됨.
// 멀티 플랫폼 개발 환경일 경우에 많이 사용
// 특정 플렛폼인 여부에 따라 사용하기 때문에
// 조건에 따라 컴파일을 할 수가 있다.

#define LIKE_APPLE

void doSomething()
{
    // LIKE_APPLE이 define이면
    #ifdef LIKE_APPLE
        cout << "APPLE" << endl;
    #endif

    // LIKE_APPLE이 not define이면
    #ifndef LIKE_APPLE
        cout << "Orange" << endl;
    #endif

    // => APPLE만 출력이 된다.
}

int main()
{
    cout << MY_NUMBER << endl; 
    cout << MAX(1 + 3, 2) << endl;

    // algorithm에 있는 함수
    cout << max(1 + 3, 2) << endl;

    return 0;
}
```