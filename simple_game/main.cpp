#include <iostream>

void start_game();
void end_game(int score);
using namespace std;

int main()
{
    string user_input;
   cout<<"****************Welcome***************"<<endl;
   cout<<"If you want to play game then enter 'yes' to start: ";
   cin>>user_input;

   if(user_input=="yes"){

    start_game();

   }else{
     end_game(0);

   }

}

void start_game(){

    char answer;
    int score=0;

  //Question start//
    cout<<"\n 1) How much is 3+3: "<<endl;
    cout<<"a) 6"<<endl;
    cout<<"b) 10"<<endl;
    cout<<"c) 4.5"<<endl;
    cout<<"d) 0" <<endl;

    cout<<"please enter 'a' 'b' 'c' or 'd' and press enter: ";

    cin>> answer;
    if (answer=='a'){
        cout<<"\n ***********Congrats You choose right answer !********* "<<endl;
        score++;
    }else{
       cout<<"\n ************Sorry You choose wrong answer !************ "<<endl;
       score--;
    }
 //Question end here//

 //Question start//
    cout<<"\n 2) who is our president ? "<<endl;
    cout<<"a) Mamata Banarjee"<<endl;
    cout<<"b) Aditya Nath Yogi"<<endl;
    cout<<"c) Naranda Modi" <<endl;
    cout<<"d) Bell Geat" <<endl;

    cout<<"please enter 'a' 'b' 'c' or 'd' and press enter: ";

    cin>>answer;
    if(answer=='c'){
        cout<<"\n **********Congrats You chose right answer !********"<<endl;
        score++;
    }else{
        cout<<"\n ********Sorry you choose wrong answer!*********"<<endl;
        score--;
    }
 //End here//
  //Question start//
  cout<<"\n 3) What is the value of 8*8 ? "<<endl;
  cout<<"a) 56"<<endl;
  cout<<"b) 64"<<endl;
  cout<<"c) 64.3"<<endl;
  cout<<"d) 63.4"<<endl;

  cout<<"\n Please enter 'a','b','c' or 'd' and press enter: ";

  cin>>answer;
  if(answer=='b'){
    cout<<"\n *********Congrats You choose right answer !**********"<<endl;
    score++;
  }else{
    cout<<"\n *******Sorry you choose Wrong answer !***************"<<endl;
       score--;
  }
  //End here//

  //Start here//
  cout<<"\n 4) What is the value of 3.5+3.5 ?"<<endl;
  cout<<"a) 7.5"<<endl;
  cout<<"b) 8.0"<<endl;
  cout<<"c) 7.0"<<endl;
  cout<<"d) 6.5"<<endl;

  cout<<"\n Please enter 'a','b','c' or 'd' and press enter: ";

  cin>>answer;
  if(answer=='c'){
    cout<<"\n *******Congrats You choose right answer !********"<<endl;
    score++;
  }else{
    cout<<"\n ********Sorry Your choose wrong answer !********"<<endl;
    score--;
  }
  //End here//

  //Start here//
  cout<<"\n 5) Who is present president of United State of America ? "<<endl;
  cout<<"a) Barack Obama "<<endl;
  cout<<"B) Donald Trump "<<endl;
  cout<<"c) Joe Biden " <<endl;
  cout<<"d) Narandra Modi" <<endl;

  cout<<"\n Please enter 'a', 'b' 'c' or 'd' and press enter: ";

  cin>>answer;
  if(answer=='c'){
    cout<<"\n **********Congrats You choose right answer !**********"<<endl;
    score++;
  }else{
    cout<<"\n ********Sorry you choose wrong answer !************"<<endl;
    score--;
  }
 //End here//
//Start here//
  cout<<"\n 6) What is our International language ? "<<endl;
  cout<<"a) Hindi "<<endl;
  cout<<"B) English "<<endl;
  cout<<"c) Urdu " <<endl;
  cout<<"d) Bengali " <<endl;

  cout<<"\n Please enter 'a', 'b' 'c' or 'd' and press enter: ";

  cin>>answer;
  if(answer=='b'){
    cout<<"\n **********Congrats You choose right answer !**********"<<endl;
    score++;
  }else{
    cout<<"\n ********Sorry you choose wrong answer !************"<<endl;
    score--;
  }
 //End here/



  end_game(score);
}


void end_game(int score){
cout<<endl;
cout<<"\n**Thanks For Playing with * Wasim developer **"<<endl;
cout<<"\nYour score is : " << score <<endl;


}













