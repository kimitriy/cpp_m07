#include "Array.hpp"

template <typename T>
void	printArrayHeap(Array<T> *arr)
{
	int	i = 0;
	while (i < 10)
	{
		std::cout << F_R_PRPL << (*arr)[i] << RESET << std::endl;
		i++;
	}
}

template <typename T>
void	printArrayStack(Array<T> arr)
{
	int	i = 0;
	while (i < 10)
	{
		std::cout << F_R_PRPL << arr[i] << RESET << std::endl;
		i++;
	}
}

int		main()
{
	try
	{
		//CHAR//////////////
		// Array<char> *arr1 = new Array<char>(10);
		// int	i = 0;
		// while (i < 10)
		// {
		// 	(*arr1)[i] = i + 65;
		// 	i++;
		// }
		
		// Array<char> arr2 = Array<char>(10);
		// i = 0;
		// while (i < 10)
		// {
		// 	arr2[i] = i + 65;
		// 	i++;
		// }
		
		//INT//////////////
		// Array<int> *arr1 = new Array<int>(10);
		// int	i = 0;
		// while (i < 10)
		// {
		// 	(*arr1)[i] = i;
		// 	i++;
		// }
		
		// Array<int> arr2 = Array<int>(10);
		// i = 0;
		// while (i < 10)
		// {
		// 	arr2[i] = i;
		// 	i++;
		// }

		//FLOAT//////////////
		// Array<float> *arr1 = new Array<float>(10);
		// int	i = 0;
		// while (i < 10)
		// {
		// 	(*arr1)[i] = static_cast<float>(i) + 0.21f;
		// 	i++;
		// }
		
		// Array<float> arr2 = Array<float>(10);
		// i = 0;
		// while (i < 10)
		// {
		// 	arr2[i] = static_cast<float>(i) + 0.21f;
		// 	i++;
		// }
		
		//DOUBLE//////////////
		// Array<double> *arr1 = new Array<double>(10);
		// int	i = 0;
		// while (i < 10)
		// {
		// 	(*arr1)[i] = static_cast<double>(i) + 0.42;
		// 	i++;
		// }
		
		// Array<double> arr2 = Array<double>(10);
		// i = 0;
		// while (i < 10)
		// {
		// 	arr2[i] = static_cast<double>(i) + 0.42;
		// 	i++;
		// }

		//STD::STRING//////////////
		// Array<std::string> *arr1 = new Array<std::string>(10);
		// (*arr1)[0] = "std::string qwe";
		// (*arr1)[1] = "std::string rty";
		// (*arr1)[2] = "std::string uio";
		// (*arr1)[3] = "std::string p[]";
		// (*arr1)[4] = "std::string asd";
		// (*arr1)[5] = "std::string fgh";
		// (*arr1)[6] = "std::string jkl";
		// (*arr1)[7] = "std::string zxc";
		// (*arr1)[8] = "std::string vbn";
		// (*arr1)[9] = "std::string m<>";

		// Array<std::string> arr2 = Array<std::string>(10);
		// arr2[0] = "std::string qwe";
		// arr2[1] = "std::string rty";
		// arr2[2] = "std::string uio";
		// arr2[3] = "std::string p[]";
		// arr2[4] = "std::string asd";
		// arr2[5] = "std::string fgh";
		// arr2[6] = "std::string jkl";
		// arr2[7] = "std::string zxc";
		// arr2[8] = "std::string vbn";
		// arr2[9] = "std::string m<>";

		//CHAR *//////////////
		// std::string tmp[10];
		// tmp[0] = "char * qwe";
		// tmp[1] = "char * rty";
		// tmp[2] = "char * uio";
		// tmp[3] = "char * p[]";
		// tmp[4] = "char * asd";
		// tmp[5] = "char * fgh";
		// tmp[6] = "char * jkl";
		// tmp[7] = "char * zxc";
		// tmp[8] = "char * vbn";
		// tmp[9] = "char * m<>";

		// Array<char *> *arr1 = new Array<char *>(10);
		// int i = 0;
		// while (i < 10)
		// {
		// 	(*arr1)[i] = const_cast<char *>(tmp[i].c_str());
		// 	i++;
		// }
		
		// Array<char *> arr2 = Array<char *>(10);;
		// i = 0;
		// while (i < 10)
		// {
		// 	arr2[i] = const_cast<char *>(tmp[i].c_str());
		// 	i++;
		// }



		//CHECKING OUT/////////////
		// std::cout << F_R_GRN << "arr: " << F_R_PRPL << *arr << RESET << std::endl;
		
		// std::cout << "arr1 on Heap:" << std::endl;
		// printArrayHeap(arr1);
		// // std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << (*arr1)[-1] << RESET << std::endl;
		// // std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << (*arr1)[100] << RESET << std::endl;
		
		// std::cout << std::endl;
		
		// std::cout << "arr2 on Stack:" << std::endl;
		// printArrayStack(arr2);
		// std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << arr2[-1] << RESET << std::endl;
		// std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << arr2[100] << RESET << std::endl;
		
		// delete arr1;


		//ARRAY DEEP COPY/////////////////
		Array<std::string> *arr1 = new Array<std::string>(10);
		(*arr1)[0] = "std::string qwe";
		(*arr1)[1] = "std::string rty";
		(*arr1)[2] = "std::string uio";
		(*arr1)[3] = "std::string p[]";
		(*arr1)[4] = "std::string asd";
		(*arr1)[5] = "std::string fgh";
		(*arr1)[6] = "std::string jkl";
		(*arr1)[7] = "std::string zxc";
		(*arr1)[8] = "std::string vbn";
		(*arr1)[9] = "std::string m<>";

		Array<std::string> *arr2 = new Array<std::string>(0);

		arr2 = arr1;
		delete arr1;

		printArrayHeap(arr2);
		std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << (*arr1)[-1] << RESET << std::endl;
		std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << (*arr1)[100] << RESET << std::endl;

		delete arr2;
	}
	catch (const std::exception& e)
	{
		std::cerr << F_R_RED << e.what() << RESET << std::endl;
	}
	return (0);
}