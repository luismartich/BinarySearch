
#include <iostream>
using namespace std;

int BinarySearch(const int[],int,int);

int main ()
{
    int idnums[]={101,142,147,189,199,207,222,234,289       //Array
    ,296,310,319,388,394,417,429,447,521,536,600};
    int SIZE=20;                                            //Elements in the array
    int results;                                            //To hold search result
    int empID;                                              //To hold employee ID to search

    cout<<"Enter the employee ID to search for: "<<endl;
    cin>>empID;

    results=BinarySearch(idnums,SIZE,empID);                //call function and store result

    if (results==-1)
        cout<<"That number does not exist in the employee ID's database "<<endl;
    else
        cout<<"That ID was found at element "<<results<<" in the array "<<endl;
    return 0;
}


int BinarySearch(const int array[],int SIZE,int value)
{
    int first=0;            //First array element
    int last= SIZE -1;      //Last array element
    int middle;             //Middle point
    int position= -1;       //Position of search value
    bool found=false;       //flag

    while (!found && first <= last)         //loop
    {
        middle=(first + last)/2;            //calculate midpoint
        if (array[middle]==value)           //if value is equal to midpoint
        {   found=true;
            position=middle; }
        else if (array[middle] > value)     //if value is less than midpoint
            last=middle - 1;
        else                                //if value is bigger than midpoint
            first=middle + 1;
    }
    return position;
}
