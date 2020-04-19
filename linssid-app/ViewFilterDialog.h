/* 
 * File:   ViewFilterDialog.h
 * Author: chunmeng
 */

#ifndef _VIEWFILTERDIALOG_H
#define	_VIEWFILTERDIALOG_H

#include "ui_ViewFilterDialog.h"

class ViewFilterDialog : public QWidget {
    Q_OBJECT
public:
    ViewFilterDialog(QWidget *parent, QObject* filterProxy);
    virtual ~ViewFilterDialog();

public slots:
    void bandChanged(int);

signals:
    void bandChanged(bool, bool);
private:
    Ui::ViewFilterDialog widget;
};

#endif	/* _VIEWFILTERDIALOG_H */
