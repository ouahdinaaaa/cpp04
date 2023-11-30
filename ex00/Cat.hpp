/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:35:03 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 22:26:04 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class   Cat : public Animal
{
    private :

    public :
    Cat();
    ~Cat();
    Cat(const Cat &miaou);
    Cat &operator=(const Cat &Miaou);
    void    makeSound(void)const;
};