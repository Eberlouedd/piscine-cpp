/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyacini <kyacini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:17:26 by kyacini           #+#    #+#             */
/*   Updated: 2023/10/07 01:24:13 by kyacini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string s1 = argv[2];
        std::string line;
        std::string newfile;
        std::string beforebuff;
        std::string afterbuff;
        std::fstream filename(argv[1], std::ios::in);
        if(filename.is_open())
        {
            while(std::getline(filename, line))
            {
                newfile += line;
                if(!filename.eof())
                    newfile += "\n";
            }
            line = newfile;
            while (line.find(s1) != std::string::npos)
            {
                line = line.substr(line.find(s1) + s1.length());
                beforebuff = newfile.substr(0, newfile.find(s1));
                afterbuff = newfile.substr(newfile.find(s1) + s1.length());
                newfile = beforebuff + argv[3] + afterbuff;  
            }
            filename.close();
            filename.open(argv[1], std::ios::out | std::ios::trunc);
            if (filename.is_open()) 
            {
                filename << newfile;
                filename.close();
            }
            else
                std::cerr << "Erreur lors de l'ecriture" << std::endl;
        }
        else
            std::cerr << "Erreur lors de l'ouverture du fichier" << std::endl;
    }
}