
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

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
		T	*m_arr;
	public:
		Array(void);

		Array(unsigned int n);
		
		Array(const Array & other);

		~Array(void);

		Array & operator= (const Array & other);

		bool	operator== (Array const & other) const
		{
			return (this->m_n == other.m_n);
		}

		bool	operator!= (Array const & other) const
		{
			return (this->m_n != other.m_n);
		}

		bool	operator> (Array const & other) const
		{
			return (this->m_n > other.m_n);
		}

		bool	operator< (Array const & other) const
		{
			return (this->m_n < other.m_n);
		}

		bool	operator>= (Array const & other) const
		{
			return (this->m_n >= other.m_n);
		}

		bool	operator<= (Array const & other) const
		{
			return (this->m_n <= other.m_n);
		}

		// template <typename T>
		T getVal(void) const
		{
			return (m_n);
		}
};

//[<<] operator overload
template <typename T>
std::ostream& operator<< ( std::ostream& out, const Array<T> & st )
{
	out << st.getVal();
	return (out);
}

template <typename T>
void	printItem( const T & val )
{
	std::cout << F_R_PRPL << val << RESET << std::endl;
}

template <typename T>
void	iter(T *arr, int len, void (*fptr)( const T & ))
{
	int	i = 0;
	while (i < len)
	{
		fptr(arr[i]);
		i++;
	}
}

#endif