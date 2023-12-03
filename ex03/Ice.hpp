/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:43:49 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 10:43:49 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Materia.hpp"

class Ice : public AMateria
{
    private:

    public:
    
    Ice();
    ~Ice();

    virtual AMateria *clone ()const;
    void    use(ICharacter &target);
};


#endif