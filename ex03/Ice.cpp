/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:46:41 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 10:46:41 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{

}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria    *Ice::clone() const
{
    *this = new Ice;
    return (*this);
}