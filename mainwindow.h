#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    float grade[8][10]={0,};
    int score[8][10]={0,};
    QString name[8][10];
    bool check[8][10]={0,};
private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();



    void on_comboBox_11_currentIndexChanged(int index);

    void on_comboBox_0_currentIndexChanged(int index);

    void on_comboBox_20_currentIndexChanged(int index);

    void on_comboBox_17_currentIndexChanged(int index);

    void on_comboBox_12_currentIndexChanged(int index);

    void on_comboBox_13_currentIndexChanged(int index);

    void on_comboBox_14_currentIndexChanged(int index);

    void on_comboBox_15_currentIndexChanged(int index);

    void on_comboBox_16_currentIndexChanged(int index);

    void on_comboBox_18_currentIndexChanged(int index);

    void on_comboBox_19_currentIndexChanged(int index);

    void on_comboBox_1_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_comboBox_5_currentIndexChanged(int index);

    void on_comboBox_6_currentIndexChanged(int index);

    void on_comboBox_7_currentIndexChanged(int index);

    void on_comboBox_8_currentIndexChanged(int index);

    void on_comboBox_9_currentIndexChanged(int index);

    void on_lineEdit_0_textChanged(const QString &arg1);

    void on_lineEdit_1_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_lineEdit_7_textChanged(const QString &arg1);

    void on_lineEdit_8_textChanged(const QString &arg1);

    void on_lineEdit_9_textChanged(const QString &arg1);

    void on_checkBox_0_clicked();

    void on_checkBox_1_clicked();

    void on_checkBox_2_clicked();

    void on_checkBox_3_clicked();

    void on_checkBox_4_clicked();

    void on_checkBox_5_clicked();

    void on_checkBox_6_clicked();

    void on_checkBox_7_clicked();

    void on_checkBox_8_clicked();

    void on_checkBox_9_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
