#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	m_arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	m_arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array & other)
{
	*this = other;
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] m_arr;
}

template <typename T>
Array<T> & Array<T>::operator= (const Array & other)
{
	if (this == &other)
		return (*this);
	int	i = 0;
	while (i < other.)
	{

	}
}