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


int borrow_book(char(*book_name)[100], char(*book_writer)[100], char(*book_publisher)[100], int *borrow, int *book_length)
{
    int user_borrow = 0;

    search_book(book_name, book_writer, book_publisher, borrow, book_length);

    printf("\nIf you want to borrow a book, please enter the 'NO.' number of the book. : ");
    
    scanf_s("%d", &user_borrow);
    

    if (borrow[user_borrow] == 1)
    {
        printf("Sorry. The book is already borrowed.\n");
        printf("\nIf you want to borrow other books, Please enter '1'\nif not, please enter '2' : ");
        scanf_s("%d", &user_borrow);

        if (user_borrow == 1) borrow_book(book_name, book_writer, book_publisher, borrow, book_length);
        else if (user_borrow == 2) return 0;
    }
    else
    {
        borrow[user_borrow] = 1;
        printf("The book is borrowed now. Thank you!\n");
        return 0;
    }

    return 0;

}

void checkStatus(stuID){
    //checking book struct for stuID
    if(student->id->books == NULL){
        print("You have not borrowed any books")
    }
    else{
        for()
    }
}
