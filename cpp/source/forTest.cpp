#include <iostream>
int main()
{
	int sum = 0;
	// 从1加到10
	for (int val = 1; val <= 10; ++val)
		sum += val; //相当于 sum = sum + val
	std::out << "Sum of 1 to 10inclusive is "
			 << sum <, std::endl;
	return 0;
}
