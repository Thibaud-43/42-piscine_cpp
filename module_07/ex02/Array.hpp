#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include <string>


template<typename T>
class Array
{
	private:
		T				*m_array;
		unsigned int	m_len;
	public:
		Array()
		{
			m_array = NULL; m_len = 0;
		};
		Array(unsigned int n)
		{
			m_array = new T[n];
			m_len = n;
		};
		Array(Array const & src)
		{
			m_array = new T[src.m_len];
			for (unsigned int i = 0; i < src.m_len; i++)
				m_array[i] = src.m_array[i];
			m_len = src.m_len;
		};
		virtual ~Array()
		{
			delete [] m_array;
		};

		Array	&	operator=(Array const & rhs)
		{
			if (&rhs == this)
				return *this;
			if (m_array)
				delete [] m_array;
			m_array = new T[rhs.m_len];
			for (unsigned int i = 0; i < rhs.m_len; i++)
				m_array[i] = rhs.m_array[i];
			m_len = rhs.m_len;
			return *this;
		};
		T & operator[](int index)
		{
			if (index >= static_cast<int>(m_len) || index < 0) 
			{
				throw OutOfRange();
			}
			return m_array[index];
		};
		T operator[](int index) const
		{
			if (index >= static_cast<int>(m_len) || index < 0) 
			{
				throw OutOfRange();
			}
			return m_array[index];
		}
		int size(void) const
		{
			return (m_len);
		};
		class OutOfRange : public std::exception
		{
			public:
				OutOfRange(void){return ;};
				virtual ~OutOfRange(void) throw(){return ;};
				virtual const char    *what() const throw(){return("Index out of range !");};
		};
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &arr)
{
	o << "{";
	for (int i = 0; i < arr.size(); i++)
	{
		o << arr[i];
		if (i < arr.size() - 1)
			o << ", ";
	}
	o << "}";
	return o;
}

#endif
