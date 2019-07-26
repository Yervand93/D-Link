
int my_strlen(const char* str)
{
	int tiv = 0;
	for(int i = 0; str[i];++i)
	{
		tiv++;
	}
	return tiv;
}

int my_string_to_int(const char* str)
{
	int tiv = 0;
	int *arr = new int[my_strlen(str)];
	for(int i = 0; str[i]; ++i)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			arr[i] = str[i] - '0';
			tiv*=10;
			tiv+=arr[i];
		}
	}
	delete[] arr;
	arr = nullptr;
	delete[] arr;
	return tiv;
}

double my_switch(char oper,double a,double b)
{
	double res;
	switch(oper)
	{
	case '+':
		res = a+b;
		break;
	case '-':
		res = a-b;
		break;
	case '*':
		res = a*b;
		break;
	case '/':
		res = a/b;
		break;
	}
	return res;
}

int all_argv_to_array(char* &arr,char* argv[],int &count)
{
    for(int i = 1; argv[i]; ++i)
    {
        for(int j = 0; argv[i][j]; j++)
        {
            if((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '+' || argv[i][j] == '-' || argv[i][j] == '*' || argv[i][j] == '/')
            {   
                arr[count] = argv[i][j];
                count++;
            }
            else
            {   
                throw "You write incorrect symbol";
                break;
            }
        }
    }
    return 0;
}

int array_to_other_arrays(char* &arr,char* &mas1,char* &mas2,int &count,char &oper)
{
    for(int i = 0; i < count; i++ )
    {
        if(arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
        {
            oper = arr[i]; 
            for(int h = 0; h < i; h++)
            {
                mas1[h] = arr[h];
            }
            for(int j = i+1; j < count;j++)
            {
                mas2[j-i-1] = arr[j];
            }
        }
    }
}
