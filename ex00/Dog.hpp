/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:26:48 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 20:23:36 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
    private:
    
    public:   
    Dog();
    ~Dog();
    Dog(const Dog &dog);
    Dog &operator=(const Dog &dog);
    void    makeSound(void)const;
};

