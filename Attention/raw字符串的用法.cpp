#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main()
{
    string s = R"1234(现在，'\n'我们"\n"连"(和)"都可以显示了)1234";
    cout << s << endl;

    // raw string可以跨越多行，其中的空白和换行符都属于字符串的一部分。
    std::cout <<R"(
                   Hello,
            world   ~~~
                   )" << std::endl;

    return 0;
}
