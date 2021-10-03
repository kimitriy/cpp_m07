#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
	: m_len(0)
{
	// std::cout << "default constructor" << std::endl;
	m_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
	: m_len(n)
{
	// std::cout << "param constructor" << std::endl;
	m_arr = new T[m_len];
}

template <typename T>
Array<T>::Array(const Array & other)
	: m_len(other.getSize())
{
	// std::cout << "copy constructor" << std::endl;
	m_arr = new T[m_len];
	unsigned int	i = 0;
	while (i < m_len)
	{
		this->m_arr[i] = other.m_arr[i];
		i++;
	}
}

template <typename T>
Array<T>::~Array(void)
{
	// std::cout << "destructor" << std::endl;
	delete[] this->m_arr;
}

template <typename T>
Array<T> Array<T>::operator=(const Array & other)
{
	// std::cout << "operator=" << std::endl;
	if (this != &other)
	{
		this->m_len = other.getSize();
		delete[] this->m_arr;
		this->m_arr = NULL;
		this->m_arr = new T[this->getSize()];
		unsigned int	i = 0;
		while (i < this->getSize())
		{
			this->m_arr[i] = other.m_arr[i];
			i++;
		}
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int indx)
{
	// std::cout << "operator[]" << std::endl;
	if (indx < 0 || indx >= this->getSize())
		throw (MyException("Inappropriate index"));
	return (this->m_arr[indx]);
}

template <typename T>
unsigned int	Array<T>::getSize(void) const
{
	return (this->m_len);
}
