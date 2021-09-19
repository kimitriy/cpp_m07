#include "Whatever.hpp"

int		main()
{
//BASE TYPE//////////
	
	char	a = 't';
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

//USER TYPE//////////

	// SpecialType<char> a('t');
	// SpecialType<char> b('f');

	// SpecialType<int> a(21);
	// SpecialType<int> b(42);

	// SpecialType<float> a(21.21f);
	// SpecialType<float> b(42.42f);

	// SpecialType<double> a(21.21);
	// SpecialType<double> b(42.42);

	// SpecialType<std::string> a("chaine1");
	// SpecialType<std::string> b("chaine2");

	// std::string			tmp1 = "chaine1";
	// std::string			tmp2 = "chaine2";
	// char				*aptr = const_cast<char *>(tmp1.c_str());
	// char				*bptr = const_cast<char *>(tmp2.c_str());
	// SpecialType<char *>	a(aptr);
	// SpecialType<char *>	b(bptr);

	std::cout << F_R_GRN << "initial: a = " << F_R_PRPL << a << F_R_GRN << ", b = " << F_R_PRPL << b << RESET << std::endl;
	::swap(a, b);
	std::cout << F_R_GRN << "swap: a = " << F_R_PRPL << a << F_R_GRN << ", b = " << F_R_PRPL << b << RESET << std::endl;
	std::cout << F_R_GRN << "min( a, b ) = " << F_R_PRPL << ::min(a, b) << RESET << std::endl;
	std::cout << F_R_GRN << "max( a, b ) = " << F_R_PRPL << ::max(a, b) << RESET << std::endl;
}