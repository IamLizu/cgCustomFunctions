void quadHorzInt(int pT, int pB, int fixedP, int fixedQ) {
    glVertex2i(pB, fixedP);
    glVertex2i(pT, fixedP);
    glVertex2i(pT, fixedQ);
    glVertex2i(pB, fixedQ);
}
