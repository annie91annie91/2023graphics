#include <GL/glut.h>
float angle = 0;  //�����ܼ� angle����
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);  //�M�e��
    glPushMatrix();
        glTranslatef(0.5,0,0);  //�X�{�b�e���k��
        glRotatef(angle,0,1,0);  //��angle��
        glColor3f(0,0,1);  //�Ŧ�
        glutSolidTeapot(0.3);
    glPopMatrix();  //�٭�x�}
    glutSwapBuffers();  //�洫���
    angle++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //�]�w��ܼҦ�
    glutCreateWindow("week04");  //�����W��

    glutDisplayFunc(display);  //��ܪ��禡
    glutIdleFunc(display);  //���e�e��
    glutMainLoop();  //�D�n�j��̫�
}
