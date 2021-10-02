#include "Whatever.hpp"

int		main()
{
//BASE TYPE//////////
	
	char	a = 'c';
	char	b = 'f';
	
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

//AWESOME//////////

	// Awesome<char> a('t');
	// Awesome<char> b('f');

	// Awesome<int> a(21);
	// Awesome<int> b(42);
	
	// Awesome<float> a(21.21f);
	// Awesome<float> b(42.42f);

	// Awesome<double> a(21.21);
	// Awesome<double> b(42.42);

	// Awesome<std::string> a("chaine1");
	// Awesome<std::string> b("chaine2");

	// std::string			tmp1 = "chaine1";
	// std::string			tmp2 = "chaine2";
	// char				*aptr = const_cast<char *>(tmp1.c_str());
	// char				*bptr = const_cast<char *>(tmp2.c_str());
	// Awesome<char *>	a(aptr);
	// Awesome<char *>	b(bptr);

	std::cout << F_R_GRN << "initial: a = " << F_R_PRPL << a << F_R_GRN << ", b = " << F_R_PRPL << b << RESET << std::endl;
	
	if (a == b)
		std::cout << F_R_CYAN << "a == b" << RESET << std::endl;
	if (a != b)
		std::cout << F_R_CYAN << "a != b" << RESET << std::endl;
	if (a > b)
		std::cout << F_R_CYAN << "a > b" << RESET << std::endl;
	if (a < b)
		std::cout << F_R_CYAN << "a < b" << RESET << std::endl;
	if (a >= b)
		std::cout << F_R_CYAN << "a >= b" << RESET << std::endl;
	if (a <= b)
		std::cout << F_R_CYAN << "a <= b" << RESET << std::endl;
	
	::swap(a, b);
	std::cout << F_R_GRN << "swap: a = " << F_R_PRPL << a << F_R_GRN << ", b = " << F_R_PRPL << b << RESET << std::endl;

	if (a == b)
		std::cout << F_R_CYAN << "a == b" << RESET << std::endl;
	if (a != b)
		std::cout << F_R_CYAN << "a != b" << RESET << std::endl;
	if (a > b)
		std::cout << F_R_CYAN << "a > b" << RESET << std::endl;
	if (a < b)
		std::cout << F_R_CYAN << "a < b" << RESET << std::endl;
	if (a >= b)
		std::cout << F_R_CYAN << "a >= b" << RESET << std::endl;
	if (a <= b)
		std::cout << F_R_CYAN << "a <= b" << RESET << std::endl;

	std::cout << F_R_GRN << "min( a, b ) = " << F_R_PRPL << ::min(a, b) << RESET << std::endl;
	std::cout << F_R_GRN << "max( a, b ) = " << F_R_PRPL << ::max(a, b) << RESET << std::endl;
	
	return (0);
}