
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include "MyException.hpp"

# define RESET "\033[0m"

# define F_R_BLCK "\033[0;30m"
# define F_R_RED "\033[0;31m"
# define F_R_GRN "\033[0;32m"
# define F_R_YLLW "\033[0;33m"
# define F_R_BLU "\033[0;34m"
# define F_R_PRPL "\033[0;35m"
# define F_R_CYAN "\033[0;36m"
# define F_R_WHT "\033[0;37m"

template <class T>
class Array
{
	private:
		unsigned int	m_len;
		T				*m_arr;
	public:
		Array(void);

		Array(unsigned int n);
		
		Array(const Array & other);

		~Array(void);

		Array operator=(const Array & other);

		T &operator[](unsigned int indx);

		unsigned int	getSize(void) const;
};

#endif