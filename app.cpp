#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void printHeader();
void gotoxy(int x, int y);
void user();
int admin();
void greeting();
int menu();
int main()
{
   printHeader(); 
   int a=menu();
   if(a==1)
   {
    user();
   }
   if(a==2)
   {
    admin();
   }
}
void printHeader()
{
    system("cls");
    int x=36,y=3;
    gotoxy(x,y++);
    cout<<"         ####### ####### ####### ####### ######## ###### #######  ######## #######";
    gotoxy(x,y++);
    cout<<"         ##      ##   ## ##      ##         ##    ##     ##   ###    ##    ##   ##";
    gotoxy(x,y++);
    cout<<"         ##      ####### ######  #######    ##    ###### ######      ##    #######";
    gotoxy(x,y++);
    cout<<"         ##      ##   ## ##      ##         ##    ##     ##   ##     ##    ##   ##";
    gotoxy(x,y++);
    cout<<"         ####### ##   ## ##      #######    ##    ###### ##    ## ######## ##   ##"; 
    y=y+1;
    gotoxy(x,y++);
    cout<<"##     ## ####### ###     ## ####### ######## ####### ##     ## ####### ###    ## ########";
    gotoxy(x,y++);
    cout<<"## ### ## ##   ## ## ##   ## ##   ## ##       ##      ## ### ## ##      ## ##  ##    ##";
    gotoxy(x,y++);
    cout<<"##  #  ## ####### ##   ## ## ####### ##  #### ####### ##  #  ## ####### ##  ## ##    ##";
    gotoxy(x,y++);
    cout<<"##     ## ##   ## ##     ### ##   ## ##    ## ##      ##     ## ##      ##    ###    ##";
    gotoxy(x,y++);
    cout<<"##     ## ##   ## ##      ## ##   ## ######## ####### ##     ## ####### ##     ##    ##";
    y=y+1;
    gotoxy(x,y++);
    cout<<"                  ######## ##    ## ######## ######## ####### ##     ##";
    gotoxy(x,y++);
    cout<<"                  ##        ##  ##  ##          ##    ##      ## ### ##";
    gotoxy(x,y++);
    cout<<"                  ########    ##    ########    ##    ####### ##  #  ##";
    gotoxy(x,y++);
    cout<<"                        ##    ##          ##    ##    ##      ##     ##";
    gotoxy(x,y++);
    cout<<"                  ########    ##    ########    ##    ####### ##     ##"<<endl<<endl<<endl;
}
int menu()
{   
    int selection;
    cout<<"Press 1 if you are a Customer..."<<endl;
    cout<<"Press 2 if you are an Administrator..."<<endl;
    cout<<"Your Selection (1 or 2): ";
    cin>>selection;
    cout<<"Press any key to continue to next page: ";
    char ch= getch();
    return selection;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void user()
{
    string food;
    system("cls");
    greeting();
    cout<<endl<<endl<<endl<<"What will you like to have today? Desi, Chinese or Continental: ";
    cin>>food;
    if(food=="Desi")
    {
        int priceBiryani = 300, priceNihari = 450, priceKarahi = 600, priceHaleem = 350, 
        priceSeekhKebabs = 400, priceSamosas = 100, priceParatha = 150, priceDaalMakhani = 250, priceRoti = 50;


        cout<<"biryani"<< ": "<<priceBiryani<< " PKR"<<endl;
        cout<<"nihari"<< ": "<<priceNihari<<" PKR"<<endl;
        cout<<"karahi"<< ": "<<priceKarahi<<" PKR"<<endl;
        cout<<"haleem"<< ": "<<priceHaleem<<" PKR"<<endl;
        cout<<"seekhKebabs"<< ": "<<priceSeekhKebabs<<" PKR"<<endl;
        cout<<"samosas"<< ": "<<priceSamosas<<" PKR"<<endl;
        cout<<"paratha"<< ": "<<priceParatha<<" PKR" << endl;
        cout<<"daalMakhani"<< ": "<<priceDaalMakhani<< " PKR" <<endl;
        cout<<"roti"<< ": "<<priceRoti<<" PKR"<<endl;
    }
    else if(food=="Continental")
    {
        int pricePasta = 400, pricePizza = 500, priceSteak = 1200, priceBurger = 300, 
        priceRisotto = 650, priceSalad = 250, priceLasagna = 700, priceFishAndChips = 550;

        cout<<"pasta"<< ": " << pricePasta<<" PKR"<<endl;
        cout<<"pizza"<< ": " <<pricePizza<<" PKR"<<endl;
        cout<<"steak"<< ": " <<priceSteak<<" PKR"<<endl;
        cout<<"burger"<< ": " <<priceBurger<<" PKR"<<endl;
        cout<<"risotto"<< ": " <<priceRisotto<<" PKR"<<endl;
        cout<<"salad"<< ": " <<priceSalad<<" PKR"<<endl;
        cout<<"lasagna"<< ": " <<priceLasagna<<" PKR"<<endl;
        cout<<"fishAndChips"<< ": "<< priceFishAndChips<<" PKR"<<endl;
    }
    else if(food=="Chinese")
    {
        int priceFriedRice = 250, priceChowMein = 300, priceDumplings = 200, 
        priceSpringRolls = 150, priceHotAndSourSoup = 200;


        cout<<"Fried Chicken"<< ": "<<priceFriedRice<<" PKR"<<endl;
        cout<<"Chowmein"<< ": "<<priceChowMein<<" PKR"<<endl;
        cout<<"Dumplings"<< ": "<<priceDumplings<<" PKR"<<endl;
        cout<<"Spring Rolls"<< ": "<<priceSpringRolls<<" PKR"<<endl;
        cout<<"Hot And Sour Soup"<< ": "<<priceHotAndSourSoup<<" PKR"<<endl;
        

    }

}
int admin()
{
    system("cls");
    cout<<endl;
    cout<<"This page will first ask for a username and password which will be already defined and known to the administrator."<<endl<<endl;
    cout<<"ADMIN CONTROLS SUCH AS ADDING ITEMS OR UPDATING ITEMS PRICE ON MENU, BASIC INFORMATION ABOUT CAFETERIA EMPLOYEES SUCH AS THEIR NAME, ROLE AND PAY.";
}
void greeting()
{
    int x=10, y=3;
    gotoxy(x,y++);
    cout<<"H   H EEEEE L     L      OOO     DDDD  EEEEE AAAAA RRRR     CCCC U    U SSSS TTTTT OOO  M   M EEEEE RRRR "<<endl;
    gotoxy(x,y++);
    cout<<"H   H E     L     L     O   O    D   D E     A   A R   R   C     U    U S      T  O   O MM MM E     R   R"<<endl;
    gotoxy(x,y++);
    cout<<"HHHHH EEEEE L     L     O   O    D   D EEEEE AAAAA RRRR    C     U    U  SSS   T  O   O M M M EEEEE RRRR"<<endl;
    gotoxy(x,y++);
    cout<<"H   H E     L     L     O   O    D   D E     A   A R   R   C     U    U     S  T  O   O M   M E     R   R"<<endl;
    gotoxy(x,y++);
    cout<<"H   H EEEEE LLLLL LLLLL  OOO     DDDD  EEEEE A   A R   R    CCCC  UUUU  SSSS   T   OOO  M   M EEEEE R   R"<<endl;
}

