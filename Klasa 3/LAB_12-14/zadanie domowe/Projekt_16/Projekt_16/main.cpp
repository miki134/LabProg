#include<iostream>
#include<string>

struct Person
{
	std::string name;
	std::string surname;
};

struct Person_Node
{
	Person person;
	Person_Node *next;

};

//Person create_empty_person() //----------
//pass_data()
//Person_Node add_first() //---------------
//add_last() //--------------
//add_after_select() //-----------
//add_behind_select() //----------
//search_view_one() 
//search_view_edition()
//delete_first()
//delete_last()
//delete_selected_one()
//delete_selected_edition()
//view_all()










/*
void create_empty_person(Person *firstperson)
{
	firstperson->name = nullptr;
	firstperson->surname = nullptr;
}

Person_Node *add_first(Person_Node *first)
{
	//Person *firstperson_now;
	
	
	first_now->person = *firstperson_now;
	first_now->next = first;

	//create_empty_person(firstperson_now);

	//return first_now;
//}

//next_change()

Person create_empty()
{
	int empty;
	std::cout << "Ile struktur pustej listy chcesz wygenerowac?" << std::endl;
	std::cin >> empty;

	Person *list = new Person[empty];

	for (int i = 0; i < empty; i++)
	{
		list[i].name = nullptr;
		list[i].surname = nullptr;
	}

	
}
*/

Person_Node *find(Person_Node *start, Person_Node *temp)
{
	start = start->next;

	while(start->next != temp)
	{
		start = start->next;
	}

	return start;
}

Person_Node *create_empty(Person_Node *start)
{
	int select;
	std::cout << "Ile elementow ma zawierac pusta lista" << std::endl;
	std::cin >> select;

	start = new Person_Node;
	start->person = { nullptr, nullptr };
	Person_Node *temp = start;
	for (int i = 1; i < select; i++)
	{
		start->next = new Person_Node;
		start = start->next;
		start->person = { nullptr, nullptr };
	}
	start->next = temp;
	start = temp;
	
	return start;
}

Person_Node *add_first(Person_Node *start)
{
	Person_Node *temp = start;

	start = new Person_Node;
	start->person = { nullptr, nullptr };
	start->next = temp;

	 Person_Node *last = find(start, temp);
	 last->next = start;

	return start;
}

Person_Node *add_last(Person_Node *start)
{
	Person_Node *temp = start;

	Person_Node *temp1 = new Person_Node;

	start = find(start, start);

	temp1->next = temp;
	temp1->person = { nullptr,nullptr };

	start->next = temp1;

	start = temp;

	return start;
}

Person_Node *add_after_select(Person_Node *start, int count)
{
	Person_Node *temp = start;


	int select;
	std::cout << "Podaj numer elementu, po ktorym chcesz dodac element (ilosc elementow to "<< count << " ): " << std::endl;
	std::cin >> select;

	for (int i = 1; i < select; i++)
	{
		start = start->next;
	}

	Person_Node *temp1 = new Person_Node;
	temp1->person = { nullptr,nullptr };
	temp1->next = start->next;

	start->next = temp1;

	start = temp;

	return start;
}

Person_Node *add_behind_select(Person_Node *start, int count)
{
	Person_Node *temp = start;

	int select;
	std::cout << "Podaj numer elementu, przed ktorym chcesz dodac element (ilosc elementow to " << count << " ): " << std::endl;
	std::cin >> select;

	Person_Node *temp1 = new Person_Node;
	temp1->person = { nullptr,nullptr };

	if (select == 1)
	{
		start = find(start, start);
		start->next = temp1;
		temp1->next = temp;
		temp = temp1;
	}
	else
	{
		for (int i = 1; i < select - 1; i++)
		{
			start = start->next;
		}
		temp1->next = start->next;
		start->next = temp1;
	}
	start = temp;
	return start;
}

int main()
{
	int count = 0;
	Person_Node * start = nullptr;

	char run = 1;
	while (run != 0)
	{
		int choice;
		std::cout << "------------------------------------------------" <<std::endl;
		std::cout << "Lista jednokierunkowa." << std::endl;
		std::cout << "------------------------------------------------" << std::endl;
		std::cout << "Wybierz co chesz zrobiæ." << std::endl;
		std::cout << "1. Stworz pusta liste" << std::endl;
		std::cout << "2. Dodaj dane (imiona i nazwiska) dla utworzonej listy"<< std::endl;
		std::cout << "3. Dodaj element na poczatku listy" << std::endl;
		std::cout << "4. Dodaj element na koncu listy" << std::endl;
		std::cout << "5. Dodaj element za wybranym elemenetem" << std::endl;
		std::cout << "6. Dodaj element przed wybranym elemenetem" << std::endl;
		std::cout << "7. Wyswietl jeden element" << std::endl;
		std::cout << "8. Wyswietl wszystkie egzempalrze ustalonego elementu" << std::endl;
		std::cout << "9. Usun pierwszy element" << std::endl;
		std::cout << "10. Usun ostatni element" << std::endl;
		std::cout << "11. Usun wybrany element" << std::endl;
		std::cout << "12. Usun wszystkie wystapienia danego elementu" << std::endl;
		std::cout << "13. Wyswietl cala liste" << std::endl;
		std::cout << "------------------------------------------------" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1: //create_empty()
			start = create_empty(start);
			count++;
			break;
		case 2: //pass_data()
			break;
		case 3://add_first()
			start = add_first(start);
			count++;
			break;
		case 4: //add_last() 
			start = add_last(start);
			count++;
			break;
		case 5: //add_after_select()
			start = add_after_select(start, count);
			count++;
			break;
		case 6: // add_behind_select()
			start = add_behind_select(start, count);
			count++;
			break;
		case 7: //search_view_one() 
			break;
		case 8: //search_view_edition()
			break;
		case 9: //delete_first()
			break;
		case 10: //delete_last()
			break;
		case 11: //delete_selected_one()
			break;
		case 12: //delete_selected_edition()
			break;
		case 13: //view_all()
			break;

		default:
			break;
		}


		std::cout << count << std::endl;
	}
	
	/*
	Person_Node *start;
	Person_Node *first_now{ { nullptr,nullptr } ,{start} };
	start = first_now;
	*first_now { { nullptr, nullptr }, { start } };
	*/
	/*
	Person_Node *first;
	Person *firstperson;

	Person_Node *start = first;

	first->person = *firstperson;
	first->next = start;


	create_empty_person(firstperson);
	start = add_first(first);

	*/
	system("pause");
	return 0;
}