#include<iostream>
using namespace std;

class String
{
	public:
	char *str = NULL;
	int len;
	
    void length(const char *str)
    {
        int i = 0;
        while (str[i] != '\0')
        {
            len++;
            i++;
        }
    }
	 
			String(const char * string)
            {
				len = 0;
				length(string);
				str = new char[len];
				for(int i=0;i<len;i++)
					str[i] = string[i];
			}

			bool equate(String str_2)
			{
			    if(len != str_2.len)
                    return false;
			    for(int i = 0; i < len; i++)
			    if (str[i] != str_2.str[i])
                    return false;
                return true;
			}

			void display()
			{
				int i=0;
				while(str[i] != '\0')
				cout << str[i++];
				cout << endl;
			}

			void add(String &str_2)
			{
			    char *newstr = new char[len + str_2.len - 1];
			    int i=0;
			    for(i=0; i < len-1; i++)
			    newstr[i] = str[i];
			    for(int j = i; j < i + str_2.len; j++)
			        newstr[j] = str_2.str[j-i];
			    delete []str;
			    str = newstr;
			}
			
};

int main()
{
	String str_1 = "Ashok";
	String str_2 = "Kalwa";
	if(str_1.equate(str_2))
        cout << "both are same" << endl;
	else
	    cout << "both are not same" << endl;
    str_1.add(str_2);
	str_1.display();
	return 0;
}