#include<iostream>
#include<cmath>

using namespace std;


int printMenu();
int addFunds(double &funds);
void startRide(double &spent , int &rides , double &totalMinutes, double &funds);
double surcharge(int startHour, double fare);
double studentDiscount(bool student, double fare);
int helmetPenalty(bool helmet, double fare);
int parkingPenalty(char parkingZone, double fare);
void rideStatistics();

int main(){
    double funds = 0;
    int rides=0;
    double moneySpent=0;
    double totalMinutes=0;

    cout << "==================================================" << endl;
    cout << "     Smart Campus Mobility & Parking Assistant    " << endl;
    cout << "==================================================" << endl;
    while (true){
        int userChoice = printMenu();
        switch(userChoice){
            case 1:
                cout << "==================================================" << endl;
                funds = addFunds(funds);
                cout << "==================================================" << endl;
                break;
            case 2:
                startRide (  moneySpent,  rides ,  totalMinutes ,funds);
                break;
            case 3:
                cout << "==================================================" << endl;
                cout << "Current amount in = " << funds << endl;
                cout << "==================================================" << endl;
            break;
            case 4:
                rideStatistics(totalMinutes,moneySpent,rides);
            case 5:
                break;
        }
    if (userChoice == 5){
        break;
    }
    }
    return 0;
}

int printMenu(){
    int choice;
    do{
        cout << "Select one of the following options: " << endl;
        cout << "1 - Add Funds" << endl;
        cout << "2 - Start a Ride" << endl;
        cout << "3 - View Wallet" << endl;
        cout << "4 - View Ride Statistics" << endl;
        cout << "5 - Exit" << endl;
        cout << "==================================================" << endl;
        cout << "Your choice: ";
        cin >> choice;
        if (choice < 1 || choice > 5){
            cout << "INVALID CHOICE - TRY AGAIN" << endl;
            cout << "==================================================" << endl;
        } 
    } while (choice < 1 || choice > 5);
    return choice;
}
int addFunds(double &funds){
    int addition;
    cout << "Current amount = " << funds << endl;
    cout << "==================================================" << endl;
    cout << "Enter the amount you would like to add: ";
    cin >> addition;
    while (addition < 0){
        cout << "INAVLID NUMBER - TRY AGAIN" << endl;
        cout << "==================================================" << endl;
        cout << "Enter the amount you would like to add: ";
        cin >> addition;
    }
    funds += addition;
    cout << "New amount = " << funds << endl;
    return funds;
}
void startRide( double &spent, int &rides , double &totalMinutes, double &funds){
    int rideChoice;
    cout << "Starting a ride...." << endl;
    cout << "Select your ride choice:" << endl;
    cout << "1 - Bicycle" << endl;
    cout << "2 - E-Scooter" << endl;
    cout << "3 - E-Bike" << endl;
    cout << "==================================================" << endl;
    cout << "Your choice: ";
    cin >> rideChoice;
    cout << "==================================================" << endl;
    while (rideChoice < 1 && rideChoice > 3){
        cout << "INVALID NUMBER - TRY AGAIN" << endl;
        cout << "==================================================" << endl;
        cout << "Your choice: ";
        cin >> rideChoice;
    }

    double minutes;
    cout << "==================================================" << endl;
    cout << "Enter minutes of ride: ";
    cin >> minutes;
    while (minutes < 0){
        cout << "INVALID NUMBER - TRY AGAIN" << endl;
        cout << "==================================================" << endl;
        cout << "Enter minutes of ride: ";
        cin >> minutes;
    }

    double rideCost;
    switch (rideChoice){
        case 1:
            rideCost = 50 + (ceil(minutes) * 4);
            break;
        case 2:
            rideCost = 80 + (ceil(minutes) * 7);
            break;
        default:
            rideCost = 100 + (ceil(minutes) * 9);
    }
    double baseCost=rideCost;

    int startHour;
    cout << "Enter start hour of ride (0-23): ";
    cin >> startHour;
    while (startHour < 0){
        cout << "INVALID NUMBER - TRY AGAIN" << endl;
        cout << "==================================================" << endl;
        cout << "Enter start hour of ride (0-23): ";
        cin >> startHour;
    }
    rideCost = surcharge(startHour, rideCost);

    char studentStatus;
    bool isStudent;
    cout << "Are you a student? (y/n): ";
    cin >> studentStatus;
    if (studentStatus = 'y'){
        isStudent = true;
    }
    else{
        isStudent = false;
    }
    while (studentStatus != 'y' && studentStatus != 'n'){
        cout << "INVALID CHOICE - TRY AGAIN" << endl;
        cout << "==================================================" << endl;
        cout << "Are you a student (y/n): ";
        cin >> studentStatus;
        if (studentStatus = 'y'){
            isStudent = true;
        }
        else{
            isStudent = false;
        }
    }
    rideCost = studentDiscount(isStudent, rideCost);

    char helmetStatus;
    bool isWearingHelmet;
    cout << "Are you wearing a helmet? (y/n): ";
    cin >> helmetStatus;
    if (helmetStatus = 'y'){
        isWearingHelmet = true;
    }
    else{
        isWearingHelmet = false;
    }
    while (helmetStatus != 'y' && helmetStatus != 'n'){
        cout << "INVALID CHOICE - TRY AGAIN" << endl;
        cout << "==================================================" << endl;
        cout << "Are you a student (y/n): ";
        cin >> helmetStatus;
        if (helmetStatus = 'y'){
            isWearingHelmet = true;
        }
        else{
            isWearingHelmet = false;
        }
    }
    rideCost = helmetPenalty(isWearingHelmet, rideCost);

    char parkingPosition;
    cout << "Enter your parking position (g/y/r): ";
    cin >> parkingPosition;
    while (parkingPosition != 'g' && parkingPosition != 'y' && parkingPosition != 'r'){
        cout << "INVALID CHOICE - TRY AGAIN" << endl;
        cout << "==================================================" << endl;
        cout << "Enter your parking position (g/y/r): ";
        cin >> parkingPosition;
    }
    rideCost = parkingPenalty(parkingPosition, rideCost);

    if (funds<rideCost){
        cout << "INSUFFIENT FUNDS - ADD FUNDS" << endl;
        cout << "==================================================" << endl;
    }
    else{
        cout << "RIDE APPROVED - YOU MAY START THE RIDE" << endl;
        cout << "==================================================" << endl;
        rides++;
        totalMinutes+=minutes;
        spent+=rideCost;
        funds-=rideCost;

        cout << endl;
        cout << "==================================================" << endl;
        cout << "=========================BILL======================" << endl;
        cout << "Ride choice: " << rideChoice << endl;
        cout << "Minutes: " << minutes << endl;
        cout << "Base Fare: " << baseCost << endl;
        cout << "Final Fare: " << rideCost << endl;
        cout << "Remaining funds: " << funds << endl;
        cout << "==================================================" << endl;
    } 
}
double surcharge(int startHour, double fare){
    if ((startHour >= 8 && startHour <= 10) || (startHour >= 16 && startHour <= 18)){
        return fare *= 1.15;
    }
    else {
        return fare;
    }
}
double studentDiscount(bool student, double fare){
   return fare = (student ? fare * 0.9 : fare);
}
int helmetPenalty(bool helmet, double fare){
    return fare = (helmet ? fare : fare + 150);
}
int parkingPenalty(char parkingZone, double fare){
    switch (parkingZone){
        case 'g':
            return fare;
        case 'y':
            return fare + 50;
        default:
            return fare + 200;
    }
}
void rideStatistics( double minutes , double spent, int rides ){
    cout << "==================================================" << endl;
    cout << "Ride statistics: " << endl;
    cout << "Total minutes on rides: " << minutes << endl;
    cout << "Total money spent on rides: " << spent << endl;
    cout << "Total number of rides: " << rides << endl;
    cout << "==================================================" << endl;    
}