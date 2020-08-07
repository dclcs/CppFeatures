#include <iostream>
#include <functional>
using namespace std;

void print(){
    cout << "no parameter" << endl;
}

template<typename T, typename... Types>
void print(const T& firstArg, const Types&... args){
    //任意参数的个数， 每个参数的type也是任意的
    cout << "sizeof argument " << sizeof...(args) << endl;
    cout << firstArg << endl;
    print(args...); //递归
}

template<typename... Types>
void print(const Types&... args){
    cout << "n parameters" << endl;
    print(args...);
}

int main() {
    cout << "test function variadic templates " << endl;
    print(7.5, "hello", 53, 'c');
    return 0;
}
