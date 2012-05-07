#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    void CreateConnections();

private slots:
    void openRaster();
    void saveReprojection();
    void loadProjectionInfo();
    void saveProjectionInfo();
    void togglePreview();
    void userGuide();
    void editAuthor();
    void about();
    void aboutQt();
    void editInputParams(int);
    void fillEnable(int);
    void noDataEnabale(int);
};

#endif // MAINWINDOW_H
