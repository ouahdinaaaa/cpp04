/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:18:47 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/02 16:47:31 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class   Animal
{
    protected :
    std::string type;

    public :
    
    Animal();
    Animal(const Animal &_animal);
    Animal(std::string name);
    virtual ~Animal() = 0;
    Animal  &operator=(const Animal &_animal);
    std::string getType()const;
    virtual void    makeSound()const = 0;
};


#endif