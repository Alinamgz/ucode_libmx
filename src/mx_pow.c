double mx_pow(double n, unsigned int pow) {
    double rslt = 1;

    for (unsigned i = 0; i < pow; i++) {
        rslt *= n;
    }

    return rslt;
}
