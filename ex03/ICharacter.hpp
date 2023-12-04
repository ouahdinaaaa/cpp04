/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:17:32 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 17:37:16 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP


# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include "Materia.hpp"

class AMateria;

class ICharacter
{
    private :
    std::string name;

    public:
    ICharacter(){};
    virtual ~ICharacter(){};
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif