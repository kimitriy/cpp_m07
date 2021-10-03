#include "Iter.hpp"

int		main()
{
//BASE TYPE//////////
	
	// char	a = 'c';
	// char	b = 'f';
	
	// int		a = 21;
	// int		b = 42;

	// float	a = 21.21f;
	// float	b = 42.42f;

	// double	a = 21.21;
	// double	b = 42.42;

	// std::string	a = "chaine1";
	// std::string	b = "chaine2";

	// std::string	tmp1 = "chaine1";
	// std::string	tmp2 = "chaine2";
	// char		*a = const_cast<char *>(tmp1.c_str());
	// char		*b = const_cast<char *>(tmp2.c_str());

	// char	arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k'};
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

	// Awesome<char> arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k'};
	// Awesome<int> arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// Awesome<float> arr[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.1f};
	// Awesome<double> arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
	
	Awesome<std::string> *arr = new Awesome<std::string>[10];
	arr[0] = Awesome<std::string>("one");
	arr[1] = Awesome<std::string>("two");
	arr[2] = Awesome<std::string>("three");
	arr[3] = Awesome<std::string>("four");
	arr[4] = Awesome<std::string>("five");
	arr[5] = Awesome<std::string>("six");
	arr[6] = Awesome<std::string>("seven");
	arr[7] = Awesome<std::string>("eight");
	arr[8] = Awesome<std::string>("nine");
	arr[9] = Awesome<std::string>("ten");

	// std::string	tmp[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
	// Awesome<char *> arr[10];
	// int	i = 0;
	// while (i < 10)
	// {
	// 	arr[i] = Awesome<char *>(const_cast<char *>(tmp[i].c_str()));
	// 	i++;
	// }

	iter(arr, 10, printItem);
	
	return (0);
}