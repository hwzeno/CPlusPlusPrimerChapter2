/*********************************
    > File Name: e2.18_pointer.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月23日 星期日 18时54分39秒
 ********************************/
#include<iostream>
int main()
{
	int *p;
	int i = 1;
	int j = 2;

	p = &i;
	std::cout << "p ="<< p << std::endl;
	p = &j;//更改指针的值
	std::cout << "p ="<< p << std::endl;
	std::cout << "j ="<< j << std::endl;
	*p = 3;//更改指针所指对象的值
	std::cout << "j =" << j << std::endl;
}
