#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
        ui->comboBox_0->setCurrentIndex(grade[ui->comboBox->currentIndex()][0]);
        ui->comboBox_1->setCurrentIndex(grade[ui->comboBox->currentIndex()][1]);
        ui->comboBox_2->setCurrentIndex(grade[ui->comboBox->currentIndex()][2]);
        ui->comboBox_3->setCurrentIndex(grade[ui->comboBox->currentIndex()][3]);
        ui->comboBox_4->setCurrentIndex(grade[ui->comboBox->currentIndex()][4]);
        ui->comboBox_5->setCurrentIndex(grade[ui->comboBox->currentIndex()][5]);
        ui->comboBox_6->setCurrentIndex(grade[ui->comboBox->currentIndex()][6]);
        ui->comboBox_7->setCurrentIndex(grade[ui->comboBox->currentIndex()][7]);
        ui->comboBox_8->setCurrentIndex(grade[ui->comboBox->currentIndex()][8]);
        ui->comboBox_9->setCurrentIndex(grade[ui->comboBox->currentIndex()][9]);

        ui->comboBox_11->setCurrentIndex(score[ui->comboBox->currentIndex()][0]);
        ui->comboBox_12->setCurrentIndex(score[ui->comboBox->currentIndex()][1]);
        ui->comboBox_13->setCurrentIndex(score[ui->comboBox->currentIndex()][2]);
        ui->comboBox_14->setCurrentIndex(score[ui->comboBox->currentIndex()][3]);
        ui->comboBox_15->setCurrentIndex(score[ui->comboBox->currentIndex()][4]);
        ui->comboBox_16->setCurrentIndex(score[ui->comboBox->currentIndex()][5]);
        ui->comboBox_17->setCurrentIndex(score[ui->comboBox->currentIndex()][6]);
        ui->comboBox_18->setCurrentIndex(score[ui->comboBox->currentIndex()][7]);
        ui->comboBox_19->setCurrentIndex(score[ui->comboBox->currentIndex()][8]);
        ui->comboBox_20->setCurrentIndex(score[ui->comboBox->currentIndex()][9]);

        ui->lineEdit_0->setText(name[ui->comboBox->currentIndex()][0]);
        ui->lineEdit_1->setText(name[ui->comboBox->currentIndex()][1]);
        ui->lineEdit_2->setText(name[ui->comboBox->currentIndex()][2]);
        ui->lineEdit_3->setText(name[ui->comboBox->currentIndex()][3]);
        ui->lineEdit_4->setText(name[ui->comboBox->currentIndex()][4]);
        ui->lineEdit_5->setText(name[ui->comboBox->currentIndex()][5]);
        ui->lineEdit_6->setText(name[ui->comboBox->currentIndex()][6]);
        ui->lineEdit_7->setText(name[ui->comboBox->currentIndex()][7]);
        ui->lineEdit_8->setText(name[ui->comboBox->currentIndex()][8]);
        ui->lineEdit_9->setText(name[ui->comboBox->currentIndex()][9]);

        ui->checkBox_0->setChecked(check[ui->comboBox->currentIndex()][0]);
        ui->checkBox_1->setChecked(check[ui->comboBox->currentIndex()][1]);
        ui->checkBox_2->setChecked(check[ui->comboBox->currentIndex()][2]);
        ui->checkBox_3->setChecked(check[ui->comboBox->currentIndex()][3]);
        ui->checkBox_4->setChecked(check[ui->comboBox->currentIndex()][4]);
        ui->checkBox_5->setChecked(check[ui->comboBox->currentIndex()][5]);
        ui->checkBox_6->setChecked(check[ui->comboBox->currentIndex()][6]);
        ui->checkBox_7->setChecked(check[ui->comboBox->currentIndex()][7]);
        ui->checkBox_8->setChecked(check[ui->comboBox->currentIndex()][8]);
        ui->checkBox_9->setChecked(check[ui->comboBox->currentIndex()][9]);
}

void MainWindow::on_pushButton_clicked()
{
    // 계산버튼 클릭시.//
   QString total= ui->lineEdit->text();
   int Max=total.toInt();
   for(int i=0;i<8;i++){
       for(int j=0;j<10;j++){
           Max-=score[i][j];
       }
   }
   QString R=QString::number(Max);
   ui->label_result->setText(R);
   //남은학점 계산
   float gra=0;
   int num=0;
   for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
           if(grade[i][j]!=0.0)
               num++;
       }
   }
   for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
           gra+=grade[i][j];
       }
   }
   float T=   gra/num;
   QString E=QString::number(T);
   ui->label_result_2->setText(E);
   //학점 평균 계산

   float Mgra=0;
   int num2=0;
   for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
           if(check[i][j]==true)
               num2++;
       }
   }
   for(int i=0;i<8;i++){
       for(int j=0;j<8;j++){
           if(check[i][j]==true)
           Mgra+=grade[i][j];
       }
   }
   float T1=Mgra/num2;
   QString E1=QString::number(T1);
   ui->label_result3->setText(E1);
   //전공 평균 학점 계산
}



void MainWindow::on_comboBox_11_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][0]=ui->comboBox_11->currentIndex();
}

void MainWindow::on_comboBox_12_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][1]=ui->comboBox_12->currentIndex();
}

void MainWindow::on_comboBox_13_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][2]=ui->comboBox_13->currentIndex();
}

void MainWindow::on_comboBox_14_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][3]=ui->comboBox_14->currentIndex();
}

void MainWindow::on_comboBox_15_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][4]=ui->comboBox_15->currentIndex();
}

void MainWindow::on_comboBox_16_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][5]=ui->comboBox_16->currentIndex();
}

void MainWindow::on_comboBox_17_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][6]=ui->comboBox_17->currentIndex();
}

void MainWindow::on_comboBox_18_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][7]=ui->comboBox_18->currentIndex();
}

void MainWindow::on_comboBox_19_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][8]=ui->comboBox_19->currentIndex();
}

void MainWindow::on_comboBox_20_currentIndexChanged(int index)
{
    score[ui->comboBox->currentIndex()][9]=ui->comboBox_20->currentIndex();
}

void MainWindow::on_comboBox_0_currentIndexChanged(int index)
{
    if(ui->comboBox_0->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][0]=0;
    if(ui->comboBox_0->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][0]=4.5;
    if(ui->comboBox_0->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][0]=4;
    if(ui->comboBox_0->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][0]=3.5;
    if(ui->comboBox_0->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][0]=3;
    if(ui->comboBox_0->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][0]=2.5;
    if(ui->comboBox_0->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][0]=2;
    if(ui->comboBox_0->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][0]=1.5;
    if(ui->comboBox_0->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][0]=1;
    if(ui->comboBox_0->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][0]=0;
}

void MainWindow::on_comboBox_1_currentIndexChanged(int index)
{
    if(ui->comboBox_1->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][1]=0;
    if(ui->comboBox_1->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][1]=4.5;
    if(ui->comboBox_1->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][1]=4;
    if(ui->comboBox_1->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][1]=3.5;
    if(ui->comboBox_1->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][1]=3;
    if(ui->comboBox_1->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][1]=2.5;
    if(ui->comboBox_1->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][1]=2;
    if(ui->comboBox_1->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][1]=1.5;
    if(ui->comboBox_1->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][1]=1;
    if(ui->comboBox_1->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][1]=0;
}

void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    if(ui->comboBox_2->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][2]=0;
    if(ui->comboBox_2->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][2]=4.5;
    if(ui->comboBox_2->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][2]=4;
    if(ui->comboBox_2->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][2]=3.5;
    if(ui->comboBox_2->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][2]=3;
    if(ui->comboBox_2->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][2]=2.5;
    if(ui->comboBox_2->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][2]=2;
    if(ui->comboBox_2->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][2]=1.5;
    if(ui->comboBox_2->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][2]=1;
    if(ui->comboBox_2->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][2]=0;
}

void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    if(ui->comboBox_3->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][3]=0;
    if(ui->comboBox_3->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][3]=4.5;
    if(ui->comboBox_3->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][3]=4;
    if(ui->comboBox_3->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][3]=3.5;
    if(ui->comboBox_3->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][3]=3;
    if(ui->comboBox_3->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][3]=2.5;
    if(ui->comboBox_3->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][3]=2;
    if(ui->comboBox_3->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][3]=1.5;
    if(ui->comboBox_3->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][3]=1;
    if(ui->comboBox_3->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][3]=0;
}

void MainWindow::on_comboBox_4_currentIndexChanged(int index)
{
    if(ui->comboBox_4->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][4]=0;
    if(ui->comboBox_4->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][4]=4.5;
    if(ui->comboBox_4->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][4]=4;
    if(ui->comboBox_4->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][4]=3.5;
    if(ui->comboBox_4->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][4]=3;
    if(ui->comboBox_4->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][4]=2.5;
    if(ui->comboBox_4->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][4]=2;
    if(ui->comboBox_4->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][4]=1.5;
    if(ui->comboBox_4->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][4]=1;
    if(ui->comboBox_4->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][4]=0;
}

void MainWindow::on_comboBox_5_currentIndexChanged(int index)
{
    if(ui->comboBox_5->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][5]=0;
    if(ui->comboBox_5->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][5]=4.5;
    if(ui->comboBox_5->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][5]=4;
    if(ui->comboBox_5->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][5]=3.5;
    if(ui->comboBox_5->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][5]=3;
    if(ui->comboBox_5->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][5]=2.5;
    if(ui->comboBox_5->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][5]=2;
    if(ui->comboBox_5->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][5]=1.5;
    if(ui->comboBox_5->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][5]=1;
    if(ui->comboBox_5->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][5]=0;

}

void MainWindow::on_comboBox_6_currentIndexChanged(int index)
{
    if(ui->comboBox_6->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][6]=0;
    if(ui->comboBox_6->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][6]=4.5;
    if(ui->comboBox_6->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][6]=4;
    if(ui->comboBox_6->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][6]=3.5;
    if(ui->comboBox_6->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][6]=3;
    if(ui->comboBox_6->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][6]=2.5;
    if(ui->comboBox_6->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][6]=2;
    if(ui->comboBox_6->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][6]=1.5;
    if(ui->comboBox_6->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][6]=1;
    if(ui->comboBox_6->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][6]=0;
}

void MainWindow::on_comboBox_7_currentIndexChanged(int index)
{
    if(ui->comboBox_7->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][7]=0;
    if(ui->comboBox_7->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][7]=4.5;
    if(ui->comboBox_7->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][7]=4;
    if(ui->comboBox_7->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][7]=3.5;
    if(ui->comboBox_7->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][7]=3;
    if(ui->comboBox_7->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][7]=2.5;
    if(ui->comboBox_7->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][7]=2;
    if(ui->comboBox_7->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][7]=1.5;
    if(ui->comboBox_7->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][7]=1;
    if(ui->comboBox_7->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][7]=0;
}

void MainWindow::on_comboBox_8_currentIndexChanged(int index)
{
    if(ui->comboBox_8->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][8]=0;
    if(ui->comboBox_8->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][8]=4.5;
    if(ui->comboBox_8->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][8]=4;
    if(ui->comboBox_8->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][8]=3.5;
    if(ui->comboBox_8->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][8]=3;
    if(ui->comboBox_8->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][8]=2.5;
    if(ui->comboBox_8->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][8]=2;
    if(ui->comboBox_8->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][8]=1.5;
    if(ui->comboBox_8->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][8]=1;
    if(ui->comboBox_8->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][8]=0;
}

void MainWindow::on_comboBox_9_currentIndexChanged(int index)
{
    if(ui->comboBox_9->currentIndex()==0)
        grade[ui->comboBox->currentIndex()][9]=0;
    if(ui->comboBox_9->currentIndex()==1)
        grade[ui->comboBox->currentIndex()][9]=4.5;
    if(ui->comboBox_9->currentIndex()==2)
        grade[ui->comboBox->currentIndex()][9]=4;
    if(ui->comboBox_9->currentIndex()==3)
        grade[ui->comboBox->currentIndex()][9]=3.5;
    if(ui->comboBox_9->currentIndex()==4)
        grade[ui->comboBox->currentIndex()][9]=3;
    if(ui->comboBox_9->currentIndex()==5)
        grade[ui->comboBox->currentIndex()][9]=2.5;
    if(ui->comboBox_9->currentIndex()==6)
        grade[ui->comboBox->currentIndex()][9]=2;
    if(ui->comboBox_9->currentIndex()==7)
        grade[ui->comboBox->currentIndex()][9]=1.5;
    if(ui->comboBox_9->currentIndex()==8)
        grade[ui->comboBox->currentIndex()][9]=1;
    if(ui->comboBox_9->currentIndex()==9)
        grade[ui->comboBox->currentIndex()][9]=0;
}

void MainWindow::on_lineEdit_0_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][0]=arg1;
}

void MainWindow::on_lineEdit_1_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][1]=arg1;
}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][2]=arg1;
}

void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][3]=arg1;
}

void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][4]=arg1;
}

void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][5]=arg1;
}

void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][6]=arg1;
}

void MainWindow::on_lineEdit_7_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][7]=arg1;
}

void MainWindow::on_lineEdit_8_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][8]=arg1;
}

void MainWindow::on_lineEdit_9_textChanged(const QString &arg1)
{
    name[ui->comboBox->currentIndex()][9]=arg1;
}



void MainWindow::on_checkBox_0_clicked()
{
    check[ui->comboBox->currentIndex()][0]=ui->checkBox_0->isChecked();
}

void MainWindow::on_checkBox_1_clicked()
{
    check[ui->comboBox->currentIndex()][1]=ui->checkBox_1->isChecked();
}

void MainWindow::on_checkBox_2_clicked()
{
    check[ui->comboBox->currentIndex()][2]=ui->checkBox_2->isChecked();
}

void MainWindow::on_checkBox_3_clicked()
{
    check[ui->comboBox->currentIndex()][3]=ui->checkBox_3->isChecked();
}

void MainWindow::on_checkBox_4_clicked()
{
    check[ui->comboBox->currentIndex()][4]=ui->checkBox_4->isChecked();
}

void MainWindow::on_checkBox_5_clicked()
{
    check[ui->comboBox->currentIndex()][5]=ui->checkBox_5->isChecked();
}

void MainWindow::on_checkBox_6_clicked()
{
    check[ui->comboBox->currentIndex()][6]=ui->checkBox_6->isChecked();
}

void MainWindow::on_checkBox_7_clicked()
{
    check[ui->comboBox->currentIndex()][7]=ui->checkBox_7->isChecked();
}

void MainWindow::on_checkBox_8_clicked()
{
    check[ui->comboBox->currentIndex()][8]=ui->checkBox_8->isChecked();
}

void MainWindow::on_checkBox_9_clicked()
{
    check[ui->comboBox->currentIndex()][9]=ui->checkBox_9->isChecked();
}
