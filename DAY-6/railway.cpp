#include <iostream>
#include <string>
#include <queue>

using namespace std;

class User
{
public:
    string username;
    string password;
};

class Passenger
{
public:
    int passengerId;
    string name;
    int age;
    string status;
    bool active;

    Passenger()
    {
        passengerId = 0;
        age = 0;
        status = "";
        active = false;
    }
};

class RailwayReservation
{
private:
    User user;
    bool registered;
    int passengerCount;
    int nextPassengerId;

    Passenger passengers[5];

    queue<int> confirmedQueue;
    queue<int> racQueue;
    queue<int> waitingQueue;

public:
    RailwayReservation()
    {
        registered = false;
        passengerCount = 0;
        nextPassengerId = 1;
    }

    void registerUser()
    {
        if (registered)
        {
            cout << "User already registered\n";
            return;
        }

        cout << "Enter username: ";
        cin >> user.username;

        cout << "Enter password: ";
        cin >> user.password;

        registered = true;

        cout << "Registration successful\n";
    }

    bool login()
    {
        string uname, pass;

        cout << "Enter username: ";
        cin >> uname;

        cout << "Enter password: ";
        cin >> pass;

        if (uname == user.username && pass == user.password)
        {
            cout << "Login successful\n";
            return true;
        }

        cout << "Invalid credentials\n";
        return false;
    }

    void bookTicket()
    {
        if (passengerCount >= 5)
        {
            cout << "No tickets available\n";
            return;
        }

        Passenger p;

        p.passengerId = nextPassengerId++;

        cout << "Enter passenger name: ";
        cin.ignore();
        getline(cin, p.name);

        cout << "Enter age: ";
        cin >> p.age;

        p.active = true;

        if (confirmedQueue.size() < 2)
        {
            p.status = "Confirmed";
            confirmedQueue.push(passengerCount);
        }
        else if (racQueue.size() < 1)
        {
            p.status = "RAC";
            racQueue.push(passengerCount);
        }
        else
        {
            p.status = "Waiting";
            waitingQueue.push(passengerCount);
        }

        passengers[passengerCount] = p;
        passengerCount++;

        cout << "Ticket booked\n";
        cout << "Passenger ID: " << p.passengerId << endl;
        cout << "Status: " << p.status << endl;
    }

    void cancelTicket()
    {
        int id;
        cout << "Enter passenger ID: ";
        cin >> id;

        int index = -1;

        for (int i = 0; i < passengerCount; i++)
        {
            if (passengers[i].active &&
                passengers[i].passengerId == id)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            cout << "Passenger not found\n";
            return;
        }

        string oldStatus = passengers[index].status;

        passengers[index].active = false;
        passengers[index].status = "Cancelled";

        if (oldStatus == "Confirmed")
        {
            if (!racQueue.empty())
            {
                int racIndex = racQueue.front();
                racQueue.pop();

                passengers[racIndex].status = "Confirmed";
                confirmedQueue.push(racIndex);

                if (!waitingQueue.empty())
                {
                    int wlIndex = waitingQueue.front();
                    waitingQueue.pop();

                    passengers[wlIndex].status = "RAC";
                    racQueue.push(wlIndex);
                }
            }
        }
        else if (oldStatus == "RAC")
        {
            if (!waitingQueue.empty())
            {
                int wlIndex = waitingQueue.front();
                waitingQueue.pop();

                passengers[wlIndex].status = "RAC";
                racQueue.push(wlIndex);
            }
        }

        cout << "Ticket cancelled\n";
    }

    void displayPassengers()
    {
        bool found = false;

        for (int i = 0; i < passengerCount; i++)
        {
            if (passengers[i].active)
            {
                found = true;

                cout << "\nPassenger ID: "
                     << passengers[i].passengerId << endl;

                cout << "Name: "
                     << passengers[i].name << endl;

                cout << "Age: "
                     << passengers[i].age << endl;

                cout << "Status: "
                     << passengers[i].status << endl;
            }
        }

        if (!found)
        {
            cout << "No passengers found\n";
        }
    }
};

int main()
{
    RailwayReservation railway;

    int choice;
    bool loggedIn = false;

    do
    {
        cout << "\n1. Register\n";
        cout << "2. Login\n";
        cout << "3. Book Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Display Passengers\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            railway.registerUser();
            break;

        case 2:
            loggedIn = railway.login();
            break;

        case 3:
            if (loggedIn)
                railway.bookTicket();
            else
                cout << "Please login first\n";
            break;

        case 4:
            if (loggedIn)
                railway.cancelTicket();
            else
                cout << "Please login first\n";
            break;

        case 5:
            if (loggedIn)
                railway.displayPassengers();
            else
                cout << "Please login first\n";
            break;

        case 6:
            cout << "Program ended\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 6);

    return 0;
}