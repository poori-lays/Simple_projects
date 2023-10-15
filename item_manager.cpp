#include<iostream>
using namespace std;

class Shop{
    int item_Id[100];
    int price[100];
    int counter=0;
    public:
        void set_price();
        void get_price();
        

    
};
void Shop::set_price(void){
    cout<<" Enter the Id of the item no "<<counter+1<<endl;
    cin>>item_Id[counter];
    cout<<" Enter the price of the item no "<<counter+1<<endl;
    cin>>price[counter];
    counter++;
}
void Shop::get_price(void){
    cout<<'\n';
    for (int i = 0; i < counter; i++)
    {
        cout<<"The item with Id "<<item_Id[i]<<" has a price of "<<price[i]<<endl;
    }
    
}
int display_options(void){
    int a;
    cout<<"\nEnter 1 to index an item "<<endl;
    cout<<"Enter 2 to get a list of all items"<<endl;
    cout<<"Enter 3 to exit program"<<endl;
    cin>>a;
    if(a!=1 && a!=2 && a!=3){
        cout<<"enter either 1,2 or 3"<<endl;
        display_options();
    }
    return a;
}
int main(){

    int run=1;
    int option;
    Shop dukaan;
    while(run){
        option=display_options();
        
        switch(option){
            case 1:dukaan.set_price();break;
            case 2:dukaan.get_price();break;
            case 3:cout<<"Program terminated";exit(0);
        }
    }
}
