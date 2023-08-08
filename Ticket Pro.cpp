//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//
// Name:        TicketPro

// Authors:     Nkandu Nonde
//              Silas Ndhovu B
//              Sunny Hambalo
//              Mapalo Daka
//              Taonga Mkokweza
//              Munali Mbeha
//              Chiyesu Mashimbwa
//              Gerald Mumba
//              Kuunda Simuchimba

// Created:     7/25/2023 12:55:19 AM

// Description: TicketPro is a versatile and user-friendly application designed to facilitate seamless ticket booking for a variety of entertainment and travel options.
//
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <ctime>
#include <conio.h>
using namespace std;

// Function prototypes
void login();
void registration();
void forgot();
void homepage();
void movieTicket();
void sportsTicket();
void busTicket();
void musicTicket();
void planeTicket();
void loading();
void payment();
void mtnmomo();
void airtelmoney();
void zamkwacha();
void card();
void receipt();

string fname,lname,email,rusername,rpassword,ticketype,ticketname,price,phoneno,paymentmethod;


int main()
{
    int choice;

    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t           Welcome to TicketPro           ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";

    cout << "\n\t\t\t\t\t\t\t|           1. LOGIN             |" << endl;
    cout << "\n\t\t\t\t\t\t\t|           2. REGISTER          |" << endl;
    cout << "\n\t\t\t\t\t\t\t|           3. FORGOT PASSWORD   |" << endl;
    cout << "\n\t\t\t\t\t\t\t|           4. EXIT              |" << endl;
    cout << "\n\n\n\n\t\t\t\t\t\t\t       Please enter your option :  ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        forgot();
        break;

    case 4:
        cout << "\n\n\n\n\t\t\t\t\t\t\t Thank you for visiting TicketPro! \n\n";
        break;

    default:
        loading();
        cout << "\n\n\n\n\t\t\t\t\t\t\t Invalid entry please try again! \n" << endl;
        main();
    }
    return 0;
}

void login()
{
    string username, password;
    loading();

    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t           Welcome to TicketPro           ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";

    cout << "\n\t\t\t\t\t\t\t Please enter your Username and Password :" << endl;
    
    cout << "\n\n\n\t\t\t\t\t\t\t USERNAME: ";
    cin >> username;
    
    cout << "\n\t\t\t\t\t\t\t PASSWORD: ";
   
    
      char ch;
       while ((ch = _getch()) != '\r') { // Read characters until Enter is pressed
        if (ch == '\b') { // If Backspace is pressed
            if (!password.empty()) {
                password.erase(password.size() - 1); // Remove the last character
                cout << "\b \b"; // Erase the last character on the screen
            }
        } else {
            password.push_back(ch); // Append the character to the password
            cout << '*'; // Display an asterisk
        }
    }
    
    
    ifstream file ("Database.txt");
    
    if (username==rusername && password == rpassword) {
    	
    	cout<<"\n\n\n\n\t\t\t\t\t\t\t ACCESS GRANTED!";
    	loading();
    	homepage();
	} else {
		cout<<"\n\t\t\t\t\t\t\t ACCESS DENIED!"<<endl<<"\n\t\t\t\t\t\t\t Incorrect Username or Password. Please try again";
		login();
	}
	
	file.close();
   
}

void registration()
{
    
    loading();
    
    
    char choice;
    

    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t           WELCOME TO TICKETPRO          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";
    
    cout << "\n\n\t\t\t\t\t\t\t Fill in the following details: ";
    
    
    cout << "\n\n\t\t\t\t\t\t\t Enter your First Name : ";
    cin>>fname;
    
    
    cout << "\n\t\t\t\t\t\t\t Enter your Last Name : ";
    cin>>lname;
    
    cout << "\n\t\t\t\t\t\t\t Enter your Email-Address  : ";
    cin>>email;
    
     
     cout << "\n\t\t\t\t\t\t\t Enter your Phone Number : ";
     cin>> phoneno;

    cout << "\n\t\t\t\t\t\t\t Enter your Username : ";
    cin>>rusername;
    
  	
    cout << "\n\t\t\t\t\t\t\t Enter the Password : ";
    
    char ch;
       while ((ch = _getch()) != '\r') { // Read characters until Enter is pressed
        if (ch == '\b') { // If Backspace is pressed
            if (!rpassword.empty()) {
                rpassword.erase(rpassword.size() - 1); // Remove the last character
                cout << "\b \b"; // Erase the last character on the screen
            }
        } else {
            rpassword.push_back(ch); // Append the character to the password
            cout << '*'; // Display an asterisk
        }
    } 
    
   

    ofstream file("Database.txt", ios::app);
    {
    	file << fname << "\t\t" << lname << "\t\t" << phoneno << "\t\t" << rusername << "\t\t" << rpassword;
    	file.close();
	} 
	
	loading();  
	
	cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t           WELCOME TO TICKETPRO!          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";
	
	cout << "\n\t\t\t\t\t\t\t YOU HAVE SUCCESSFULLY CREATED AN ACCOUNT!";
	
	cout << "\n\n\t\t\t\t\t\t\t press y to log in to your account: ";
	cin>>choice;
	
	switch (choice){
		
		case 'y':
			{
				
				login();
			}
			break;
			
		case 'Y':
			{
				
				login();
			}
		
		    break;
			
		default:
        cout << "\n\t\t\t\t\t\t\t Invalid option! Please try again!\n\n\n";	
	}
	
	

}

void forgot()
{
    int option;
    loading();
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t               TICKETPRO           ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";
    
    cout << "\n\t\t\t\t\t\t\t You forgot your password !\n";
    cout << "\n\t\t\t\t\t\t\t Press 1 to search for ID by user name" << endl;
    cout << "\n\t\t\t\t\t\t\t Press 2 to go to main menu " << endl;
    cout << "\n\n\n\t\t\t\t\t\t\t Enter your option : ";
    cin >> option;

    switch (option)
    {
    case 1:
    {
        int counttt = 0;
        string suserID, sID, spass;
        cout << "\n\t\t\t\t\t\t\t Enter username that you remember :";
        cin >> suserID;

        ifstream f2("records.txt");
        while (f2 >> sID >> spass)
        {
            if (sID == suserID)
            {
                int countt = 1;
            }
        }
        f2.close();

        int countt = 1;
        if (countt == 1)
        {
            cout << "\n\t\t\t\t\t\t\t Your account is found! \n";
            cout << "\n\t\t\t\t\t\t\t Your password is : " << spass;
            main();
        }
        else
        {
            cout << "\n\t\t\t\t\t\t\t Account not found: \n";
            main();
        }
    }
    break;

    case 2:
    {
        main();
    }
    break;

    default:
        cout << "\n\t\t\t\t\t\t\t Invalid option! please try again" << endl;
        forgot();
    }
}

void homepage()
{
    int choice3;

    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t                  HOMEPAGE           ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";
    cout << "\n\t\t\t\t\t\t\t What type of Ticket would you like to Book? \n\n";
    cout << "\n\t\t\t\t\t\t\t 1. Movie Ticket \n";
    cout << "\n\t\t\t\t\t\t\t 2. Sports Ticket \n";
    cout << "\n\t\t\t\t\t\t\t 3. Bus Ticket \n";
    cout << "\n\t\t\t\t\t\t\t 4. Music Concert Ticket \n";
    cout << "\n\t\t\t\t\t\t\t 5. Plane Ticket  \n\n";
    cout << "\n\t\t\t\t\t\t\t Enter your choice: ";
    cin >> choice3;
    loading();

    switch (choice3)
    {
    case 1:
    	ticketype = "Movie Ticket";
        movieTicket();
        break;

    case 2:
    	ticketype = "Sports Ticket";
        sportsTicket();
        break;

    case 3:
    	ticketype = "Bus Ticket";
        busTicket();
        break;

    case 4:
    	ticketype = "Music Concert Ticket";
        musicTicket();
        break;

    case 5:
    	ticketype = "Flight Ticket";
        planeTicket();
        break;

    default:
        cout << "\n\t\t\t\t\t\t\t Invalid option! Please try again!\n\n\n";
        homepage();
    }
}

void movieTicket()
{
    int movienum;
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t                TICKETPRO          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";

    cout << "\n\t\t\t\t\t\t\t Here's a list of movies available for booking:";
    cout << "\n\t\t\t\t\t\t\t          NAME                   PRICE";
    cout << "\n\t\t\t\t\t\t\t 1. Avengers Infinity War        K150";
    cout << "\n\t\t\t\t\t\t\t 2. Black Panther                K90";
    cout << "\n\t\t\t\t\t\t\t 3. Zed-Man                      K95";
    cout << "\n\t\t\t\t\t\t\t 4. Spiderman                    K100";
    cout << "\n\t\t\t\t\t\t\t 5. Iron-Man                     K120";
    cout << "\n\t\t\t\t\t\t\t 6. Extraction 2                 K130 \n";
    cout << "\n\t\t\t\t\t\t\t 7. RETURN TO HOME PAGE\n\n";
    cout << "\n\n\n\t\t\t\t\t\t\t Enter your choice: ";
    cin >> movienum;

    

    switch (movienum)
    {
    case 1:
    {
    	ticketname = "Avengers Infinity War";
    	price = "K150";
        cout << "\n\t\t\t\t\t\t\t You have chosen Avengers Infinity War.\n";
    }
    break;

    case 2:
    {
    	ticketname = "Black Panther";
    	price = "K90";
        cout << "\n\t\t\t\t\t\t\t You have chosen Black Panther.\n";
    }
    break;

    case 3:
    {
    	ticketname = "Zed Man";
    	price = "K95";
        cout << "\n\t\t\t\t\t\t\t You have chosen Zed-Man.\n";
    }
    break;

    case 4:
    {
    	ticketname = "Spiderman";
    	price = "K100";
        cout << "\n\t\t\t\t\t\t\t You have chosen Spider-Man.\n";
    }
    break;

    case 5:
    {
    	ticketname = "Iron-Man";
    	price = "K120";
        cout << "\n\t\t\t\t\t\t\t You have chosen Iron-Man.\n";
    }
    break;

    case 6:
    {
    	ticketname = "Extraction 2";
    	price = "K130";
        cout << "\n\t\t\t\t\t\t\t You have chosen Extraction 2.\n";
    }
    break;

    case 7:
    {
        homepage();
    }

    default:
    {
        cout << "\n\t\t\t\t\t\t\t INVALID OPTION! PLASE TRY AGAIN \n";
        loading();
        movieTicket();
    }
    break;
    }
    
    loading();
    payment();
}

void sportsTicket()
{
    int choice;
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t               TICKETPRO          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";

    cout << "\n\t\t\t\t\t\t\t Here's a list of football matches available for booking:";
    cout << "\n\t\t\t\t\t\t\t            NAME                        PRICE";
    cout << "\n\t\t\t\t\t\t\t 1. Chelsea vs Manchester United        K200";
    cout << "\n\t\t\t\t\t\t\t 2. Zambia vs South Afrca               K100";
    cout << "\n\t\t\t\t\t\t\t 3. Arsenal vs Manchester City          K50";
    cout << "\n\t\t\t\t\t\t\t 4. Barcelona vs Real Madrid            K250";
    cout << "\n\t\t\t\t\t\t\t 5. Argentina vs France                 K30";
    cout << "\n\t\t\t\t\t\t\t 6. CBU vs UNZA                         K70 \n";
    cout << "\n\t\t\t\t\t\t\t 7. RETURN TO HOME PAGE  \n";

    cout << "\n\n\n\t\t\t\t\t\t\t Enter your choice: ";
    cin >> choice;

    

    switch (choice)
    {
    case 1:
    {
    	ticketname = "Chelsea vs Manchester United";
    	price = "K200";
        cout << "\n\t\t\t\t\t\t\t You have chosen the match between \n";
        cout << "\n\t\t\t\t\t\t\t Chelsea vs Manchester United \n";
    }
    break;

    case 2:
    {
    	ticketname = "Zambia vs South Africa";
    	price = "K100";
        cout << "\n\t\t\t\t\t\t\t You have chosen the match between \n";
        cout << "\n\t\t\t\t\t\t\t Zambia vs South Africa \n";
    }
    break;

    case 3:
    {
    	ticketname = "Arsenal vs Manchester City";
    	price = "K50";
        cout << "\n\t\t\t\t\t\t\t You have chosen the match between \n";
        cout << "\n\t\t\t\t\t\t\t Arsenal vs Manchester City \n";
    }
    break;

    case 4:
    {
    	ticketname = "Barcelona vs Real Madrid";
    	price = "K250";
        cout << "\n\t\t\t\t\t\t\t You have chosen the match between \n";
        cout << "\n\t\t\t\t\t\t\t Barcelona vs Real Madrid \n";
    }
    break;

    case 5:
    {
    	ticketname = "Argentina vs France";
    	price = "K30";
        cout << "\n\t\t\t\t\t\t\t You have chosen the match between \n";
        cout << "\n\t\t\t\t\t\t\t Argentina vs France \n";
    }
    break;

    case 6:
    {
    	ticketname = "CBU vs UNZA";
    	price = "K70";
        cout << "\n\t\t\t\t\t\t\t You have chosen the match between \n";
        cout << "\n\t\t\t\t\t\t\t CBU vs UNZA \n";
    }
    break;

    case 7:
    {
        homepage();
    }
    break;

    default:
    {
        cout << "\n\t\t\t\t\t\t\t INVALID OPTION! PLEASE TRY AGAIN \n\n";
        loading();
        sportsTicket();
    }
    break;
    }
    
    loading();
    payment();
}

void busTicket()
{
    int choice;
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t                TICKETPRO          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";

    cout << "\n\t\t\t\t\t\t\t Here's a list of buses available for booking:\n";
    cout << "\n\t\t\t\t\t\t\t           NAME                   DISTANCE              PRICE";
    cout << "\n\t\t\t\t\t\t\t 1. Power Tools Bus           Kitwe - Lusaka            K300";
    cout << "\n\t\t\t\t\t\t\t 2. Likili Motorways          Ndola-Livingstone         K180";
    cout << "\n\t\t\t\t\t\t\t 3. Post Bus                  Chingola - Lusaka         K250";
    cout << "\n\t\t\t\t\t\t\t 4. UBZ                        Mufulira - Choma         K380";
    cout << "\n\t\t\t\t\t\t\t 5. Mazhandu                  Chipata - Chinsali        K400";
    cout << "\n\t\t\t\t\t\t\t 6. RETURN TO HOMEPAGE \n";
    cout << "\n\t\t\t\t\t\t\t Enter your choice: ";
    cin >> choice;

    

    switch (choice)
    {
    case 1:
    {
    	ticketname = "Power Tools Bus";
    	price = "K300";
        cout << "\n\t\t\t\t\t\t\t You have chosen to travel with: \n\n";
        cout << "\n\t\t\t\t\t\t\t Power Tools Bus   from   Kitwe - Lusaka \n";
    }
    break;

    case 2:
    {
    	ticketname = "Likili Motorways";
    	price = "K180";
        cout << "\n\t\t\t\t\t\t\t You have chosen to travel with: \n\n";
        cout << "\n\t\t\t\t\t\t\t Likili Motorways   from   Ndola-Livingstone \n";
    }
    break;

    case 3:
    {
    	ticketname = "Post Bus";
    	price = "K250";
        cout << "\n\t\t\t\t\t\t\t You have chosen to travel with: \n\n";
        cout << "\n\t\t\t\t\t\t\t Post Bus   from   Chingola - Lusaka \n";
    }
    break;

    case 4:
    {
    	ticketname = "UBZ";
    	price = "K380";
        cout << "\n\t\t\t\t\t\t\t You have chosen to travel with: \n\n";
        cout << "\n\t\t\t\t\t\t\t UBZ   from   Mufulira - Choma   \n";
    }
    break;

    case 5:
    {
    	ticketname = "Mazhandu";
    	price = "K400";
        cout << "\n\t\t\t\t\t\t\t You have chosen to travel with: \n\n";
        cout << "\n\t\t\t\t\t\t\t Mazhandu  from   Chipata - Chinsali   \n";
    }
    break;

    case 6:
    {
        homepage();
    }
    break;

    default:
    {
        cout << "\n\t\t\t\t\t\t\t INVALID OPTION! PLEASE TRY AGAIN \n";
        loading();
        busTicket();
    }
    break;
    }
    
    loading();
    payment();
}

void musicTicket()
{
    int choice;
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t                TICKETPRO          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";

    cout << "\n\t\t\t\t\t\t\t Here's a list of Music Concerts available for booking:";

    cout << "\n\t\t\t\t\t\t\t ARTIST NAME                LOCATION                      AMOUNT";
    cout << "\n\t\t\t\t\t\t\t 1. Yo Maps           Lusaka, Music Club                   K100";
    cout << "\n\t\t\t\t\t\t\t 2. Y Celeb             Kitwe, Club Ebony                  K50";
    cout << "\n\t\t\t\t\t\t\t 3. Chef 187              Kitwe, CBU                       K150";
    cout << "\n\t\t\t\t\t\t\t 4. Macky 2            Ndola, Social Club                  K80";

    cout << "\n\t\t\t\t\t\t\t Enter your choice: ";
    cin >> choice;

    switch (choice)
    {

    case 1:
    {
    	ticketname = "Yo Maps";
    	price = "K100";
        cout << "\n\t\t\t\t\t\t\t You have selected to watch Yo Maps at Music Club at K100 \n\n";
    }
    break;

    case 2:
    {
    	ticketname = "Y Celeb";
    	price = "K50";
        cout << "\n\t\t\t\t\t\t\t You have selected to watch Y Celeb at Club Ebony at K50 \n\n";
    }
    break;

    case 3:
    {
    	ticketname = "Chef 187";
    	price = "K150";
        cout << "\n\t\t\t\t\t\t\t You have selected to watch Chef 187 at The Copperbelt University at K150 \n\n";
    }
    break;

    case 4:
    {
    	ticketname = "Macky 2";
    	price = "K80";
        cout << "\n\t\t\t\t\t\t\t You have selected to watch Macky 2 at the Social Cub at K80 \n\n";
    }
    break;

    default:
    {
        cout << "\n\t\t\t\t\t\t\t INVALID OPTION! PLEASE TRY AGAIN \n";
        loading();
        musicTicket();
    }

    }
    loading();
    payment();
}

void planeTicket()
{
    int choice;
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t               TICKETPRO          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";
    cout << "\n\t\t\t\t\t\t\t Here's a list of Flights available for booking:";
    cout << "\n\t\t\t\t\t\t\t      FLIGHT           FROM  -  TO             PRICE";
    cout << "\n\t\t\t\t\t\t\t 1. Fly Emirates      Zambia - Dubai          K3,000";
    cout << "\n\t\t\t\t\t\t\t 2. Zambia Airways    Zambia - South Africa   K1,500";
    cout << "\n\t\t\t\t\t\t\t 3. Fly Rwanda        Zambia - Rwanda         K1,950";
    cout << "\n\n\n\t\t\t\t\t\t\t Enter your choice: ";
    cin >> choice;

    switch (choice)
    {

    case 1:
    {
    	ticketname = "Fly Emirates";
    	price = "K3,000";
        cout << "\n\t\t\t\t\t\t\t You have selected to Travel with: ";
        cout << "\n\t\t\t\t\t\t\t Fly Emirates from Zambia to Dubai at K3,000 ";
        
        
    }
    break;

    case 2:
    {
    	ticketname = "Zambia Airways";
    	price = "K1,500";
        cout << "\n\t\t\t\t\t\t\t You have selected to Travel with: ";
        cout << "\n\t\t\t\t\t\t\t Zambia Airways from Zambia to South Africa at K1,500 ";
        
        
    }
    break;

    case 3:
    {
    	ticketname = "Fly Rwanda";
    	price = "K1,950";
        cout << "\n\t\t\t\t\t\t\t You have selected to Travel with: ";
        cout << "\n\t\t\t\t\t\t\t Fly Rwanda from Zambia to Rwanda at K1,950";
        
        
    }
    break;

    default:
    {
        cout << "\n\t\t\t\t\t\t\t INVALID OPTION! PLEASE TRY AGAIN \n";
        loading();
        planeTicket();
    }
    
    

    }
    
    loading();
    payment();
}

void payment ()
{	
	int choice;
	
	cout << "\n\n\t\t\t\t\t\t\t___________________________________________ ";
    cout << "\n\n\n\t\t\t\t\t\t\t              TICKETPRO          ";
    cout << "\n\n\t\t\t\t\t\t\t___________________________________________\n\n\n";
    cout << "\n\t\t\t\t\t\t\t What Payment method would you like to proceed with the Transaction?";
    
    cout << "\n\n\t\t\t\t\t\t\t 1. MTN Mobile Money";
    cout << "\n\t\t\t\t\t\t\t 2. Airtel Money";
    cout << "\n\t\t\t\t\t\t\t 3. Zam Kwacha";
    cout << "\n\t\t\t\t\t\t\t 4. Credit Card";
    
    cout << "\n\n\t\t\t\t\t\t\t Enter choice: ";
    cin >> choice;
    
    loading();
    
    switch (choice)
    {
    	case 1:
    		
    		{
    			paymentmethod = "MTN Mobile Money";
	    		mtnmomo();
    		}
    		break;
    		
    	case 2:
    		
    		{
    			paymentmethod = "Airtel Money";
	    		airtelmoney();
    		}
    		break;	
    		
    	case 3:
    		
    		{
    			paymentmethod = "Zam Kwacha";
	    		zamkwacha();
    		}
    		break;
    		
    	case 4:
    		
    		{
    			paymentmethod = "Credit Card";
	    		card();
    		}
    		break;
			
		default:
				cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\tYou have chosen an Invalid option, please try again.";
				payment();	
	}
    
}

void mtnmomo ()

{
	
				string pin;
				cout<<"\n\t\t\t\t\t\t\t Welcome to MTN Mobile Money";
				cout<<"\n\\n\t\t\t\t\t\t\t Enter Your Pin to confirm MTN Mobile Money payment of " << price;
	    		cout<<"\n\n\t\t\t\t\t\t\t Enter Pin: ";
	    		char ch;
                while ((ch = _getch()) != '\r') { // Read characters until Enter is pressed
                if (ch == '\b') { // If Backspace is pressed
                 if (!pin.empty()) {
                pin.erase(pin.size() - 1); // Remove the last character
                cout << "\b \b"; // Erase the last character on the screen
            }
        } else {
            pin.push_back(ch); // Append the character to the password
            cout << '*'; // Display an asterisk
        }
    }
	    		
	    		loading();
	            receipt();
}

void airtelmoney ()

{
				string pin;
				cout<<"\n\t\t\t\t\t\t\t Welcome to Airtel Money";
				cout<<"\n\n\t\t\t\t\t\t\t Enter Your Pin to confirm Airtel Money payment of " << price;
	    		cout<<"\n\n\t\t\t\t\t\t\t Enter Pin: ";
	    		char ch;
                while ((ch = _getch()) != '\r') { // Read characters until Enter is pressed
                if (ch == '\b') { // If Backspace is pressed
                 if (!pin.empty()) {
                pin.erase(pin.size() - 1); // Remove the last character
                cout << "\b \b"; // Erase the last character on the screen
            }
        } else {
            pin.push_back(ch); // Append the character to the password
            cout << '*'; // Display an asterisk
        }
    }
	    		
	    		loading();
	            receipt();
}

void zamkwacha ()
{
				string pin;
				
				
				cout<<"\n\t\t\t\t\t\t\t Welcome to Zam Kwacha";
				cout<<"\n\n\t\t\t\t\t\t\t Enter Your Pin to confirm Zam Kwacha payment of " << price;
	    		cout<<"\n\n\t\t\t\t\t\t\t Enter Pin: ";
	    		char ch;
                while ((ch = _getch()) != '\r') { // Read characters until Enter is pressed
                if (ch == '\b') { // If Backspace is pressed
                 if (!pin.empty()) {
                pin.erase(pin.size() - 1); // Remove the last character
                cout << "\b \b"; // Erase the last character on the screen
            }
        } else {
            pin.push_back(ch); // Append the character to the password
            cout << '*'; // Display an asterisk
        }
    }
	    		
	    		loading();
	            receipt();
}

void card () 
{
				string pin;
				string cardno;
				
				cout<<"\n\t\t\t\t\t\t\t Welcome to E-banking services";
				cout<<"\n\t\t\t\t\t\t\t Enter Your Pin to confirm Card payment of " << price;
				cout<<"\n\t\t\t\t\t\t\t Enter your bank account card number: ";
				
					
				
	    		
				
				char ch;
                while ((ch = _getch()) != '\r') { // Read characters until Enter is pressed
                if (ch == '\b') { // If Backspace is pressed
                 if (cardno.empty()) {
                cardno.erase(cardno.size() - 1); // Remove the last character
                cout << "\b \b"; // Erase the last character on the screen
            }
        } else {
            cardno.push_back(ch); // Append the character to the password
            cout << '*'; // Display an asterisk
        }
    }
    
    
			
	    		
	    		
	    loading();
	    receipt();		
}



void receipt ()
{
					// Get the current time
				    time_t now = time(0);
				    tm* localTime = localtime(&now);
				
				    // Format time as HH:mm:ss
				    char timeStr[9];
				    strftime(timeStr, sizeof(timeStr), "%H:%M:%S", localTime);
				
				    // Format date as YYYY-MM-DD
				    char dateStr[11];
				    strftime(dateStr, sizeof(dateStr), "%Y-%m-%d", localTime);
				    
					char choice;
					
					cout << "\n\n\t\t\t\t\t\t\t                            ___________________________________________ ";
				    cout << "\n\n\n\t\t\t\t\t\t\t                                            TICKETPRO          ";
				    cout << "\n\n\t\t\t\t\t\t\t                            ___________________________________________\n\n\n";
	
				    cout << "\t\t\t\t\t\t\t         **************************************************************************************" << endl;
				    cout << "\t\t\t\t\t\t\t         ***********************************  TICKETPRO RECEIPT  ******************************" << endl;
				    cout << "\t\t\t\t\t\t\t         **************************************************************************************" << endl;
				    cout << "\t\t\t\t\t\t\t         **                                                                                  " << endl;
				    cout << "\t\t\t\t\t\t\t         **                                                                                  " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tName of Customer: " << fname << " " << lname << "                         " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tPhone Number: " << phoneno << "                                           " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tEmail Address: " << email << "                                           " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tTicket Type: " << ticketype <<"                                           " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tTicket Name: " << ticketname <<"                                          " << endl;
					cout << "\t\t\t\t\t\t\t         **" << "\tPrice: " << price << "                                                    " << endl; 
				    cout << "\t\t\t\t\t\t\t         **" << "\tTime: " << timeStr << "                                                   " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tDate: " << dateStr << "                                                   " << endl;
				    cout << "\t\t\t\t\t\t\t         **                                                                                  " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tPayment Method: " << paymentmethod <<"                                    " << endl;
				    cout << "\t\t\t\t\t\t\t         **" << "\tSTATUS: PAID" << "                                                        " << endl;
				    cout << "\t\t\t\t\t\t\t         **                                                                                  " << endl;
				    cout << "\t\t\t\t\t\t\t         **                                                                                  " << endl;
				    cout << "\t\t\t\t\t\t\t         **************************************************************************************" << endl;
				    cout << "\t\t\t\t\t\t\t         **************************************************************************************" << endl;
				    cout << "\t\t\t\t\t\t\t         **************************************************************************************" << endl;
				
				    cout << "\n\n\n\t\t\t\t\t\t\t\t\t\t THANK YOU FOR USING TICKETPRO!";
				    
				    cout<<"\n\n\t\t\t\t\t\t\t\t\t Press c to book another ticket";
				    cout<<"\n\n\t\t\t\t\t\t\t\t\t Press q to log out of your account";
				     cout<<"\n\n\t\t\t\t\t\t\t\t\t Enter your choice: ";
				    cin>>choice;
			    
					
					switch (choice) {
						
						case 'c':
							{
								loading();
								homepage();
							}
							break;
							
						case 'C':
							{
							    loading();
								homepage();	
							}
							break;
							
						case 'q':
							{
							    loading();
								main();	
							}
							break;
						
						case 'Q':
							{
							    loading();
								main();	
							}
							
							
							default:
							cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t You have chosen an Invalid option, please try again.";
					}
					
}

void loading()
{
    Sleep(1500);
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t PLEASE WAIT......";
    Sleep(2000);
    system("CLS");
}

