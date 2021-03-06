/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:28:44 by bsavinel          #+#    #+#             */
/*   Updated: 2022/07/12 09:43:34 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

//! Main correction
/*class Awesome
{
	public:
		Awesome( void ) : _n( 42 )
		{
			return;
		}
		int get( void ) const
		{
			return this->_n;
		}
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print(T const & x)
{
	std::cout << x << std::endl;
	return;
}

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}*/


//! Main perso

template <typename H>
void ft_print(H &s)
{
    std::cout << s << std::endl;
}

void print_1(const int &a)
{
	std::cout << a << std::endl;
	return ;
}

int main()
{
	{
		int tab_int[8] = {0, 1, 2 ,3 ,4, 5, 6, 7};
		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;

		iter(tab_int, 8, &print_1);

		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_int[i] << " ";
		}
		std::cout << std::endl;
	}
	{
		double tab_double[8] = {0.25, 1.4, 2.2 ,3.6 ,4.4, 5.22, 6.56, 7.156};
		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_double[i] << " ";
		}
		std::cout << std::endl;

		iter(tab_double, 8, ft_print);

		for (int i = 0; i < 8; i++)
		{
			std::cout << tab_double[i] << " ";
		}
		std::cout << std::endl;
	}
}