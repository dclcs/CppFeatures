#### C++ 新特性

##### 一、 Variadic Templates（数量不定的模板参数）

- `...` 接受多个参数， 表示一组/包东西(pack)
    - 用于`template parameter` => `template parameter pack`
    - 用于`function parameter types` => `function parameter type pack`
    - 用于`function parameters` => `function parameter pack`
- Inside variadic templates , `sizeof...(args)` yields the number of arguments
- 作用
    - 递归
    - 继承
    
##### 二、Spaces in template Expression

```c++
   vector<list<int> > // Ok in each C++ version
   vector<list<int>> //Ok since C++11
```

##### 三、nullptr and std::nullptr_t
- `nullptr` 空指针 = 0/NULL
```c++
void f(int);
void f(void*);

f(0); //call f(int)
f(NULL); //calls f(int) if NULL is 0
f(nullptr); //calls f(void*)
```

##### 四、Automatic Type Deduction with auto
Using auto is especially useful where the type is pretty long and/or complicated expression.