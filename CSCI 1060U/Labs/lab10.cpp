//Reches P. 22/11/2023
#include <iostream>
#include <string>

using namespace std;

/**
 * TODO: Create the Animal structure
 * It represents an animal with its name, age, species, and a pointer to the next animal in a linked list.
 */

struct Animal{
    string name;
    int age;
    string species;
    Animal* nextAn;
};

//TODO: Create an animal pointer called head and initialize it to nullptr

Animal* head = nullptr;

/*
TODO: Uncomment the function declarations below as you complete them
in order from top to bottom
*/
void addAnimal();
void displayList();
void findOldestAnimal();
void processAnimalData();
void searchAnimal();
Animal* searchAnimalRecursive(Animal* current, const string& name);
void deleteList();
void deleteListRecursive(Animal* current);
void deleteAnimal();
void deleteAnimalRecursive(Animal* previous, Animal* current, const string& name);




/*
This function prompts the user for a name, age, and species, and adds a
new animal to the linked list.

If the linked list is empty, then this new animal is the 'head' of the 
list. Otherwise, it iterates through the list until it reaches the end,
then adds the new node.
*/
void addAnimal() {
    string name;
    int age;
    string species;
    cout << "Enter the name of the animal: ";
    cin >> name;
    cout << "Enter the age of the animal: ";
    cin >> age;
    cout << "Enter the species of the animal: ";
    cin >> species;

    //TODO: Create a new animal with the collected details
    //TODO: Set the new animal's next pointer to be a null pointer
    //TODO: if the list is empty, make this the head
    
    Animal* myAnimal = new Animal;
    myAnimal->name = name;
    myAnimal->age = age;
    myAnimal->species = species;
    myAnimal->nextAn = nullptr;
    if (head == nullptr){
        head = myAnimal;
    }
    
    
    /*TODO: if the list isn't empty, iterate through the list until 
    you reach the last node, then add the new node to the end*/
    else{
        Animal* current;
        current = head;
        while(current->nextAn != nullptr){
            current = current->nextAn;
        }
        current->nextAn = myAnimal;
    }
    
    cout << "Animal added successfully." << endl;
}

/*
This function will display all animals in the list.
If the list is empty, it prints out an error message, 
otherwise it prints out each node's information.
*/
void displayList() {
    //TODO: Complete this function!
    
    if (head == nullptr){
        cout << "Please add some animals to use this function" << endl;
        return;
    }
    
    Animal* current;
    current = head;
    while(current != nullptr){
        cout << "Name: " << current->name << ", Age: " << current->age << ", Species: " << current->species << endl;
        current = current->nextAn;
    }
}

/*
This function deletes an animal from the list (identified by name).
If the list is empty it reports an error, otherwise it checks to see 
if the head is supposed to be deleted. Otherwise, it calls deleteAnimalRecursive.

To delete a node from the linked list, you must take the following steps:
1) Get a pointer that temporarily points to the node to be deleted
2) Shift the previous node's 'next' attribute to the node after the one to be deleted.
For example, if you were deleting 'Bessy' from the list of Ali -> Bessy -> Chan, you 
need to move the Ali node's next attribute so it points to Chan (Ali -> Chan).
3) Delete the temporary pointer and report a successful delete
*/
void deleteAnimal() {
    //TODO: Handle the empty list
    
    if (head == nullptr){
        cout << "Please add some animals to use this function" << endl;
        return;
    }
    
    string name;
    cout << "Enter the name of the animal to delete: ";
    cin >> name;

    //TODO: If the head node is the one to be deleted,
    //delete it using the steps listed above and return

    if (head->name == name){
        Animal* temp;
        temp = head;
        head = temp->nextAn;
        delete temp;
        cout << name << " has been successfuly deleted" << endl;
        return;
    }
    
    //TODO: Call deleteAnimalRecursive
    deleteAnimalRecursive(head, head->nextAn, name);
}

/*
This recursive function searches for a named animal from the list to delete.
Each time deleteAnimalRecursive is called, there are 3 possibilities:
1) You have reached the end of the list, in which case the animal was not found;
report this message to the user.
2) The current node is the one to be deleted, so delete it using the 
same 3 step process for deleting a node that was used in deleteAnimal, 
and report that the animal was deleted successfully.
3) Move to the node after the current one.
*/
void deleteAnimalRecursive(Animal* previous, Animal* current, const string& name) {
    //TODO: Complete this function!
    
    if(current == nullptr){ 
        cout << name << " never extisted in the list" << endl;
        return;
    }
    if (current->name == name){
        previous->nextAn = current->nextAn;
        Animal* temp;
        temp = current;
        current = temp->nextAn;
        delete temp;
        cout << name << " has been successfuly deleted" << endl;
        return;
    }
    deleteAnimalRecursive(current, current->nextAn, name);
}



/*
This function deletes all animals from the list. If the list is already empty,
it prints an error message.
Otherwise, it calls deleteListRecursive starting with the head node, then assigns the 
'head' variable to a null pointer and reports that it has deleted the list.
*/

void deleteList() {
    //TODO: Complete this function!
    if (head == nullptr){
        cout << "The list is already empty. My job here is done!" << endl;
        return;
    }
    deleteListRecursive(head);
    head = nullptr;
    cout << "List deleted successfully" << endl;
}

/*
This recursive function first checks to see if the current node exists
(if not, terminate).
If it does, it makes a recursive call to itself using the next node, 
then deletes the current one.
*/
void deleteListRecursive(Animal* current) {
    //TODO: Complete this function!
    if (current == nullptr) return;
    current = current->nextAn;
    deleteListRecursive(current);
    delete current;
}

/*
This function searches for an animal in the list to print its details.
If the list is empty, it reports this.
Otherwise, it asks the user for an animal's name, then searches
the list using searchAnimalRecursive.
If searchAnimalRecursive returns a null pointer, then it reports
the animal wasn't found. Otherwise, it uses the result of 
searchAnimalRecursive to print out the details.
*/
void searchAnimal() {
    //TODO: Handle the empty list
    
    if (head == nullptr){
        cout << "Please add some animals to use this function" << endl;
        return;
    }

    string name;
    cout << "Enter the name of the animal to search for: ";
    cin >> name;

    //TODO: Call searchAnimalRecursive and assign it to a pointer
    
    Animal* result;
    result = searchAnimalRecursive(head, name);
    
    //TODO: If the animal was found, print its details, otherwise
    //print an error
    if (result != nullptr){
        cout << "Name: " << result->name << ", Age: " << result->age << ", Species: " << result->species << endl;
    }
    else{
        cout << name << " was not found.";
    }
}

/*
This function searches the linked list recursively to find the named animal.
If the current node doesn't exist, it returns a null pointer. 
Otherwise if the name matches, it returns the current node.
Otherwise it makes a recursive call to itself using the next node.
*/
Animal* searchAnimalRecursive(Animal* current, const string& name) {
    //TODO: Complete this function!
    Animal* result;
    if (current == nullptr) return nullptr;
    if (current->name == name) return current;
    current = current->nextAn;
    result = searchAnimalRecursive(current, name);
    return result;
}

/*
This is a non-recursive function to collect aggregate data about the animals.
If the list is empty, it reports this and returns immediately. 
Otherwise, it uses a loop to iterate through each node, adding to the count
of animals and the total age of all animals.
It uses these numbers to output the total number of animals and their average
age.
*/
void processAnimalData() {
    //TODO: Handle the empty list
    if (head == nullptr){
        cout << "Please add some animals to use this function" << endl;
        return;
    }

    int totalAge = 0;
    int animalCount = 0;

    //TODO: Iterate through the list and add to the totalAge and
    //animalCount

    Animal* current;
    current = head;
    while(current != nullptr){
        totalAge += current->age;
        animalCount++;
        current = current->nextAn;
        
        
    }
    
    double averageAge = static_cast<double>(totalAge) / animalCount;

    cout << "Total animals: " << animalCount << endl;
    cout << "Average age: " << averageAge << endl;
}

/*
This non-recursive function searches for the oldest animal in the list
and provides its details. 
If the list is empty, it reports this and returns immediately.
Otherwise, it tracks the oldestAnimal as it iterates through the list
using a loop. 
Once it has been through the entire list, it reports the oldest animal.
*/
void findOldestAnimal() {
    //TODO: Handle the empty list
    if (head == nullptr){
        cout << "Please add some animals to use this function" << endl;
        return;
    }

    //TODO: Assume the initial oldest animal is the head node
    //TODO: Iterate through the other nodes, and update 
    //your variable[s] if you find an older animal

    Animal* oldest; 
    oldest = head;
    Animal* current;
    current = head;
    while(current->nextAn != nullptr){
        current = current->nextAn;
        if (current->age > oldest->age) oldest = current;
    }
    
    //TODO: Print out the oldest animal
    
    cout << oldest->name << " the " << oldest->species << " is the oldest at the age of " << oldest->age << endl;
}

int main() {
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Add an animal" << endl;
        cout << "2. Delete an animal" << endl;
        cout << "3. Display list of animals" << endl;
        cout << "4. Search for an animal" << endl;
        cout << "5. Process animal data" << endl;
        cout << "6. Find the oldest animal" << endl;
        cout << "7. Delete the entire list" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addAnimal();
                break;
            case 2:
                deleteAnimal();
                break;
            case 3:
                displayList();
                break;
            case 4:
                searchAnimal();
                break;
            case 5:
                processAnimalData();
                break;
            case 6:
                findOldestAnimal();
                break;
            case 7:
                deleteList();
                break;
            case 8:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 8);

    return 0;
}

