#include <iostream>
using namespace std;
 
int main() {
    double weights[50] {0}, profit[50] {0}, x[20] {0}, totalprofit {0}, profitbyweight[10] {0};
    int objects {0}, var {0}, j {0}, z {0}, m {0};
    cout << "Enter no. of objects and total knapsack capacity" << endl;
    cin >> objects >> m;
    cout << endl << "Enter profits and weights of objects respectively"<< endl;
    for( j=0; j<objects; j++){
            cout<< "For Object"<<j+1<<": ";
            cin >> profit[j];
            cin >> weights[j];
    }
    for(j=0; j<objects; j++){
        profitbyweight[j]=profit[j]/weights[j];
    }

    for(j=0; j<objects-1; j++){
    
        for(z=j+1; z<objects; z++){
            if(profitbyweight[j]<profitbyweight[z]){
                var=profitbyweight[z];
                profitbyweight[z]=profitbyweight[j];
                profitbyweight[j]=var;
                
                var=profit[z];
                profit[z]=profit[j];
                profit[j]=var;

                var=weights[z];
                weights[z]=weights[j];
                weights[j]=var;
                
            
            }
        }
        
    }
 
    for(j=0; j<objects; j++){
        x[j]=0;
    }
    for(j=0; j<objects; j++){
        if(weights[j]>m)
            break;
        else{
            x[j]=1.0;
            totalprofit=totalprofit + profit[j];
            m -= weights[j];
        }
    }
    if(j<objects)
        x[j]=m/weights[j];
    totalprofit += profit[j]*x[j];
        
    cout<<"Thus the maximum profit we can earn by greedy approach: "<<totalprofit << endl;
}