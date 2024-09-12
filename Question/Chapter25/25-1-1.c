/*
아래의 예제를 컴파일하고 실행하는 경우, 프로그램 시작부터 종료 시까지 스택의 상태변화에 대해서 설명해보자.
    void func2(int n){
        int num3=n+1;
    }
    void func2(int n){
        int num3=n+1;
        func2(num2);
    }

    int main(void){
        int num1=20;
        func1(num1);
        return 0;
    }
지역변수와 매개변수가 스택에 어떠한 순서대로 쌓이고 또 어떠한 순서대로 소멸되는지를 중심으로 설명하면 된다.
*/

/*
main() 실행:
main() 함수가 실행되면, num1이 스택에 쌓인다.
스택 상태: [num1]이 된다.

func1() 호출:
func1(num1)이 호출되면, func1()의 매개 변수 n과 지역 변수 num2가 스택에 추가된다.
스택 상태: [num2, n, num1]이 된다.

func2() 호출:
func2(num2)가 호출되면, func2()의 매개 변수 n과 지역 변수 num3이 스택에 추가된다.
스택 상태: [num3, n (for func2), num2, n (for func1), num1]이 된다.

함수 종료:
func2()가 끝나면, num3과 n(for func2)이 스택에서 제거된다.
func1()이 끝나면, num2와 n(for func1)이 스택에서 제거된다.
마지막으로 main()이 끝나면, num1이 스택에서 제거된다.

이 과정을 통해 함수 호출 시 매개 변수와 지역 변수가 차례로 스택에 쌓였다가,
함수가 종료될 때 다시 차례로 스택에서 제거된다는 것을 알 수 있다.
*/
