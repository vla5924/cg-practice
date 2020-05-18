#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <QtWidgets/QOpenGLWidget>
#include <QtGui/QOpenGLFunctions>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QOpenGLFunctions_4_3_Core>
#include <GL/glu.h>
#include <GL/gl.h>

struct Sphere
{
    QVector3D center = QVector3D(0, 0, 0);
    float radius = 10;
    QVector3D color = QVector3D(1, 0, 0);
    int materialIdx = 0;
};

class TShaderWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
private:
    QOpenGLShaderProgram program;
    GLfloat* vertData;
    int vertDataLocation;
    int spheresCount;
    Sphere* spheres;
protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void initializeShaders();
    QVector3D readVector(std::ifstream& in);
public:
    TShaderWidget(QWidget* = nullptr);
    ~TShaderWidget();

};
