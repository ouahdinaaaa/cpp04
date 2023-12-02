/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:09:54 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/01 12:09:19 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class Brain
{
    private:
    std::string ideas[100];
    
    public:
    
    Brain();
    Brain(const Brain &object);
    Brain(std::string name);
    Brain &operator=(const Brain &object);
    ~Brain();
    void    AddIdeas(int index, std::string ideaaa);
    std::string getIdea(int index) const;
};


#endif