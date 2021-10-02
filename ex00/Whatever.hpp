
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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
class Awesome
{
	private:
		T	m_n;
	public:
		Awesome(T n) : m_n(n) {}

		bool	operator== (Awesome const & other) const
		{
			return (this->m_n == other.m_n);
		}

		bool	operator!= (Awesome const & other) const
		{
			return (this->m_n != other.m_n);
		}

		bool	operator> (Awesome const & other) const
		{
			return (this->m_n > other.m_n);
		}

		bool	operator< (Awesome const & other) const
		{
			return (this->m_n < other.m_n);
		}

		bool	operator>= (Awesome const & other) const
		{
			return (this->m_n >= other.m_n);
		}

		bool	operator<= (Awesome const & other) const
		{
			return (this->m_n <= other.m_n);
		}

		T getVal(void) const
		{
			return (m_n);
		}
};

//[<<] operator overload
template <typename T>
std::ostream& operator<< ( std::ostream& out, const Awesome<T> & st )
{
	out << st.getVal();
	return (out);
}

template <typename T>
void swap( T & val1, T & val2 )
{
	T tmp = val1;
	val1 = val2;
	val2 = tmp;
}

template <typename T>
const T & min( const T & val1, const T & val2 )
{
	return ( (val1 <= val2) ? val1 : val2 );
}

template <typename T>
const T & max( const T & val1, const T & val2 )
{
	return ( (val1 <= val2) ? val2 : val1 );
}

#endif