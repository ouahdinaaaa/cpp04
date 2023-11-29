/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:18:47 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/29 20:24:09 by ayael-ou         ###   ########.fr       */
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
    ~Animal();
    // std::string getType();
    virtual void    makeSound()const;
};


#endif