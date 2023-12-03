/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:10:36 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 12:19:06 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
#define MATERIA_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
#include "ICharacter.hpp"

class AMateria
{
    protected :
    
    std::string _type;
    AMateria    inventory[4];
    
    public :
    AMateria();
    virtual ~AMateria() = 0;
    AMateria(std::string const &type);
    virtual AMateria* clone() const = 0; // 
    virtual void use(ICharacter& target) = 0; // voir d'ou viens le Icharacter
    std::string const &getType()const;
};

#endif