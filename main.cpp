// Course Name: Programming Fundamentals I
// Course No: COSC-1436-57002
// Assignment: #7 Task1 - Data Structures
// IDE: Replit
//
// Description: This program will create three data structures: timeOfDay,
// appDate, and event. Each structure will have data inside. The objective
// of this program is to initialize the data structures for use in
// program 2.
///////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

///////////////////////////////////////////////////////////////////////////////
// Structure definitions
///////////////////////////////////////////////////////////////////////////////
//Structure to hold the time of day
struct timeOfDay {
short hour; //hours
short minute; //minutes
short second; //seconds
};

//Structure to hold the date
struct appDate {
short dayOfMonth; //day(1-31)
short month; //month(1-12)
int year; //year(yyyy)
};

//Structure to hold the event details
struct Event {
string eventName; //name of event
timeOfDay eventTime; //time - timeOfDay datatype
appDate eventDate; //date - appDate datatype
bool isUrgent; //flag to mark urgent events
};

///////////////////////////////////////////////////////////////////////////////
// Main Program
///////////////////////////////////////////////////////////////////////////////

/*int main()
{
Event myEvent; //create instance of Event struct

myEvent.eventTime = { 12, 45, 10 }; //initialize the event time struct
myEvent.eventDate = { 07, 05, 2021 }; //initialize the event date struct
myEvent.eventName = "Went to Rehab"; //initialize the event name
myEvent.isUrgent = "True"; //initialize urgency

system("pause");
return 0;
}
// Structure definitions
///////////////////////////////////////////////////////////////////////////////
//Structure to hold the time of day
struct timeOfDay {
short hour; //hours
short minute; //minutes
short second; //seconds
};

//Structure to hold the date
struct appDate {
short dayOfMonth; //day(1-31)
short month; //month(1-12)
int year; //year(yyyy)
};

//Structure to hold the event details
struct Event {
string eventName; //name of event
timeOfDay eventTime; //time - timeOfDay datatype
appDate eventDate; //date - appDate datatype
bool isUrgent; //flag to mark urgent events
};*/

//function prototype
void printTheTime(const timeOfDay&); //function to print time
void printTheDate(const appDate&); //function to print date
void printTheEvent(const Event&); //function to print details of event

///////////////////////////////////////////////////////////////////////////////
// Main Program
///////////////////////////////////////////////////////////////////////////////

int main()
{
Event myEvent; //create instance of Event struct

//create and initialize the event time
myEvent.eventTime = { 7, 30, 15 };

//create and initialize the date of event
myEvent.eventDate = { 02, 22, 2022 };

//create and initialize the name of event
myEvent.eventName = "The Day with Six Number Two 02-22-2022";

//create and initialize urgency of event
myEvent.isUrgent = "True";

printTheTime(myEvent.eventTime); //function call to print event time
printTheDate(myEvent.eventDate); //function call to print event date
printTheEvent(myEvent); //function call to print event


system("pause");
return 0;
}

//function definition to print time passing by reference
void printTheTime(const timeOfDay& myTime) //prints the time
{
cout << "Time: " << myTime.hour << ":" << myTime.minute << ":" << myTime.second << endl;
}

//function definition to print date passing by reference
void printTheDate(const appDate& myDate) //prints the date
{
cout << "Date: " << myDate.dayOfMonth << "/" << myDate.month << "/" << myDate.year << endl;
}

//function definition to print details of event passing by reference
void printTheEvent(const Event& myEvent) //prints details of the event
{
cout << "\n\nThe information for the event structure is as follows: " << endl;
cout << "-----------------------------------------------------------" << endl;
cout << "Event: " << myEvent.eventName << endl;
printTheDate(myEvent.eventDate); //call to print date function
printTheTime(myEvent.eventTime); //call to print time function
if (myEvent.isUrgent == true)
cout << "Urgent: Yes" << endl;
else
cout << "Urgent: No" << endl;
cout << endl << endl;

}