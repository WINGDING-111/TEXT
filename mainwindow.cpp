#include "mainwindow.h"
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    auto *central = new QWidget(this);
    auto *layout = new QVBoxLayout(central);

    m_label = new QLabel("点击次数: 0", central);
    m_label->setAlignment(Qt::AlignCenter);
    m_button = new QPushButton("点我!", central);

    layout->addWidget(m_label);
    layout->addWidget(m_button);
    setCentralWidget(central);

    connect(m_button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
}

MainWindow::~MainWindow() = default;

void MainWindow::onButtonClicked() {
    m_clickCount++;
    m_label->setText(QString("点击次数: %1").arg(m_clickCount));
}
