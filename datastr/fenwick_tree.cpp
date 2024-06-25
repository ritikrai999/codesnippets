int fen[maxm];
void update(int i, int add) {
    while (i > 0 && i < maxm) {
        fen[i] += add;
        i += (i & (-i));
    }
}

int sum(int i) {
    int s = 0;
    while (i > 0) {
        s += fen[i];
        i = i - (i & (-i));
    }
    return s;
}

int find(int x) {
    int low = 0, high = maxm;
    while (low < high) {
        int mid = (low + high) / 2;
        int val = sum(mid);

        if (x <= val)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}