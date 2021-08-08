#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // 문자열의 마지막 null char가 들어가 있다.
    char myString[] = "string";
    for (int i = 0; i < 7; ++i)
    {
        // ASKII code
        cout << (int)myString[i] << endl;
    }
    cout << sizeof(myString) / sizeof(myString[0]) << endl; // 7

    char myString2[255];
    cin >> myString2;

    // 띄어쓰기까지 포함해서 읽음

    myString2[0] = 'A';
    myString2[4] = '\0'; // cout은 char의 문자열을 출력할 때 \0이 나오기 전까지 출력함

    cout << myString2 << endl; // myString[3]까지만 출력함
    
    cin.getline(myString2, 255);
    cout << myString2 << endl; // myString[3]까지만 출력함
    
    int index = 0;
    while(true)
    {
        if (myString2[index] == '\0') break;
        cout << myString2[index] << " " << (int)myString2[index] << endl;
        ++index;
    }


    // 정통 C스타일 문자열
    // 문자열 복사
    char source[] = "Copy this!";
    char dest[50];

    // source에 있는 문자열을 dest에 대입
    // 위험한 부분 => dest의 메모리 공간이 부족하면 runtime error가 발생
    strcpy(dest, source);
    // strcpy_s(dest, 5, source);

    cout << source << endl;
    cout << dest << endl;

    // 문자열을 dest에 붙여줌
    strcat(dest, source);

    cout << source << endl;
    cout << dest << endl;

    // 같으면 0, 틀리면 -1
    cout << strcmp(source, dest) << endl;
    if (strcmp(source, dest) == 0)
    {
        
    }
    return 0;
}