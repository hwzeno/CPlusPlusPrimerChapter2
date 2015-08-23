/*********************************
    > File Name: 2.3.3_pointer.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月23日 星期日 19时09分59秒
 ********************************/
#include<iostream>
int main()
{
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;

	std::cout << "ival= " << ival << std::endl;
	std::cout << "*pi= " << *pi << std::endl;
	std::cout << "**ppi= " << **ppi << std::endl;
}
