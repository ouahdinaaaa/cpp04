/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:02:56 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/03 11:02:56 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "Materia.hpp"


class   Cure : public AMateria
{
    Cure();
    ~Cure();
    AMateria *clone()const;
    void      use(ICharacter &target);

};

#endif