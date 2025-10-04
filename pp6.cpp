void numberCrown(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            char a = 'A' + j; // ASCII value of A is 65
            cout << a << " ";
        }
        cout << endl;
    }
}
