void quadHorzInt(int pT, int pB, int fixedP, int fixedQ) {
    glVertex2i(pB, fixedP);
    glVertex2i(pT, fixedP);
    glVertex2i(pT, fixedQ);
    glVertex2i(pB, fixedQ);
}

// float 
void quadHorzFloat(float pT, float pB, float fixedP, float fixedQ) {
    glBegin(GL_QUADS);
    glVertex2f(pB, fixedP);
    glVertex2f(pT, fixedP);
    glVertex2f(pT, fixedQ);
    glVertex2f(pB, fixedQ);
    glEnd();
}

