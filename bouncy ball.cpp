#include <GL/glut.h>
#include <cmath>

// Ball properties
float ballRadius = 0.5f;
float ballX = 0.0f, ballY = 0.0f, ballZ = 0.0f;
float ballXSpeed = 0.02f, ballYSpeed = 0.007f, ballZSpeed = 0.015f;

// World boundaries
float xMax = 3.0f, xMin = -3.0f;
float yMax = 3.0f, yMin = -3.0f;
float zMax = -5.0f, zMin = -10.0f;

void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 1.0, 0.0);

    // Draw the ball
    glTranslatef(ballX, ballY, ballZ);
    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidSphere(ballRadius, 30, 30);

    glutSwapBuffers();
}

void update(int value) {
    ballX += ballXSpeed;
    ballY += ballYSpeed;
    ballZ += ballZSpeed;

    if (ballX + ballRadius > xMax || ballX - ballRadius < xMin) {
        ballXSpeed = -ballXSpeed;
    }
    if (ballY + ballRadius > yMax || ballY - ballRadius < yMin) {
        ballYSpeed = -ballYSpeed;
    }
    if (ballZ + ballRadius > zMin || ballZ - ballRadius < zMax) {
        ballZSpeed = -ballZSpeed;
    }

    glutPostRedisplay();
    glutTimerFunc(16, update, 0); // Roughly 60 frames per second
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("3D Bouncing Ball");

    glutDisplayFunc(display);
    glutTimerFunc(16, update, 0);

    initGL();
    glutMainLoop();
    return 0;
}
