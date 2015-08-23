/*********************************
    > File Name: 2.3.2_nullptr.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月23日 星期日 17时38分45秒
 ********************************/
#include<iostream>
int main()
{
	//p48
	//int *p2 = 0; //直接将p2初始化为字面值常量0
	int *p2 = 0;
	std::cout << p2 << std::endl;

	int *p1 = nullptr;//-std=c++11
	std::cout << p1 << std::endl;


	//输出结果均为0;可见两者是等价的
}
