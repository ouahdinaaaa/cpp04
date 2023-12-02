/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:34:33 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/02 17:36:24 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

AMateria::AMateria()
{
    
}

AMateria::~AMateria()
{
    
}

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

