#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int exit = 1;

    print("---Welcome to the Student Library System---");

    //String variable for input
    char str[6];

    //Variable for switch case
    int result = 0;
    while(exit != 0){
        print("Enter 'Add' to add a book to the system");
        print("Enter 'Borrow' to borrow a book");
        print("Enter 'Return' to return a book");
        print("Enter 'Check' to check your borrowed books");
        print("Enter 'Exit' to exit the system");

        scanf("%s",str);

        tolower(str[0]);

        if(str[0] == 'a'){
            result = 1;
        }
        else if(str[0] == 'b'){
            result = 2;
        }
        else if(str[0] == 'r'){
            result = 3;
        }
        else if(str[0] == 'c'){
            result = 4;
        }
        else if(str[0] == 'e'){
            result = 5;
        }
        
        //varibales for options
        char strT[10];
        char strA[10];
        int bookID;
        int studID;

        switch(result){

            case 1:
                //Add book
                print("Please enter book title");
                scanf("%s", strT);
                print("Please enter author of book");
                scanf("%s", strA);
                print("Please enter book ID");
                scanf("%d", bookID);

                //call addBook(strT,strA,numID);

            case 2:
                //Borrow Book
                print("Please enter your ID");
                scanf("%d", studID);
                print("Please enter book ID");
                scanf("%d", bookID);

                //borrowBook(studID, bookID);

            case 3:
                //Return Book
                print("Please enter your ID");
                scanf("%d", studID);
                print("Please enter book ID");
                scanf("%d", bookID);

                //returnBook(studID, bookID);

            case 4:
                //Check Status
                print("Please enter your ID");
                scanf("%d", studID);

                //checkStatus(studID);

            case 5:
                print("Exiting");
                exit = 0;

        }
    }


    return 0;
}
