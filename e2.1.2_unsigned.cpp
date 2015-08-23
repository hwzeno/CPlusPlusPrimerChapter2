/*********************************
    > File Name: e2.1.2_unsigned.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月22日 星期六 22时17分22秒
 ********************************/
#include<iostream>
int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

}

