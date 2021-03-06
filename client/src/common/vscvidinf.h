#ifndef __VSC_VID_INF_H__
#define __VSC_VID_INF_H__

#include <QWidget>
#include "utility.hpp"
#include <QTimer>
#include <QMovie>
#include <QtWidgets/QMainWindow>
#include "client/clientfactory.hpp"
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include "common/vscvidtreeinf.h"

class VSCVidInf : public QObject
{
    Q_OBJECT
public:
    VSCVidInf(ClientFactory &pFactory, QMainWindow *parent);
    ~VSCVidInf();
	
public slots:
	void SlotNewLiveView(){return VidNewLiveView();}
	void SlotNewEmap(){return VidNewEmap();}
	
public:
	virtual void VidShow(){}
	virtual void VidHide(){}
	virtual void VidNewLiveView(){}
	virtual void VidNewEmap(){}
	virtual VSCVidTreeInf *GetCameraTree (){return NULL;}
	virtual VSCVidTreeInf *GetGroupTree (){return NULL;}
	virtual VSCVidTreeInf *GetEmapTree (){return NULL;}
	virtual VSCVidTreeInf *GetViewTree (){return NULL;}

protected:
	ClientFactory &m_pFactory;
	QMainWindow *m_parent;
};

#endif