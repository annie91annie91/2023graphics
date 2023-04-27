#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();  //交換顯示
}
void keyboard(unsigned char key,int x,int y)
{
    if(key==27) exit(1234);
}
int main(int arag, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);  //設定顯示模式
    glutCreateWindow("week11");  //視窗名稱

    glutDisplayFunc(display);  //顯示的函式
    glutKeyboardFunc(keyboard);

    glutMainLoop();  //主要迴圈最後
}
