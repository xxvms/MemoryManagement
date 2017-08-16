#include <iostream>
#include "Resource.h"
#include "Person.h"

int main() {
    {
        Resource local_Resource ("local");
        std::string local_String = local_Resource.Get_Name();
    }
    /*Resource* pResource = new Resource("created with new");
    std::string new_string = pResource->Get_Name();
    // premature ending - simulation that will create memory leak
    int j = 3;
    if (j==3)
    {
        return 0; // this will stop program without chance to call delete and freeing memory!!!!!
    }
    Resource* p2 = pResource;
    std::string string2 = p2->Get_Name();
    delete pResource;
   // std::string string3 = pResource->Get_Name(); // pResource has been deleted one line above so by doing this we are assigning random memory to string3
    pResource = nullptr;
    delete pResource; // this is fine we can delete this as is poiting to nullptr,
    delete p2; // p2 is poiting to the same memory as pResource so deleting 2 or more time same memory location is bad!!!
*/

     Person John("John", "Snow", 345);
    John.Add_Resource();
    John.Set_name("Miki");
    John.Add_Resource();
    // another bad think that can happen is
    Person John2 = John; // by doing this we are creating new person, constructor will copy, first name, last name, arbitrary number AND pRESOURCE!!!
    // however when 1st Person is deleted the 2nd person will try to DELETE again pRESOURCE!!! Solution to this is creating COPY CONSTRUCTOR!!!

    // Copy assignment this is done by overloaded operator
    John = John2; //this does bitcopy!!! so same story as above with double deleting pReference pointer! we are going now to Person.h to fix this ....


    return 0;
}