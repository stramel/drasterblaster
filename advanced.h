#ifndef ADVANCED_H
#define ADVANCED_H

#include <QMainWindow>
#include <sharedptr.hh>
#include <projectedraster.hh>

namespace Ui {
class Advanced;
}

class Advanced : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Advanced(QWidget *parent = 0);
    ~Advanced();
    
private:
    Ui::Advanced *ui;
    void prepareUi();
    shared_ptr<ProjectedRaster> in, out;
    shared_ptr<Projection> in_proj, out_proj;
    void fillForm();

private slots:
    void openRaster();
    void saveReprojection();
    void loadParams();
    void saveParams();
    void togglePreview();
    void fillEnable(int);
    void noDataEnable(int);
};

#endif // ADVANCED_H
