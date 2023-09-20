/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:43:17 by kyacini           #+#    #+#             */
/*   Updated: 2023/09/20 22:31:36 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int i(1);
    std::string finally;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[i])
    {
        for(int c(0); argv[i][c]; c++)
        {
            argv[i][c] = std::toupper(argv[i][c]);
        }
        finally += argv[i];
        i++;
    }
    std::cout << finally << std::endl;
    return 0;
}