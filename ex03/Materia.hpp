/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:10:36 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 16:32:31 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include "ICharacter.hpp"

class   ICharacter;

class AMateria
{
    protected :
    
    std::string _type;
    
    public :
    AMateria();
    AMateria(const AMateria &objs);
    AMateria(std::string const &type);
    AMateria &operator=(const AMateria &objs);
    virtual ~AMateria() = 0;
    virtual AMateria* clone() const = 0; // 
    virtual void use(ICharacter& target) = 0; // voir d'ou viens le Icharacter
    std::string const &getType()const;
};

#endif