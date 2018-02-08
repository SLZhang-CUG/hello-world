#include <iostream>
int main()
{
	std::cout << "请输入两个数字： ";
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	for (;v1 <= v2;v1++)
		std::cout << " i = " << v1 << std::endl;
	return 0;
}

