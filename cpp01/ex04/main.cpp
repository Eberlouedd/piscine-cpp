/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:17:26 by kyacini           #+#    #+#             */
/*   Updated: 2023/11/05 13:10:52 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
    std::string before;
    std::string after;
    std::string result;
    int i = 0;
    while(str.find(s1, i) != std::string::npos)
    {
        before = str.substr(0, str.find(s1, i));
        after =  str.substr(str.find(s1, i) + s1.length());
        i = str.find(s1, i) + s2.length();
        str = before + s2 + after;
    }
    return str;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string line;
        std::string newfile;
        std::fstream filename(argv[1], std::ios::in);
        std::fstream file_replace(std::strcat(argv[1], ".replace"), std::ios::out);

        if(filename.is_open())
        {
            while(std::getline(filename, line))
            {
                newfile += line;
                if(!filename.eof())
                    newfile += "\n";
            }
            newfile = ft_replace(newfile, s1, s2);
            filename.close();
            if (file_replace.is_open()) 
            {
                file_replace << newfile;
                file_replace.close();
            }
            else
                std::cerr << "Erreur lors de l'ecriture" << std::endl;
        }
        else
            std::cerr << "Erreur lors de l'ouverture du fichier" << std::endl;
    }
    else
        std::cout << "Wrong args" << std::endl;
    return 0;
}