// third point on middle
void triangleInt(int v0, int v1, int v0_v1, int v2) {
    glVertex2i(v0, v0_v1);
    glVertex2i(v1, v0_v1);
    glVertex2i((v0+v1)/2, v2);
}

//manual
void triangleNS(int v0, int v01, int v1, int v11, int v2, int v21) {
    glVertex2i(v0, v01);
    glVertex2i(v1, v11);
    glVertex2i(v2, v21);
}

//manual 2
void traingleInt(int f1, int f2, int s1, int s2, int t1) {
    glVertex2i(f1, f2);
    glVertex2i(s1, s2);
    glVertex2i(t1, s2);
}
