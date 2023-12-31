/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:34:33 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 16:23:30 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
    
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    
}

AMateria::AMateria(const AMateria &objs) : _type(objs._type)
{
    
}

AMateria &AMateria::operator=(const AMateria &objs)
{
    this->_type = objs._type;
    return (*this);
}


std::string const &AMateria::getType() const{
    return this->_type;
}