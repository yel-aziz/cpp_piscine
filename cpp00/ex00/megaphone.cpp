/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:36:39 by yel-aziz          #+#    #+#             */
/*   Updated: 2022/07/20 12:19:54 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using namespace std;

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;

	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl ;
	
	
	while (av[j])
	{
		i = 0;
		for (int i = 0; av[j][i]; i++)
		{
			cout << (char)toupper(av[j][i]);
			
		}
		if(av[j + 1] != NULL && !strcmp(av[j + 1], " "))
		cout << ' ';
		j++;
		
	}
	cout << "\n";
	
}