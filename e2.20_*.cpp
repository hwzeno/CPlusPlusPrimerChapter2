/*********************************
    > File Name: e2.20_*.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月23日 星期日 18时52分07秒
 ********************************/
#include<iostream>
int main()
{
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;
	std::cout << *p1 << std::endl;
}
