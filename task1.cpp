#include <iostream> // для використання потокового вводу/виводу cin/cout

using namespace std; // щоб не писати std::cout, а просто std

int main()
{ 
    // Create a variable named "data", and assign to it the value 255 (you must choose the right data type)
    short data;
    data = 255; 

    // Create a variable named "payload", and assign to it the value 6.153 (you must choose the right data type).
    float payload;
    payload = 6.153;

    // Create a variable named "flag", and assign to it the value "true" (you must choose the right data type).
    bool flag = true;

    // Create a variable named "ch", and assign to it the value '#' (you must choose the right data type).
    char ch = '#';



    // 1.2 Print all variables in next format (help: use spaces):
    //      data value is : 255
    //      payload value is : 6.153
    //      flag value is : true
    //      ch value is : #
    // Note: you also need to use endl: try to type in main following code and run it:
    //      cout << "Something 1" << endl;
    //      cout << "Something 2" << endl;
    //      cout << "Something 3" << endl;
    // You will see:
    //  Something 1
    //  Something 2
    //  Something 1
    // endl makes new line (отступает на след строку). 

    cout << "data value is:" << data << endl;
    cout << "payload value is:" << payload << endl;

    cout << "flag value is: ";
    if(flag)
        cout << "true"  << endl;
    else
        cout << "false"  << endl;

    cout << "ch value is:" << ch << endl;
    
    // 2. Variable's acrobatics
    //      Create integer variable assigning to it any value, then — change it value to 10.
    int q = 12;
    q = 10;

    //      Operating with the previous variable — add 100 to its value and print it.
    q = q + 100;
    cout << "q=" << q << endl;
    
    //      Operating with the previous variable — subtract 20 from its value and print it.
    q = q - 20;
    cout << "q=" << q << endl;

    //      Operating with the previous variable — multiply by 3 the current value and print it.
    q = q * 3;
    cout << "q=" << q << endl;

    //      Operating with the previous variable — divide by 2 the current value and print it.
    q = q / 2;
    cout << "q=" << q << endl;
    
    // 3. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
    // float g = 0;
    // float h = 1;;
    // double q = 1,5426; wrong dec separator
    
    
    // 4. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
    // int value = 3;
    // value = value + 1;
    // cout << Value << endl; wrong variable name"Value"
    
    
    // 5. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
    // int userID = 0x12;
    // userID += 5; => usedID = useID + 5;
    // Cout << userID << Endl; wrong stream name "Cout"
    
    
    return 0;
}