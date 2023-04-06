#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    if(pmodel==NULL)
    {
        pmodel=glmReadOBJ("circle.obj");  //�ҫ��ɦW
        glmUnitize(pmodel);  //�Y�񦨳��j�p
    }
    glmDraw(pmodel,GLM_SMOOTH|GLM_MATERIAL);

    //glutSolidTeapot(0.3);
    glutSwapBuffers();  //�洫���
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);  //�]�w��ܼҦ�
    glutCreateWindow("week08");  //�����W��
    glutDisplayFunc(display);  //��ܪ��禡
    glutMainLoop();  //�D�n�j��̫�
}
