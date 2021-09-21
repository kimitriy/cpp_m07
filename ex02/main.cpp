#include "Array.hpp"

int		main()
{
	try
	{
		//CHAR//////////////
		Array<char> arr(10);
		int	i = 0;
		while (i < 10)
		{
			arr[i] = i + 65;
			i++;
		}
		
		//INT//////////////
		// Array<int> arr(10);
		// int	i = 0;
		// while (i < 10)
		// {
		// 	arr[i] = i;
		// 	i++;
		// }
		
		//FLOAT//////////////
		// Array<float> arr(10);
		// int	i = 0;
		// while (i < 10)
		// {
		// 	arr[i] = static_cast<float>(i) + 0.21f;
		// 	i++;
		// }

		//DOUBLE//////////////
		// Array<double> arr(10);
		// int	i = 0;
		// while (i < 10)
		// {
		// 	arr[i] = static_cast<double>(i) + 0.42;
		// 	i++;
		// }

		//STD::STRING//////////////
		// Array<std::string> arr(10);
		// arr[0] = "std::string qwe";
		// arr[1] = "std::string rty";
		// arr[2] = "std::string uio";
		// arr[3] = "std::string p[]";
		// arr[4] = "std::string asd";
		// arr[5] = "std::string fgh";
		// arr[6] = "std::string jkl";
		// arr[7] = "std::string zxc";
		// arr[8] = "std::string vbn";
		// arr[9] = "std::string m<>";

		//STD::STRING//////////////
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

		// Array<char *> arr(10);
		// int i = 0;
		// while (i < 10)
		// {
		// 	arr[i] = const_cast<char *>(tmp[i].c_str());
		// 	i++;
		// }


		//CHECKING OUT/////////////
		int indx = 0;
		while (indx < 10)
		{
			std::cout << F_R_PRPL << arr[indx] << RESET << std::endl;
			indx++;
		}
		std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << arr[-1] << RESET << std::endl;
		std::cout << F_R_GRN << "out of the range: " << F_R_PRPL << arr[100] << RESET << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << F_R_RED << e.what() << RESET << '\n';
	}
}