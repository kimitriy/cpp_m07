#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
	: m_len(0)
{
	m_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
	: m_len(n)
{
	m_arr = new T[m_len];
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
	delete [] this->m_arr;
	this->m_len = other.m_len;
	this->m_arr = new T[this->m_len];
	unsigned int	i = 0;
	while (i < this->m_len)
	{
		this->m_arr[i] = other.m_arr[i];
		i++;
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[] (unsigned int indx) const
{
	if (indx >= this->m_len)
		throw (MyException("Inappropriate index"));
	return (m_arr[indx]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (m_len);
}