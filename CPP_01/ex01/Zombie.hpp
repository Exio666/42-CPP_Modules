/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:03:38 by bsavinel          #+#    #+#             */
/*   Updated: 2022/03/11 19:05:49 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce( void );
		void	set_name(std::string name);

	private:
		std::string name_zombie;
};

Zombie* zombieHorde(int N, std::string name);

#endif