#include <iostream>

// 실행과정 : 컴파일 -> 빌드 -> 설정
// 컴파일 : 번역 작업이다.
// Ctrl + Shift + B를 이용해서 컴파일 및 빌드를 할 수 있다.

// C++의 시작점은 main 함수이다.
using namespace std;

int main(int argc, char* argv[]) {
	//C++표준 기능의 대부분은 std라는 namespace 안에 존재하고 있다. 이름이 겹치는 것을 방지해주기위함이다.
	// cout : 콘창에 출력해주는 기능이다. 뒤에있는 ""(큰따옴표)안에 있는 문자들을 화면에 출력해준다.
	cout << "Hello, goorm!" << endl;
	
	/*
	변수 : 값이 바뀔 수 있다.
	용량의 최소단위 : bit
	1byte = 8bit
	1kbyte = 1024byte
	1mbyte = 1024kbyte
	1gbyte = 1024mbyte
	1ybyte = 1024gbyte
	
	문자를 표현하는 방법 : ASCII 코드 표를 가지고 있다.
    type  |  size   |   data     |    range         | unsigned    |
	char  |  1byte  |   text     | -128 ~127        | 0~255       |
	bool  |  1byte  |True / False|  true / false    | T/F         |
	short |  2byte  |  integer   |  -32767 ~ -32767 | 0~65535     |
	int   |  4byte  |  integer   |  약 -22억~21억    | 0~ 430000000|    |
	float |  4byte  |real number |
	double|  8byte  |real number |
	*/
	int Number = 10; 
	Number = 20;
	
	cout << Number << endl;
	
	bool  bTest = true;
	bTest = false;
	
	cout << bTest << endl;
	
	
	//영문이나 숫자는 1byte를 차지한다. 하지만 한글이나 한문, 등의 문자들은 2byte를 차지하기 때문에 char변수 하나에 저장하기가 힘들다.
	char  cTest = 't';
	
	cout << cTest << endl;
	
	float fNumber = 3.14f;
	
	cout << fNumber << endl;
    
	double dNumber = 123.456;
	
	cout << dNumber << endl;
	
	return 0;
}