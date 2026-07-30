#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class QLabel;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void onButtonClicked();
private:
    QPushButton *m_button;
    QLabel *m_label;
    int m_clickCount = 0;
    int m_maxClicks = 999;  // 最大点击数
};

#endif
