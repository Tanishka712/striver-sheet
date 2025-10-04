void nLetterTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            char a = 'A' + j;   
            cout << a << " ";
        }
        cout << endl;
    }
}
