#include <iostream>
using namespace std;

int main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    int num;
    int res[10];
    int n = sizeof(res) / sizeof(res[0]);
    int i;
    int j;
    int p,q;
    char option;
    cout<<"Goodies and Prices:\n";
    cout<<"0. Fitbit Plus: 7980\n";
    cout<<"1. IPods: 22349\n";
    cout<<"2. MI Band: 999\n";
    cout<<"3. Cult Pass: 2799\n";
    cout<<"4. Macbook Pro: 229900\n";
    cout<<"5. Digital Camera: 11101\n";
    cout<<"6. Alexa: 9999\n";
    cout<<"7. Sandwich Toaster: 2195\n";
    cout<<"8. Microwave Oven: 9800\n";
    cout<<"9. Scale: 4999\n";
    
    cout<<"Number of employees : ";
    cin>>num;
    cout<<"The goodies selected for distribution are:\n";
    int a[num];
    for(i=0;i<num;i++) {
        cin>>option;
        switch(option)
        {
            case '0':
                cout<<"0. Fitbit Plus: ";
                cin>>num1;
                res[i] = num1;
                break;
            case '1':
                cout<<"1. IPods: ";
                cin>>num2;
                res[i] = num2;
                break;
            case '2':
                cout<<"2. MI Band: ";
                cin>>num3;
                res[i] = num3;
                break;
            case '3':
                cout<<"3. Cult Pass: ";
                cin>>num4;
                res[i] = num4;
                break;
            case '4':
                cout<<"4. Macbook Pro: ";
                cin>>num5;
                res[i] = num5;
                break;
            case '5':
                cout<<"5. Digital Camera: ";
                cin>>num6;
                res[i] = num6;
                break;
            case '6':
                cout<<"6. Alexa: ";
                cin>>num7;
                res[i] = num7;
                break;
            case '7':
                cout<<"7. Sandwich Toaster: ";
                cin>>num8;
                res[i] = num8;
                break;
            case '8':
                cout<<"8. Microwave Oven: ";
                cin>>num9;
                res[i] = num9;
                break;
            case '9':
                cout<<"9. Scale: ";
                cin>>num10;
                res[i] = num10;
                break;
    
            default:
                cout << "Error! Option is not correct";
                break;
        }
    }
    
    for(p=0;p<i;p++) {
            for(q=p+1;q<i;q++) {
                if(res[q]>res[p]) {
                    int temp=res[p];
                    res[p]=res[q];
                    res[q]=temp;
                }
            }
        }

    int last = num-1;
    int output = res[0] - res[last];
    cout<<"And the difference between the chosen goodie with highest price and the lowest price is "<<output<<endl;
    return 0;
}
