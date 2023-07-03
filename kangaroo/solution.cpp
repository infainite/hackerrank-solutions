string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) return ((x1 == x2) ? "YES" : "NO");
    int mod = (x1 - x2) % (v2 - v1);
    if (mod != 0) return "NO";

    return (((x1 - x2) / (v2 - v1)) < 0 ? "NO" : "YES");
}
