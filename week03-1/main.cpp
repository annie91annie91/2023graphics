#include <GL/glut.h>
void display()
{
    glPushMatrix();  //�ƥ��x�}
      glTranslatef(0.5,0.5,0);  //���ܯx�}
      glutSolidTeapot(0.3);
    glPopMatrix();  //�٭�x�}

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //�]�w��ܼҦ�
    glutCreateWindow("week03");  //�����W��
    glutDisplayFunc(display);  //��ܪ��禡
    glutMainLoop();  //�D�n�j��̫�
}
