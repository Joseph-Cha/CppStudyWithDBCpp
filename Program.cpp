#include <iostream>

using namespace std;

int main()
{
    int selection;
    // do문을 먼저 출력하고 반복을 진행
    do
    {
        cout << ",,," << endl;
        cout << ",,," << endl;
        cout << ",,," << endl;
        cout << ",,," << endl;
    } while (selection <= 0 || selection >= 5); // do while에서 주의사항 마지막에 ;를 찍어야함
    
    return 0;
}