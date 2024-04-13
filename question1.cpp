/*create TDate class having data member day ,month , year
and following functions

TDate();
TDate(int day,int month,int year);
AcceptDate();
PrintDate_dd-mm-yyyy();    //Ex = 2-5-2022
PrintDate_dd-month-yyyy(); //Ex = 2-May-2022
bool ValidateDate();
*/

#include<stdio.h>

class Date{
    private:
    int day;
    int month;
    int year;

    public:
    void AcceptDate(){
        printf("Enter Day = ");
        scanf("%d", &day);
        printf("Enter Month = ");
        scanf("%d", &month);
        printf("Enter Year = ");
        scanf("%d", &year);
    }
    void printDate() // call by value
    {
        printf("\n Date = %d-%d-%d",day,month,year);
    }
    bool ValidateDate(){
        if(month < 1 || month > 12)
            return false;
        if(day < 1 || day > 31)
            return false;
        if((month == 4 || month == 6 || month == 9 || month == 11) && day>30)
            return false;
        if(month == 2){
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                if(day>29)
                    return false;
            } else{
                if(day>28)
                    return false;
            }
        }
        return true;
    }
};

int main(){
    int day,month,year;
    Date t1;
    t1.AcceptDate();
    t1.printDate();
    if(t1.ValidateDate()){
        printf("\nDate is valid");
    }else{
        printf("\nDate is not valid");
    }
    return 0;

}