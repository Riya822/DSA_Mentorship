int n,i,j;
    cout<<"enter a number :";
    cin>>n;
    int stars=1;
    int spaces=n/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=spaces;j++){
            if(i==n/2+1)
                cout<<("*	");
            else
                cout<<("	");
        }
        for(j=1;j<=stars;j++)
            cout<<("*	");
        cout<<endl;
        if(i<=n/2)
            stars++;
        else
            stars--;
    }
}
