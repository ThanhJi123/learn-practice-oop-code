#include<bits/stdc++.h>

using namespace std;

int my_strlen(char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

char* my_strcpy(char* dest, const char* src) {
    char* original_dest = dest;
    while (*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0';
    return original_dest;
}

int my_strcmp(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        ++str1;
        ++str2;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}


main(){
	int length;
	char* test_str = "Xin chao!";
//	cout<<test_str;
	length=my_strlen(test_str);
	cout<<"do dai chuoi : "<<length<<endl;
	
	char dest[50];
    my_strcpy(dest, test_str);
    cout << "chuoi da sao chep : " << dest << endl;
    
    const char* str1 = "Hello";
    const char* str2 = "Hello";
    const char* str3 = "World";
    cout << "So sánh \"" << str1 << "\" và \"" << str2 << "\": " << my_strcmp(str1, str2) << endl;
    cout << "So sánh \"" << str1 << "\" và \"" << str3 << "\": " << my_strcmp(str1, str3) << endl;
	
}
