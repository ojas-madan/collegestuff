#include <iostream>

using namespace std;

void quick_sort (int a, int lb, int ub);
int partition (int a, int lb, int ub);

#include <iostream>
 
using namespace std;
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main() {
    int n {0};
    cout << "How many elements to sort?" << endl;
    cin >> n;
    int a[n] {0};
    cout << "Please enter array elements: ";
    for(int i =0;i<n;i++)
        cin >> a[i];
    quick_sort(a,0,n-1);
    cout << "Array after sorting: ";
    for(int i =0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

int partition (int a[], int l, int u)
{
    int pivot {0}, last {0}, start {0}, temp {0};
    pivot = a[l];
    start = l;
    last = u;
    
    while(start < last) {
        while(a[start] <= pivot)
            start ++;
        while(a[last] > pivot)
            last --;
        if(start < last){
            temp=a[start];
            a[start]=a[last];
            a[last]=temp;
        }
    }
    a[l] = a[last];
    a[last] = pivot;
    return last;
}

void quick_sort (int a[], int l, int u)
{
    int loc {0};
    if(l<u)
    {
        loc = partition(a, l, u);
        quick_sort(a,l,loc-1);
        quick_sort(a,loc+1,u);
    }
}