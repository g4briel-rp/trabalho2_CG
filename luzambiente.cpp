#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>

#define CHAO 1
#define MESA 2
#define CADEIRA 3
#define LUMINARIA 4
#define GARRAFA 5
#define TACA 6

GLUquadricObj *q;

void desenha_chao(){
    // Inicializa display lists para criação do chão
    glNewList(CHAO, GL_COMPILE);

    glColor3f(0.98, 0.92, 0.84);

    // Criação da malha formada por triangulos adjacentes e as Transformações geometricas utilizadas
    glPushMatrix();
    glTranslatef(-44.0, -11.5, -65.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_STRIP);
    glNormal3f(0.0, 1.0, 0.0);
    for(float y = 1.0; y < 100.0; y += 5.0){
        for(float x = 1.0; x < 100.0; x += 5.0){
            glVertex3f (x, y, 0.0);
            glVertex3f (5.0 + x, y, 0.0);
            glVertex3f (x, 5.0 + y, 0.0);
            glVertex3f (5.0 + x, 5.0 + y, 0.0);
        }
    }
    glEnd();
    glPopMatrix();

    glEndList();
}

void desenha_mesa(){
    // Inicializa display lists para criação da mesa
    glNewList(MESA, GL_COMPILE); // Mesa

    glColor3f(0.58, 0.29, 0.0);

    //Criação da tabua da mesa.
    glPushMatrix();
    glTranslatef(0.0, 10.0, 0.0);
    glScalef(5.0, 0.5, 10.0);
    glutSolidCube(5.0);
    glPopMatrix();

    // Criação do pé da mesa

    //pé esquerdo inferior
    glPushMatrix();
    glTranslatef(-8.0, -1.4, 20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    //pé direito inferior
    glPushMatrix();
    glTranslatef(8.0, -1.4, 20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    //pé esquerdo superior
    glPushMatrix();
    glTranslatef(-8.0, -1.4, -20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    //pé direito superior
    glPushMatrix();
    glTranslatef(8.0, -1.4, -20.0);
    glScalef(0.5, 4.0, 0.5);
    glutSolidCube(5.0);
    glPopMatrix();

    glEndList();
}

void desenha_cadeiras(){
    // Inicializa display lists para criação das cadeiras
    glNewList(CADEIRA, GL_COMPILE);

    glColor3f(0.58, 0.29, 0.0);

    //cadeira da esquerda

    //pé direito inferior
    glPushMatrix();
    glTranslatef(-11.5, -6.5, 1.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //pé direito superior
    glPushMatrix();
    glTranslatef(-16.0, -6.5, -6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //pé esquerdo inferior
    glPushMatrix();
    glTranslatef(-20.0, -6.5, 6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //pé esquerdo superior
    glPushMatrix();
    glTranslatef(-24.5, -6.5, -1.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    glColor3f(0.8, 0.49, 0.19);

    //banco
    glPushMatrix();
    glTranslatef(-18.0, 0.0, 0.0);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    //encosto
    glPushMatrix();
    glTranslatef(-20.25, 7.5, -3.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    glColor3f(0.58, 0.29, 0.0);

    //cadeira da direita

    //pé direito inferior
    glPushMatrix();
    glTranslatef(24.5, -6.5, 1.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //pé direito superior
    glPushMatrix();
    glTranslatef(20.0, -6.5, -6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //pé esquerdo inferior
    glPushMatrix();
    glTranslatef(16.5, -6.5, 6.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    //pé esquerdo superior
    glPushMatrix();
    glTranslatef(11.5, -6.5, -2.5);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 5.0, 1.0);
    glutSolidCube(2.0);
    glPopMatrix();

    glColor3f(0.8, 0.49, 0.19);

    //banco
    glPushMatrix();
    glTranslatef(18.0, 0.0, 0.0);
    glRotatef(30.0, 0.0, 1.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    //encosto
    glPushMatrix();
    glTranslatef(21.75, 7.5, -2.0);
    glRotatef(60.0, 0.0, -1.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 0.25, 1.0);
    glutSolidCube(12.0);
    glPopMatrix();

    glEndList();
}

void desenha_luminaria(){
    // Inicializa display lists para criação da luminaria
    glNewList(LUMINARIA, GL_COMPILE);

    glColor3f(0.0, 0.0, 0.0);

    //proteção da lampada
    glPushMatrix();
    glTranslatef (-24.5, 19.5, -39.5);
    glRotatef(-160.0, 0.0, 1.0, 0.0);
    gluCylinder(q, 5.0, 1.0, 10.0, 9.0, 3.0);
    glPopMatrix();

    //haste
    glPushMatrix();
    glTranslatef(-28.0, 20.5, -50.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glScalef(1.0, 1.0, 3.2);
    gluCylinder(q, 1.0, 1.0, 10.0, 5.0, 5.0);
    glPopMatrix();

    //pé
    glPushMatrix();
    glTranslatef (-28.0, -11.5, -50.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluDisk(q, 1.0, 3.0, 10.0, 5.0);
    glPopMatrix();

    glColor3f(1.0, 1.0, 0.0);

    //lampada
    glPushMatrix();
    glTranslatef (-26.5, 19.5, -45.0);
    gluSphere(q, 2.5, 10.0, 10.0);
    glPopMatrix();

    glEndList();
}

void desenha_garrafa(){
    // Inicializa display lists para criação da garrafa
    glNewList(GARRAFA, GL_COMPILE);

    glColor3f(0.18, 0.54, 0.34);

    //cilindro inferior
    glPushMatrix();
    glTranslatef(-5.0, 17.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 1.5, 1.5, 6.0, 10.0, 5.0);
    glPopMatrix();

    //cilindro mediano
    glPushMatrix();
    glTranslatef(-5.0, 20.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.5, 1.5, 3.0, 10.0, 5.0);
    glPopMatrix();

    //cilindro superior
    glPushMatrix();
    glTranslatef(-5.0, 21.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.5, 0.5, 1.0, 10.0, 5.0);
    glPopMatrix();

    glColor3f(0.94, 1.0, 0.94);

    //tampa
    glPushMatrix();
    glTranslatef(-5.05, 21.75, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    glutSolidTorus(0.25, 0.5, 10.0, 5.0);
    glPopMatrix();

    glEndList();
}

void desenha_taca(){
    // Inicializa display lists para criação da taça
    glNewList(TACA, GL_COMPILE);

    //cilindro superior
    glPushMatrix();
    glTranslatef(0.0, 16.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 1.5, 0.15, 2.5, 10.0, 5.0);
    glPopMatrix();

    //cilindro inferior
    glPushMatrix();
    glTranslatef (0.0, 14.0, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluCylinder(q, 0.15, 0.15, 2.5, 10.0, 5.0);
    glPopMatrix();

    //base da taça
    glPushMatrix();
    glTranslatef (0.0, 11.5, 0.0);
    glRotatef(90.0, 1.0, 0.0, 0.0);
    gluDisk(q, 0.0, 1.0, 10.0, 5.0);
    glPopMatrix();

    glEndList();
}

void init(int option){
    GLfloat luzAmbiente[4] = {0.2, 0.2, 0.2, 1.0};
    GLfloat light_position[] = {0.0, 20.0, 25.0, 0.0 };

    glClearColor (0.1, 0.1, 0.1, 0.0);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);
    glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	if (option == 1)
        glShadeModel(GL_SMOOTH);
    if (option == 2)
        glShadeModel(GL_FLAT);

    glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);

    q = gluNewQuadric();

    desenha_chao();
    desenha_mesa();
    desenha_cadeiras();
    desenha_luminaria();
    desenha_garrafa();
    desenha_taca();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

// Chama o display list do chao para exibi-lo
    glPushMatrix();
    glCallList(CHAO);
    glPopMatrix();

// Chama o display list da mesa para exibi-lo
    glPushMatrix();
    glCallList(MESA);
    glPopMatrix();

// Chama o display list das cadeiras para exibi-lo
    glPushMatrix();
    glCallList(CADEIRA);
    glPopMatrix();

// Chama o display list da luminaria para exibi-lo
    glPushMatrix();
    glCallList(LUMINARIA);
    glPopMatrix();

// Chama o display list da garrafa para exibi-lo
    glPushMatrix();
    glCallList(GARRAFA);
    glPopMatrix();

//Chama o display list da taça para exibi-lo
    glPushMatrix();
    glCallList(TACA);
    glPopMatrix();

    glutSwapBuffers();
}

void perspectiva(int w, int h){
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat)w/(GLfloat)h, 1.0, 200.0);
    gluLookAt(-10.0, 30.0, 50.0, 0.0, -2.0, 0.0, 0.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y){
    switch(key){
        case 27:
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(640, 480);

    glutInitWindowPosition(100, 100);
    glutCreateWindow("smooth");
    init(1);
    glutDisplayFunc(display);
    glutReshapeFunc(perspectiva);

    glutInitWindowPosition(800, 100);
    glutCreateWindow("flat");
    init(2);
    glutDisplayFunc(display);
    glutReshapeFunc(perspectiva);

    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
