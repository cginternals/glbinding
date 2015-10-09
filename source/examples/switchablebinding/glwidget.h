#pragma once

#include <QWidget>

class GLWidget : public QWidget
{
    Q_OBJECT
public:
    GLWidget();
    ~GLWidget();

    virtual QPaintEngine * paintEngine() const override;
protected:
    virtual void paintEvent(QPaintEvent *pe) override;
    virtual void resizeEvent(QResizeEvent * re) override;
    virtual void showEvent(QShowEvent * se) override;
    virtual void keyPressEvent(QKeyEvent *) override;

    bool m_displayInitialized;
    bool m_initialized;
    bool m_useGL;
public slots:
    void initialize();
    void uninitialize();
};
