#include <iostream>
using namespace std;

#define n 10
void BubbleSort(int [],unsigned,bool cmp);
void SelectSort(int [],unsigned);
void Display(int [],unsigned); //完成数组的显示
bool cmp(int x,int y){
    return x<y;
}
int main()
{ int x[n+1]={0,800,150,300,600,550,650,400,350,450,700};
 Display(x,n); //排序前显示
//SelectSort(x,n);
 BubbleSort(x,n,cmp);
Display(x,n);//排序后显示
return 0;
}
void Display(int a[],unsigned size){
    for(int i=1;i<=size;i++)cout<<a[i]<<' ';
    cout<<endl;
    return;
}
void BubbleSort(int a[],unsigned size ,bool(*cmp)(int,int)){
    for(int i=1;i<size;i++){
        for(int j=1;j<=size-i;j++){
            if(cmp(a[j],a[j+1])){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

void SelectSort(int a[],unsigned size){
    int max;
    for(int i=1;i<=size;i++){
        max=i;
        for(int j=i+1;j<=size;j++){
            if(a[max]<a[j])
                max=j;
        }
        int t=a[i];
        a[i]=a[max];
        a[max]=a[i];
    }
}