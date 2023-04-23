#include<iostream>
using namespace std;
int main()
{
    int small_rooms,large_rooms;
    int small_price =25,large_price=35;
    cout<<"Frank's Carpet cleanig Service Charges ";
    cout<<"\n\nHow many small rooms would you like cleaned? ";
    cin>>small_rooms;
    cout<<"\nHow many large rooms would you like cleaned? ";
    cin>>large_rooms;
    cout<<"\n\n\nEstimate for carpet cleaning service\n";
    cout<<"Number of small rooms: "<<small_rooms;
    cout<<"\nNumber of large rooms: "<<large_rooms;
    cout<<"\nPrice per small room: "<<small_price;
    cout<<"\nPrice per large room: "<<large_price;
    int cost=(small_rooms*small_price)+(large_rooms*large_price);
    cout<<"\nCost: "<<cost;
    float tax=cost*0.06;
    cout<<"\nTax: "<<tax<<endl;
    cout<<"==============================="<<endl;
    cout<<"Total estimation: "<<cost+tax;
    cout<<"\nThis estimate is valid for 30 days.";

}
