
// PubSubTest.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CPubSubTestApp:
// �� Ŭ������ ������ ���ؼ��� PubSubTest.cpp�� �����Ͻʽÿ�.
//

class CPubSubTestApp : public CWinAppEx
{
public:
	CPubSubTestApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CPubSubTestApp theApp;