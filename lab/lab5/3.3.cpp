#include <iostream>
#include <cstring>
using namespace std;

class String {
	private:
    	char *str;

	public:
    	String(){
			str="hello";
		}


    	String(const char *s) {
        	str = new char[strlen(s) + 1];
        	strcpy(str, s);
    	}

	    String(const String &other) {
	        str = new char[strlen(other.str) + 1];
	        strcpy(str, other.str);
	    }

	    ~String() {
	        delete[] str;
	    }

	    void display() const {
	        cout << str << endl;

	    }


	    void changeCase() {
	        if (str) {
	            for (int i = 0; str[i] != '\0'; i++) {
	                if (islower(str[i])) {
	                    str[i] = toupper(str[i]);
	                } else if (isupper(str[i])) {
	                    str[i] = tolower(str[i]);
	                }
	            }
	        }
	    }

	    void reverse() {
	        if (str) {
	            int len = strlen(str);
	            for (int i = 0; i < len / 2; i++) {
	                swap(str[i], str[len - i - 1]);
	            }
	        }
	    }
};

int main() {

    String str1;
    str1.display();


    String str2("Hello World!");
    str2.display();


    String str3(str2);
    str3.display();


    str2.changeCase();
    str2.display();


    str2.reverse();
    str2.display();

}

