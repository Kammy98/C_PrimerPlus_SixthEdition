#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main()
{
    string s = R"1234(���ڣ�'\n'����"\n"��"(��)"��������ʾ��)1234";
    cout << s << endl;

    // raw string���Կ�Խ���У����еĿհ׺ͻ��з��������ַ�����һ���֡�
    std::cout <<R"(
                   Hello,
            world   ~~~
                   )" << std::endl;

    return 0;
}
