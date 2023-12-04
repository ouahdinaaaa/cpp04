/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:21:43 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/04 14:31:38 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
    std::string name;
    AMateria*    _materia[4];
        
    public:
    Character(const std::string &name);
    Character(const Character &objs);
    ~Character();

    Character &operator=(const Character &objs);
    std::string const &getName() const;
    void    equip(AMateria *m);
    void    unequip(int idx);
    void    use(int idx, ICharacter &target);
    
};

#endif