#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();  //�洫���
}
void keyboard(unsigned char key,int x,int y)
{
    if(key==27) exit(1234);
}
int main(int arag, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);  //�]�w��ܼҦ�
    glutCreateWindow("week11");  //�����W��

    glutDisplayFunc(display);  //��ܪ��禡
    glutKeyboardFunc(keyboard);

    glutMainLoop();  //�D�n�j��̫�
}
