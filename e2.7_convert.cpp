/*********************************
    > File Name: e2.7_convert.cpp
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月23日 星期日 10时12分06秒
 ********************************/
#include<iostream>
int main()
{
	std::cout << "F\145rgus.\012";//e  \n

	std::cout << 3.14e1L << std::endl;
	//std::cout << 1024f << std::endl;//编译不通过，报错，整型后不能跟f。
	std::cout << 3.14L << std::endl;

	return 0;

}
