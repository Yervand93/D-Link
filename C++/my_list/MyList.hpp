#ifndef MyList_H
#define MyList_H

//You can create MyList<int(or what type you want)> object_name;
//Use methods push_front(your data) OR push_back(your data) for ad    ding your data in list.
//Use pop_front() OR pop_back() methods for deleting element in yo    ur list.
//Use empty() for know your element is empty or not.
//Use get_count() for know how much elements in your list.
//Use clear() for delete all elements in your list. If you not use     this method, it's all right, because it's calling in destructor a    nd finally your lists element are deleting.




template <class T>
struct Element
{
	T data;
	Element<T> *next;
};

template <class T>
class MyList 
{
private:
	Element<T> *begin;
	Element<T> *end;
	int count;
public:
	MyList();
	MyList(const MyList<T> &list);
	~MyList();
	void Print() const;	
	void push_front(T data);
	void push_back(T data);
	int get_count() const;
	bool empty() const;
	void clear();
	void pop_front();
	void pop_back();
	
};

template <typename T>
MyList<T>::MyList()
{
	begin = nullptr;
	end = nullptr;
	count = 0;
	Element<T> *next = nullptr;
}

template <typename T>
MyList<T>::MyList(const MyList<T> &list) : MyList()
{
	Element<T> *temp = list.begin;
	while (temp != nullptr)
	{
		push_back(temp->data);
		temp = temp->next;
	}
}

template <typename T>
MyList<T>::~MyList()
{
	clear();
}

template <typename T>
void MyList<T>::Print() const
{
	if (count != 0)
	{
		Element<T> *temp = begin;
		std::cout << "[ ";
		while (temp->next != nullptr)
		{
			std::cout << temp->data << ", ";
			temp = temp->next;
		}
		std::cout << temp->data << " ]" << std::endl;
			
	}
}

template <typename T>
void MyList<T>::push_back(T data)
{
	Element<T> *temp = new Element<T>;
	temp->next = nullptr;
	temp->data = data;
	if(end != nullptr)
	{
		end->next = temp;
	}
	if(count == 0)
	{
		begin = end= temp;
	}
	else
	{
		end = temp;
	}
	
	++count;
}
template <typename T>
void MyList<T>::push_front(T data)
{
	Element<T> *temp = new Element<T>;
	temp->next = begin;
	temp->data = data;
	if(count == 0)
	{
		begin = end = temp;
	}
	else
	{
		begin = temp;
	}
	++count;
}

template <typename T>
int MyList<T>::get_count() const
{
	return count;
}

template <typename T>
bool MyList<T>::empty() const
{
	return (count == 0);
}


template <typename T>
void MyList<T>::clear()
{
	Element<T> *temp = begin;
	Element<T> *todelete = nullptr;	
	for (int i = 0; i < get_count(); ++i)
	{
		todelete = temp;
		temp = temp->next;

		delete todelete;
		todelete = nullptr; 
	}
	todelete = nullptr;
	begin = nullptr;
	end = nullptr;
	count = 0;
}


template <typename T>
void MyList<T>::pop_front()
{
	if (begin != nullptr)
	{
		Element<T> *temp = begin;
		temp = nullptr;
		begin = begin->next;
		--count;
		delete temp;
	}
	else
	{
		std::cout << "Your list is empty!You can not delete item!" << std::endl;
	}
}

template <typename T>
void MyList<T>::pop_back()
{
	if (end != nullptr)
	{
		Element<T> *temp = begin;
		while(temp->next != nullptr)
		{
			temp = temp->next;
			if (temp->next == end)
			{
				temp->next = nullptr;
				end = temp;
				--count;
			}
		}
	}
	else
	{
		std::cout << "Your list is empty!You can not delete item!" << std::endl;
	}
}


#endif
