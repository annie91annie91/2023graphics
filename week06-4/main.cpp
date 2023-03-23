#include <GL/glut.h>

float angle = 0;
void myCube()
{
    glPushMatrix();
        glScalef(1, 0.3, 0.3);
        glutSolidCube(0.5);
    glPopMatrix();
}
void display()

{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.01,30,30); //�H�@�I�������I

    glPushMatrix(); //�k��
        glTranslatef(0.25, 0, 0); //�M�w���b����
        glRotatef(angle, 0, 0, 1);
        glTranslatef(0.25, 0, 0);
        myCube(); //�W���u
        glPushMatrix();
            glTranslatef(0.25, 0, 0); //�M�w���b����
            glRotatef(angle, 0, 0, 1);
            glTranslatef(0.25, 0, 0);
            myCube(); //�U��y
        glPopMatrix();
    glPopMatrix();

    glPushMatrix(); //����
        glTranslatef(-0.25, 0, 0); //�M�w���b����
        glRotatef(-angle, 0, 0, 1);
        glTranslatef(-0.25, 0, 0);
        myCube(); //�W���u
        glPushMatrix();
            glTranslatef(-0.25, 0, 0); //�M�w���b����
            glRotatef(-angle, 0, 0, 1);
            glTranslatef(-0.25, 0, 0);
            myCube(); //�U��y
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
    //angle++;
}
void motion(int x, int y)
{
    angle = x;
}
int main(int argc, char* argv[] )

{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week06");

    glutMotionFunc(motion);
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}