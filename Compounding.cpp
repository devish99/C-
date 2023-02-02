#include<iostream.h>
void main()
            {
            double principal,futureValue;
            double interest,years,comp;
            double ip,fin;
            int x;


            cout<<"Find the value of your deposit after compounding:";
            cout<<"Enter the principal amount: ";
            principal = input.nextDouble();
            cout<<"Enter the rate of interest(%): ";
            cin>>interest;
            ip=interest/100;
            cout<<"Enter the number of years you want to compound: ";
            cin>>years;
            cout<<"Choose your plan. Type the number corresponding to your plan:"\n;
            cout<<"1) Annual"\n<<"2) Semi-Annual"\n<<"3) Quarterly"\n<<"4) Monthly"\n<<"5) Exit";
            cin>>x;
            switch (x)
            {
                case 1: "You have chosen the Annual Plan"\n;
                fin=principal*(pow(1+(ip),years));
                cout<<"The final compounded value is: ";
                cout<<fin;
                break;

                case 2: "You have chosen the Semi-Annual Plan"\n;
                cout<<"Enter the number of times you want to compound: "
                cin>>comp;
                fin=principal*(pow(1+(ip/comp)),(years*comp));
                cout<<"The final compounded value is: ";
                cout<<fin;
                break;

                case 3: "You have chosen the Quarterly Plan"\n;
                cout<<"Enter the number of times you want to compound: "
                cin>>comp;
                fin=principal*(pow(1+(ip/comp)),(years*comp));
                cout<<"The final compounded value is: ";
                cout<<fin;
                break;

                case 4: "You have chosen the Monthly Plan"\n;
                cout<<"Enter the number of times you want to compound: "
                cin>>comp;
                fin=principal*(pow(1+(ip/comp)),(years*comp));
                cout<<"The final compounded value is: ";
                cout<<fin;
                break;

                case 5: "****EXIT****"\n;
                break;
            }

        }
   