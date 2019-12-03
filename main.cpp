
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
        string gender[3];
        int age[3];
        string address[3];
        string names[3];
        long int numbers[3];

        int size = 3;
        int answer =0;

        while(answer!=4)
        {
                cout<<"-----My Simple Contact Manager Program------"<<endl;
                cout<<"-------------------Menu---------------------"<<endl;
                cout <<"Enter 1 to add new Contact: "<<endl;
                cout <<"Enter 2 to add Search Contact: "<<endl;
                cout <<"Enter 3 to Print Contact: "<<endl;
                cout <<"Enter 4 to Exit "<<endl;
                cout<<"--------------------------------------------"<<endl;
                cout<<"----Please Enter a number from the Menu----"<<endl;

                cout<<"Your Answer is: "; cin>>answer;
                
                if (answer ==1) //get new contact information
                {
                        for(int i=0; i<size; i++) // initial loop

                        {
                                cout<<"--------------------------------------------"<<endl;
                                cout <<"Enter your name                     : "; cin>>names[i]; // user will see the output as Enter contact name
                                
                                cout <<"Enter your gender                   : "; cin>>gender[i]; // user will see the output as Enter gender
                                
                                cout <<"Enter your age                      : "; cin>>age[i]; // user will see the output as Enter age
                                
                                cout <<"Enter your contact number           : "; cin>>numbers[i]; //user will see the output as Enter contact number
 
                                cout <<"Enter your address                  : "; cin.ignore(256,'\n');getline(cin, address[i]);// user will see the output as Enter address
                                //cin.ignore(256,'\n'); //clears the stream for the new line
                                

                        }
                }
                else if (answer ==2) //search contacts
                {
                        string searchname;
                        int counter=0;
                        bool found=false;

                        cout<<"--------------------------------------------"<<endl;

                        cout<<"-----What is the NAME you are searching-----?" <<endl; // search name output

                        cin>>searchname;
                        cout<<"--------------------------------------------"<<endl;
                        cout<<"--The Contact Details you wanted to SEARCH--: "<<endl;
                        while(counter<size&&found==false) // while statement for the search
                        {
                                if(searchname==names[counter])
                                {
                                        cout<<"--------------------------------------------"<<endl;
                                        cout<<"Name                 :"<<names[counter]<<endl;
                                        cout<<"Phone Number         :"<<numbers[counter]<<endl;
                                        cout<<"Age                  :"<<age[counter]<<endl;
                                        cout<<"Gender               :"<<gender[counter]<<endl;
                                        cout<<"Address              :"<<address[counter]<<endl;
                                        cout<<"--------------------------------------------"<<endl;

                                        found =true;
                                }
                                ++counter;
                        }
                        if(found==false)
                        {
                            cout<<"--------------------------------------------"<<endl;    
                            cout<<"Contact Not Found" <<endl;
                            cout<<"--------------------------------------------"<<endl;   
                            cout<<"--------------------------------------------"<<endl;   
                        }
                }
                else if(answer ==3)
                {
                        //here we are using bubble sorting
                        for(int i=0; i<size -1; i++) //2nd for loop
                        {
                                for(int j=i+1; j<size; j++) //3rd for loop
                                {
                                        if(numbers[i] > numbers[j]) //if sorting descending, change to >(less then) //if statement for sort order
                                        {
                                                string temp =names[i];
                                                names[i] =names[j];
                                                names[j] = temp;

                                                long int temp1 =numbers[i];
                                                numbers[i] =numbers[j];
                                                numbers[j] = temp1;

                                                int temp2 =age[i];
                                                age[i] = age[j];
                                                age[j]=temp2;

                                                temp =gender[i];
                                                gender[i] =gender[j];
                                                gender[j] = temp;

                                                temp =address[i];
                                                address[i] =address[j];
                                                address[j] = temp;
                                        }
                                }
                        }
                        cout<<"--------------------------------------------"<<endl;
                        cout<<"---The Contact Details you wanted to Print--: "<<endl;
                        for(int i=0; i<size; i++)
                        {
                                cout<<"--------------------------------------------"<<endl;    
                                cout <<"Name            :"<<names[i]<<endl;
                                cout<<"Phone Number     :"<<numbers[i]<<endl;
                                cout <<"Gender          :"<<gender[i]<<endl;
                                cout <<"Age             :"<<age[i]<<endl;
                                cout <<"Address         :"<<address[i]<<endl;
                                cout<<"--------------------------------------------"<<endl;
                        }
                }
        }
        return 0;
}
