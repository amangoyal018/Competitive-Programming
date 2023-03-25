
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"  ";

        }
        for(int k=0;k<=i;k++){
            cout<<k;
            if(k==0 and i==0){

            }else{
                cout<<" ";

            }
            

            
            
        }
        for(int l=0;l<i;l++){
            cout<<i-l-1;
            if(l==i-1){

            }else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
    for(int i=0;i<=n;i++){
        // cout<<"  ";
        for(int k=0;k<i+1;k++){
            cout<<"  ";
        }
        for(int j=n-i;j>0;j--){
            cout<<n-j-i;
            if(i==n-1 and j==1){

            }else{
                cout<<" ";

            }
            

        }
        for(int l=n-i-2;l>=0;l--){
            cout<<l;
            if(l==0){

            }else{

                cout<<" ";
            }
            

        }
        if(i==n){

        }else{

            cout<<endl;
        }

    }
    // cout<<"hello";
}