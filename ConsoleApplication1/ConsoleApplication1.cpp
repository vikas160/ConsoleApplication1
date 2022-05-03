#include<iostream>
#include<string.h>
#include"header.h"
using namespace std;
string name[20];
int r; //record 

class studentr
{
public:
  
    int roll[20], age[20], i; // for main information and i for loop
    int e[20], h[20], m[20], c[20], ev[20]; // for subjects information 

    string state[20],city[20],hn[20]; //for adders information 


    void sdata(void) {
    
            //this function taking main information

            cout << "how many records " << endl;
            cin >> r;

                for (i = 1; i <= r; i++) {
                    system("cls");
                    cout << " Record " << i << " Out of " << r << endl;
                    cout << "--------------------------" << endl;
                    cout << "Enter student name" << endl;
                    cin >> name[i];
                    cout << "Enter student roll Number" << endl;
                    cin >> roll[i];
                    cout << "Enter student age" << endl;
                    cin >> age[i];

                }
           
            

    }

    void subdata(void) {

        //this function taking subject information 

        for (i = 1; i <= r; i++) {

            system("cls"); //for clearing the screen 

            cout << "Enter Subject  Marks for Record " << i << " Name " << name[i] << endl;
            cout << "---------------------------------" << endl;
            cout << "English Subject Marks " << endl;
            cin >> e[i];
            cout << "Hindi Subject Marks " << endl;
            cin >> h[i];
            cout << "Math Subject Marks " << endl;
            cin >> m[i];
            cout << "Coumputer subject marks" << endl;
            cin >> c[i];
            cout << "Evs Subect Marks " << endl;
            cin >> ev[i];
            system("cls");
        }
    }


    void showf(void)
    {
        //this function showing data 

        for (i = 1; i <= r; i++) {
            cout << "----------------------------------------------------" << endl;
            cout << "Record " << i << " | Name " << name[i] << " | Roll " << roll[i] << endl;
            cout << "----------------------------------------------------" << endl;
            cout << " English Marks  | " << e[i] << endl;
            cout << " Hindi marks    | " << h[i] << endl;
            cout << " Math marks     | " << m[i] << endl;
            cout << " Computer Marks | " << c[i] << endl;
            cout << " Evs Marks      | " << ev[i] << endl;
            cout << "----------------------------------------------------" << endl;

            float sum = e[i] + h[i] + m[i] + c[i] + ev[i];
            float perc = sum / 500 * 100;
            cout << " Total marks " << sum << endl;
            cout << " Total Percntage " << perc << endl;
   
            cout << "----------------------------------------------------" << endl;
        }

    }
   
};


class secondclass : public studentr {
    
    //child class

public :
    void adder(void){

       //this function taking adders information 
        
        for (i = 1; i <= r; i++)
        {
            system("cls");
            cout << "--------------------------------------------------------------" << endl;
            cout << "Enter address details for Record " << i << " Name " << name[i] << endl;
            cout << "--------------------------------------------------------------" << endl;
            cout << "Enter state name Name " << endl;
            cin >> state[i];
            cout << "Enter city name " << endl;
            cin >> city[i];
            cout << "Enter house number " << endl;
            cin >> hn[i];
        }
        
 }

    void showad(void)
    {
        for (i = 1; i <= r; i++)
           

            cout <<name[i]<<" | Address details " << " | State " << state[i] << " | City " << city[i] << " | House number " << hn[i] << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
          

    }
};

int main()

{
   //main function

    studentr s1;
    secondclass s2;
    cout << "***********************************************************************************************************************" << endl;
    
    cout <<"\t\t\t\t\t\tPograme to manage student data " << endl;
    cout << "                                          " << endl;
    cout <<"\t\t\t\t\t\t        Made by vikas          " << endl;
   
    cout << "***********************************************************************************************************************" << endl;
        s1.sdata();
        s2.adder();
        s1.subdata();
        s1.showf();
        s2.showad();
      
}

