#include "Iter.hpp"

int		main()
{
//BASE TYPE//////////
	
	char	arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k'};
	// int		arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// float	arr[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.1f};
	// double	arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
	// std::string	arr[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
	
	// std::string	tmp[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
	// char		*arr[10];
	// int i = 0;
	// while (i < 10)
	// {
	// 	arr[i] = const_cast<char *>(tmp[i].c_str());
	// 	i++;
	// }
	

//USER TYPE//////////

	// SpecialType<char> arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k'};
	// SpecialType<int> arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// SpecialType<float> arr[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.1f};
	// SpecialType<double> arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
	
	// SpecialType<std::string> arr[10];
	// arr[0] = SpecialType<std::string>("one");
	// arr[1] = SpecialType<std::string>("two");
	// arr[2] = SpecialType<std::string>("three");
	// arr[3] = SpecialType<std::string>("four");
	// arr[4] = SpecialType<std::string>("five");
	// arr[5] = SpecialType<std::string>("six");
	// arr[6] = SpecialType<std::string>("seven");
	// arr[7] = SpecialType<std::string>("eight");
	// arr[8] = SpecialType<std::string>("nine");
	// arr[9] = SpecialType<std::string>("ten");

	// std::string	tmp[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
	// SpecialType<char *> arr[10];
	// int	i = 0;
	// while (i < 10)
	// {
	// 	arr[i] = SpecialType<char *>(const_cast<char *>(tmp[i].c_str()));
	// 	i++;
	// }

	iter(arr, 10, printItem);
}