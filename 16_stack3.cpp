// 16_stack3.cpp
#include <iostream>
using namespace std;

// 3. C++은 구조체 안에 멤버 데이터와 멤버 데이터를
//    조작하는 함수를 묶을 수 있습니다.

// 캡슐화: 상태(멤버 데이터, 속성) + 행위(멤버 함수, 메소드)
//   "상태와 행위를 가지고 있는 변수"
//    => 객체(Object)
struct Stack
{
  // 멤버 데이터(상태)
  int buff[10];
  int top;

  // 멤버 함수(행위)
  void init()
  {
    top = 0;
  }

  void push(int n)
  {
    buff[top++] = n;
  }

  int pop()
  {
    return buff[--top];
  }
};

int main()
{
  Stack s1;

  s1.init();

  s1.push(10);
  s1.push(20);
  s1.push(30);

  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
}