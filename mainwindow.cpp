#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSpinBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("PIC10C-Advanced Programming");
    ui->comboBox->addItem("PIC40A-Introduction to Programming for Internet");
    ui->comboBox->addItem("STATS100A-Introduction to Probability");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_radioButton_clicked()
{
    int val1 = ui->horizontalSlider->value();
    int val2 = ui->horizontalSlider_2->value();
    int val3 = ui->horizontalSlider_3->value();
    int val4 = ui->horizontalSlider_4->value();
    int val5 = ui->horizontalSlider_5->value();
    int val6 = ui->horizontalSlider_6->value();
    int val7 = ui->horizontalSlider_7->value();
    int val8 = ui->horizontalSlider_8->value();
    int val9 = ui->horizontalSlider_9->value();
    int val10 = ui->horizontalSlider_10->value();
    int val11 = ui->horizontalSlider_11->value();

    double homework_percent = (val1+val2+val3+val4+val5+val6+val7+val8)*0.25;
    double midterm1_percent = val9*0.2;
    double midterm2_percent = val10*0.2;
    double final_percent = val11*0.35;
    double sum_score = homework_percent + midterm1_percent + midterm2_percent + final_percent;
    double total_score = 20*8*0.25+25*0.2+25*0.2+25*0.35;
    double grade_score = sum_score/total_score*100;
    QString grade_string = QString::number(grade_score);

    ui->label_14->setText(grade_string);

}

void MainWindow::on_radioButton_2_clicked()
{
    int val1 = ui->horizontalSlider->value();
    int val2 = ui->horizontalSlider_2->value();
    int val3 = ui->horizontalSlider_3->value();
    int val4 = ui->horizontalSlider_4->value();
    int val5 = ui->horizontalSlider_5->value();
    int val6 = ui->horizontalSlider_6->value();
    int val7 = ui->horizontalSlider_7->value();
    int val8 = ui->horizontalSlider_8->value();
    int val9 = ui->horizontalSlider_9->value();
    int val10 = ui->horizontalSlider_10->value();
    int val11 = ui->horizontalSlider_11->value();

    double homework_percent = (val1+val2+val3+val4+val5+val6+val7+val8)*0.25;
    double midterm_high;
    if (val9 > val10) {
        midterm_high = val9;
    }
    else {
        midterm_high = val10;
    }
    double midterm_percent = midterm_high*0.3;
    double final_percent = val11*0.45;
    double sum_score = homework_percent + midterm_percent + final_percent;
    double total_score = 20*8*0.25+25*0.3+25*0.45;
    double grade_score = sum_score/total_score*100;
    QString grade_string = QString::number(grade_score);

    ui->label_14->setText(grade_string);
}
