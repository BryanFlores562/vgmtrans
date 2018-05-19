/*
* VGMTrans (c) 2018
* Licensed under the zlib license,
* refer to the included LICENSE.txt file
*/

#include <QAbstractListModel>
#include <QEvent>
#include <QListView>

#include "VGMFileView.h"

#ifndef __VGMFileListView_H_
#define __VGMFileListView_H_


class VGMFileListViewModel : public QAbstractListModel
{
    Q_OBJECT

public:
    VGMFileListViewModel(QObject *parent = nullptr);
    int rowCount (const QModelIndex & parent = QModelIndex()) const;
    QVariant data (const QModelIndex & index, int role = Qt::DisplayRole) const;

public slots:
    void changedVGMFiles();

};

class VGMFileListView : public QListView
{
    Q_OBJECT

public:
    VGMFileListView(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent* input);

public slots:
    void doubleClickedSlot(QModelIndex);

signals:
    void AddMdiTab(QWidget* vgm_file, Qt::WindowFlags flags);
};


#endif //__VGMFileListView_H_
