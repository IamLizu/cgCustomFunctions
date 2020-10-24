// vertical straight
void twoIntVertS(int pT, int pB, int fixedP) {
    glVertex2i(fixedP, pT);
    glVertex2i(fixedP, pB);
}

//horzt straight
void twoIntHorzS(int pT, int pB, int fixedP) {
    glVertex2i(pB, fixedP);
    glVertex2i(pT, fixedP);
}
