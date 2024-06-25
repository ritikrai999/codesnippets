vector<vint> mat_mul(vector<vint> t1, vector<vint> t2, int k) {
    vector<vint> t3(k + 1, vint(k + 1));
    f(i, 0, k)
    f(j, 0, k)
    f(u, 0, k) {
        t3[i][j] = (t3[i][j] + (t1[i][u] * t2[u][j]) % MOD ) % MOD;
    }
    return t3;
}


vector<vint> mat_pow(vector<vint> T, int k, int p) {
    if(p == 1) return T;
    if(p % 2) return mat_mul(T, mat_pow(T, k, p - 1), k);
    vector<vint> M = mat_pow(T, k, p / 2);
    return (mat_mul(M, M, k));
}
