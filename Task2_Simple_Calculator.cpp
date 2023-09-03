# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;
  cout<<endl;
  cout<<"This is a simple calculator"<<endl;
  while(true){
  cout << "Enter operator below: +, -, *, /: "<<endl;
  cin >> op;

  cout << "Enter 1st operand: "<<endl;
  cin >> num1 ;
  cout << "Enter 2nd operand: "<<endl;
  cin >> num2;
  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  
  }
  bool calculateagain;
        while(true){
            cout<<endl;
            cout<<"Enter 0 to exit calculator 1 to calculate again"<<endl;
            int inputuser;
            cin>>inputuser;
            if(inputuser==0){calculateagain=false;break;}
            else if(inputuser==1){calculateagain=true;break;}
            else{cout<<"Please enter a valid input"<<endl;}
            }
            if(calculateagain){continue;}
            else{break;}
  }

  return 0;
}
