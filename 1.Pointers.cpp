string cat = "Panther";  // A cat variable of type string
string* ptr = &cat;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << cat << "\n";

// Output the memory address of food (0x6dfed4)
cout << &cat << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

/** Ways to make a pointer */

string* mystring; 
string *mystring; // Preferred
string * mystring;
