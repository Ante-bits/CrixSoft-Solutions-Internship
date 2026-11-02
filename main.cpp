#include <iostream>
using namespace std;

void drawSquare(int size, char character){
    for(int row = 0; row < size ; row++){
        for(int col = 0;col < size; col++){
            cout << character << " ";
        }
        cout << endl;
    }
}

void drawRectangle(int width , int height , char character){
    for(int row = 0 ; row < height ; row++){
        for( int col = 0; col < width ; col++){
            cout << character << " ";
        }
        cout << endl;
    }
}

void drawTriangle(int height , char character){
    for(int row = 1; row <= height; row++){
        for(int col = 1; col <= height; col++){
            cout << character << " ";
        }
        cout << endl;
    }
}

int main(){
    int choice;

    do{
        cout << "\n============================\n";
        cout << "   CRIXSOFT INTERNSHIP DRAWING PROGRAM\n";
        cout << "============================\n";
        cout << "1. Draw Square\n";
        cout << "2. Draw Rectangle\n";
        cout << "3. Draw Triangle\n";
        cout << "4. Exit\n";
        cout << "============================\n";

        cout << "Enter your choice: ";

        cin >> choice;

        int width , height , size;
        char character;

        switch(choice){

            case 1:
                cout << "Enter square size: ";
                cin >> size;

                cout <<"Enter the drawing character: ";
                cin >> character;

                drawSquare(size , character);
                break;

            case 2:
                cout << "Enter rectangle width: ";
                cin >> width;

                cout << "Enter rectangle height: ";
                cin >> height;

                cout <<" Enter drawing character: ";
                cin >> character;

                drawRectangle(width , height , character);
                break;
            case 3:
                cout << "Enter triangle height: ";
                cin >> height;

                cout <<"Enter the drawing character: ";
                cin >> character;

                drawTriangle(height , character);
                break;
            case 4:
                cout << " Thank you for using our  Drawing Program! \n";
                break;
            default:
                cout << "Invalid choice. Can you please try again? \n";
        }
    }while(choice!=4);

    return 0;
}
