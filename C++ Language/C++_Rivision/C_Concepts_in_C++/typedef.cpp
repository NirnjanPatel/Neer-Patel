// Concept of typedefs
#include <iostream>
 int main(){
	typedef int name;
    // using typedef we can change our data type name as we want 
	name i = 5, j = 8;
	std::cout << "i = " << i << std::endl;
	std::cout << "j = " << j << std::endl;
	return 0;
}