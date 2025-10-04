void alphaRamp(int n) {
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            char a = 'A' + (i-1);   
            cout << a << " ";
        }
        cout << endl;
    }

}
