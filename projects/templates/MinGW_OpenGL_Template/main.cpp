#include <gl/gl.h>
#include <gl/glut.h>

constexpr int WINDOW_WIDTH = 800;
constexpr int WINDOW_HEIGHT = 500;
constexpr char TITLE[] = "MinGW OpenGL Template";

void paint()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3ub(0x00, 0xff, 0x00);
    glBegin(GL_TRIANGLES);
        glVertex3f(0, 0, 0);
        glVertex3f(0, 1, 0);
        glVertex3f(1, 0, 0);
    glEnd();

    glFlush();
}

int main(int argc, char **argv)
{
    int scrw;
    int scrh;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    scrw = glutGet(GLUT_SCREEN_WIDTH);
    scrh = glutGet(GLUT_SCREEN_HEIGHT);

    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    
    glutInitWindowPosition ( 
        (scrw - WINDOW_WIDTH) / 2,
        (scrh - WINDOW_HEIGHT) / 2 
    );

    glutCreateWindow(TITLE);
    glutDisplayFunc(paint);
    glutMainLoop();        

    return 0;
}