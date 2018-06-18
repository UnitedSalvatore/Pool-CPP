/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypikul <ypikul@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 18:44:41 by ypikul            #+#    #+#             */
/*   Updated: 2018/06/18 21:25:40 by ypikul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.hpp"

class Phonebook {
private:
	Contact contact[8];
	unsigned int contacts_count;
public:
	Phonebook(void);
	~Phonebook(void);

	void	print(void);
	void	addContact(void);
};

#endif
