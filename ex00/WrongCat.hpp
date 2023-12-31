/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:51:54 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 22:51:54 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private :

    public :

    WrongCat();
    WrongCat(const WrongCat &objet);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &objet);
    void    makeSound(void) const;
};

#endif