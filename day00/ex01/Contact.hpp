/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:24:00 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/18 21:25:23 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact {
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_adress;
	std::string email_adress;
	std::string phone_number;
	std::string bithday_date;
	std::string favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
public:
	Contact(void);
	~Contact(void);

	void	print(void);
	void	createContact(void);
};

#endif
