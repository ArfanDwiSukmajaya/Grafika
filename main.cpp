#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

void display(void)
{
    glClearColor (1.0f, 1.0f, 1.0f, 1.0f);

    glClear (GL_COLOR_BUFFER_BIT);
    //glColor3f (0.0, 0.0, 0.0);

    glBegin(GL_LINE_STRIP);   //perintah garis yang digunakan
    glColor3f(0.0,0.0,0.0);
    glVertex3f (-0.8, 0.1, 0.0);
    glVertex3f (-0.1, 0.1, 0.0);
    glVertex3f (-0.1, 0.5, 0.0);
    glVertex3f (-0.8, 0.5, 0.0);
    glVertex3f (-0.8, 0.1, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.90,0.0,00);
    glVertex3f (0.8, 0.0, 0.0);
    glVertex3f (-0.8, 0.0, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.90, 0.0, 0.0);
    glVertex3f (0.0, -0.6, 0.0);
    glVertex3f (0.0, 0.6, 0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);   //perintah garis yang digunakan
    glColor3f(0.0,0.0,0.0);
    glVertex3f (0.1, -0.1, 0.0);
    glVertex3f (0.8, -0.1, 0.0);
    glVertex3f (0.8, -0.5, 0.0);
    glVertex3f (0.1, -0.5, 0.0);
    glVertex3f (0.1,  -0.1, 0.0);


    glEnd();
    glFlush ();
    }



int main(int argc, char *argv[]) {
    printf("Arfan Dwi Sukmajaya");
    glutInit(&argc, argv);
    glutCreateWindow("Arfan Dwi Sukmajaya");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
    }
