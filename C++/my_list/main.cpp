#include <iostream>
#include "MyList.hpp"

//For createing object for class MyList write like this: MyList<int(or what type you want)> object_name;
//Use methods push_front(your data) OR push_back(your data) for adding your data in list.
//Use pop_front() OR pop_back() methods for deleting element in your list.
//Use empty() for know your element is empty or not.
//Use get_count() for know how much elements in your list.
//Use clear() for delete all elements in your list. If you not use this method, it's all right, because it's calling in destructor and finally your lists element are deleting.

int main()
{
	MyList<int> new_obj;


	
	new_obj.push_back(10);
	new_obj.push_back(56);
	new_obj.push_back(6);
	new_obj.push_front(123);
	new_obj.push_front(3);

//	new_obj.pop_front();
//	new_obj.pop_front();


	new_obj.Print();
	std::cout << "Count: " << new_obj.get_count() << std::endl;
	std::cout << "empty: " << std::boolalpha << new_obj.empty() << std::endl;
//	new_obj.clear();
	new_obj.pop_back();
	new_obj.Print();
	std::cout << "Count: " << new_obj.get_count() << std::endl;
	std::cout << "empty: " << std::boolalpha << new_obj.empty() << std::endl;
	MyList<int> norr(new_obj);
	norr.Print();	

	return 0;
}
