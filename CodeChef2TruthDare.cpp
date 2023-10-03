#include<iostream>
using namespace std;
bool isSubset(int arr1[], int arr2[],
              int m, int n)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
 1
        /* If the above inner loop was
        not broken at all then arr2[i]
        is not present in arr1[] */
        if (j == m)
            return 0;
    }
 
    /* If we reach here then all
    elements of arr2[] are present
    in arr1[] */
    return 1;
}


int  main(){
    int n;
    cin>>n;
    int arr[n-1]={0};
    // string arr[n-1];

    for(int i=1;i<=n;i++){
    int truthRam;
    cin>>truthRam;
    int Tr[truthRam-1];
    for (int i = 0; i < truthRam; i++)
    {
        cin>>Tr[i];
    }
    
    int DareRam;
    cin>>DareRam;
    int Dr[DareRam-1];
    for (int i = 0; i < DareRam; i++)
    {
        cin>>Dr[i];
    }

    int Struth;
    cin>>Struth;
    int ST[Struth-1];
    for (int i = 0; i < Struth; i++)
    {
        cin>>ST[i];
    }

    int Sdare;
    cin>>Sdare;
    int Sd[Sdare-1];
    for (int i = 0; i < Sdare; i++)
    {
        cin>>Sd[i];
    }
    int m = sizeof(Tr) / sizeof(Tr[0]);
    int n = sizeof(ST) / sizeof(ST[0]);
    int q = sizeof(Dr) / sizeof(Dr[0]); 
     int p = sizeof(Sd) / sizeof(Sd[0]);
                                       


    if(isSubset(Tr,ST,m,n) && isSubset(Dr,Sd,q,p)){
        arr[i]=1;
        // cout<<"yes"<<endl;
    }
    else{
        arr[i]=0;
        // cout<<"no"<<endl;
    }
}
for(int j=0;j<n;j++){
    if(arr[j]=1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
    
    

    return 0;
}