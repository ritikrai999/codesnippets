int nCr(int n, int r) {
    int x=n-r,y=0,z=1;
    while(y<r) {
        z=(z*(x+1))/(y+1);
        x++;y++;
    }
    return z;
}