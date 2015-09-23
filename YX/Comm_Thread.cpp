// Comm_Thread.cpp : implementation file
//

#include "stdafx.h"
#include "O.h"
#include "PCOMM.H"
#include "ODlg.h"
#include "Comm_Thread.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CComm_Thread
unsigned char aucCRCHi[]=
{
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
	0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
	0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
	0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,
	0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
	0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,
	0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
	0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0xC1, 0x81, 0x40,
	0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0, 0x80, 0x41, 0x00, 0xC1,
	0x81, 0x40, 0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41,
	0x00, 0xC1, 0x81, 0x40, 0x01, 0xC0, 0x80, 0x41, 0x01, 0xC0,
	0x80, 0x41, 0x00, 0xC1, 0x81, 0x40, 0x00, 0x00, 0x00, 0x00
};

unsigned char aucCRCLo[]=
{
	0x00, 0xC0, 0xC1, 0x01, 0xC3, 0x03, 0x02, 0xC2, 0xC6, 0x06,
	0x07, 0xC7, 0x05, 0xC5, 0xC4, 0x04, 0xCC, 0x0C, 0x0D, 0xCD,
	0x0F, 0xCF, 0xCE, 0x0E, 0x0A, 0xCA, 0xCB, 0x0B, 0xC9, 0x09,
	0x08, 0xC8, 0xD8, 0x18, 0x19, 0xD9, 0x1B, 0xDB, 0xDA, 0x1A,
	0x1E, 0xDE, 0xDF, 0x1F, 0xDD, 0x1D, 0x1C, 0xDC, 0x14, 0xD4,
	0xD5, 0x15, 0xD7, 0x17, 0x16, 0xD6, 0xD2, 0x12, 0x13, 0xD3,
	0x11, 0xD1, 0xD0, 0x10, 0xF0, 0x30, 0x31, 0xF1, 0x33, 0xF3,
	0xF2, 0x32, 0x36, 0xF6, 0xF7, 0x37, 0xF5, 0x35, 0x34, 0xF4,
	0x3C, 0xFC, 0xFD, 0x3D, 0xFF, 0x3F, 0x3E, 0xFE, 0xFA, 0x3A,
	0x3B, 0xFB, 0x39, 0xF9, 0xF8, 0x38, 0x28, 0xE8, 0xE9, 0x29,
	0xEB, 0x2B, 0x2A, 0xEA, 0xEE, 0x2E, 0x2F, 0xEF, 0x2D, 0xED,
	0xEC, 0x2C, 0xE4, 0x24, 0x25, 0xE5, 0x27, 0xE7, 0xE6, 0x26,
	0x22, 0xE2, 0xE3, 0x23, 0xE1, 0x21, 0x20, 0xE0, 0xA0, 0x60,
	0x61, 0xA1, 0x63, 0xA3, 0xA2, 0x62, 0x66, 0xA6, 0xA7, 0x67,
	0xA5, 0x65, 0x64, 0xA4, 0x6C, 0xAC, 0xAD, 0x6D, 0xAF, 0x6F,
	0x6E, 0xAE, 0xAA, 0x6A, 0x6B, 0xAB, 0x69, 0xA9, 0xA8, 0x68,
	0x78, 0xB8, 0xB9, 0x79, 0xBB, 0x7B, 0x7A, 0xBA, 0xBE, 0x7E,
	0x7F, 0xBF, 0x7D, 0xBD, 0xBC, 0x7C, 0xB4, 0x74, 0x75, 0xB5,
	0x77, 0xB7, 0xB6, 0x76, 0x72, 0xB2, 0xB3, 0x73, 0xB1, 0x71,
	0x70, 0xB0, 0x50, 0x90, 0x91, 0x51, 0x93, 0x53, 0x52, 0x92,
	0x96, 0x56, 0x57, 0x97, 0x55, 0x95, 0x94, 0x54, 0x9C, 0x5C,
	0x5D, 0x9D, 0x5F, 0x9F, 0x9E, 0x5E, 0x5A, 0x9A, 0x9B, 0x5B,
	0x99, 0x59, 0x58, 0x98, 0x88, 0x48, 0x49, 0x89, 0x4B, 0x8B,
	0x8A, 0x4A, 0x4E, 0x8E, 0x8F, 0x4F, 0x8D, 0x4D, 0x4C, 0x8C,
	0x44, 0x84, 0x85, 0x45, 0x87, 0x47, 0x46, 0x86, 0x82, 0x42,
	0x43, 0x83, 0x41, 0x81, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00
};

void CComm_Thread::CRC16(unsigned char* pushMsg, int DataLength, unsigned char* crc)
{
	unsigned char ucCRCHi=0xFF;
	unsigned char ucCRCLo=0xFF;

	unsigned char ucIndex;
	while(DataLength--)
	{
		ucIndex=ucCRCHi^*pushMsg++;
		ucCRCHi=ucCRCLo^ aucCRCHi[ucIndex];
		ucCRCLo=aucCRCLo[ucIndex];
	}
	*crc    =ucCRCHi;
	*(crc+1)=ucCRCLo;
}
/////////////////////////////////////////////////////////////////////////////
IMPLEMENT_DYNCREATE(CComm_Thread, CWinThread)

CComm_Thread::CComm_Thread()
{
	memset(CommMsgS,0,sizeof(CommMsgS));
	memset(CommMsgR,0,sizeof(CommMsgR));
	xLength=0;
	bOutComm=false;
	CommLink=false;
}

CComm_Thread::~CComm_Thread()
{
}

BOOL CComm_Thread::InitInstance()
{
	// TODO:  perform and per-thread initialization here
	return TRUE;
}

int CComm_Thread::ExitInstance()
{
	// TODO:  perform any per-thread cleanup here
	return CWinThread::ExitInstance();
}

BEGIN_MESSAGE_MAP(CComm_Thread, CWinThread)
	//{{AFX_MSG_MAP(CComm_Thread)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		ON_MESSAGE(WM_MSGCOMMSND,MsgCommSnd)
		ON_MESSAGE(WM_MSGCOMMBTN,MsgCommBtn)
	//}}AFX_MSG_MAP

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CComm_Thread message handlers

//检测串口状态
void CComm_Thread::MsgCommBtn(WPARAM wParam,LPARAM lParam)
{
	COApp* pApp=(COApp*)AfxGetApp();
	unsigned char ucTemp=lParam&0xFF;

	if(ucTemp==0xAA)
	{
		CommLink=Init_ComPort();
		if(!CommLink)
		{
			SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x06,0x00);
		}
	}
	else
	{
		Exit_ComPort();
		CommLink=false;
	}

}

//初始化端口
BOOL CComm_Thread::Init_ComPort()
{
	COApp* pApp=(COApp*)AfxGetApp();
	unsigned int x_Baud[]={B300,B600,B1200,B2400,B4800,B9600,B19200,B38400,B57600};

	if(CommLink)
		return false;

	if(sio_open(pApp->x_Port)!=0)
		return false;

	sio_ioctl(pApp->x_Port,x_Baud[pApp->x_Order],P_NONE|BIT_8|STOP_1);
	sio_SetReadTimeouts(pApp->x_Port,200,200);
	sio_flush(pApp->x_Port,2);

	return true;
}

//释放端口
void CComm_Thread::Exit_ComPort()
{
	COApp* pApp=(COApp*)AfxGetApp();
	CommLink=false;
	sio_close(pApp->x_Port);
}

BOOL CComm_Thread::CommSend(unsigned char *mdata,int mLength)
{
	COApp* pApp=(COApp*)AfxGetApp();
	sio_write(pApp->x_Port,(char*)mdata,mLength);
	return true;
}

//嗅探模式读取应答通讯报文
int CComm_Thread::CommRecv(unsigned char *m_data)
{
	COApp * pApp = (COApp *)AfxGetApp();
	unsigned char x_ucLength;
	unsigned char x_ucDataR[100],x_ucCrc[2];

	//数据缓存初始化
	x_ucLength = 0;
	memset(x_ucCrc,0,sizeof(x_ucCrc));
	memset(x_ucDataR,0,sizeof(x_ucDataR));

	//开始进行嗅探读取数据
	for(int k1=0; k1<10; k1++)
	{
		if(sio_read(pApp->x_Port,(char *)x_ucDataR,1) > 0)
			break;
		Sleep(10);
	}

	//嗅探失败退出
	if(k1 >=10)
	{
		pApp->test.Format("嗅探失败!");
		SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x10,0x00);
		return x_ucLength;
	}

	//提取应答命令中的命令码，判断数据长度
	if(sio_read(pApp->x_Port,(char *)&x_ucDataR[1],1) != 1)
		return x_ucLength;

	//根据命令码的不同，读取相应的后续内容数据
	switch(x_ucDataR[1])
	{
	case 0x03:  //数据提取
		//读取数据长度
		if(sio_read(pApp->x_Port,(char *)&x_ucDataR[2],1) == 1)
		{
			//判断数据是否超界
			if(x_ucDataR[2] > 100)
			{
				sio_flush(pApp->x_Port,2);
				return 0;
			}
			//读取后续数据
			x_ucLength = x_ucDataR[2]+2;
			if(sio_read(pApp->x_Port,(char *)&x_ucDataR[3],x_ucLength) == x_ucLength)
			{//应答长度合法
				x_ucLength += 3;
				//数据读取完毕，校验数据
				CRC16(x_ucDataR,x_ucLength-2,x_ucCrc);
				if((x_ucDataR[x_ucLength-2] != x_ucCrc[0]) || (x_ucDataR[x_ucLength-1] != x_ucCrc[1]))
				{
					pApp->test.Format("校验错误!");
					SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x10,0x00);
					x_ucLength = 0;
				}
			}
			else
			{//应答长度非法
				x_ucLength = 0;
			}
		}
		break;
	case 0x10:  //参数设定
		if(sio_read(pApp->x_Port,(char *)&x_ucDataR[2],6) == 6)
		{//长度合法
			x_ucLength = 8;

			//数据读取完毕，校验数据
			CRC16(x_ucDataR,x_ucLength-2,x_ucCrc);
			if((x_ucDataR[x_ucLength-2] != x_ucCrc[0]) || (x_ucDataR[x_ucLength-1] != x_ucCrc[1]))
			{
				pApp->test.Format("校验错误!");
				SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x10,0x00);
				x_ucLength = 0;
			}
		}
		break;
	default:
		x_ucLength = 0;
		break;
	}

	//拷贝输出应答报文
	memcpy(m_data,x_ucDataR,x_ucLength);

	//TEST
	//pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X",x_ucDataR[0],x_ucDataR[1],x_ucDataR[2],x_ucDataR[3],x_ucDataR[4],x_ucDataR[5],x_ucDataR[6],x_ucDataR[7]);
	//SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);
	//TEST

	//清除缓冲区内的垃圾
	sio_flush(pApp->x_Port,2);

	return x_ucLength;
}

void CComm_Thread::MsgCommSnd(WPARAM wParam,LPARAM lParam)
{
	COApp* pApp=(COApp*)AfxGetApp();
	unsigned char ucSwch=lParam & 0xFF;
	memset(CommMsgS,0,sizeof(CommMsgS));

	switch(ucSwch)
	{
	case 0x00:
		{
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x03;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x05;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x01;
			CRC16(CommMsgS,6,&CommMsgS[6]);
			xLength=8;
			bOutComm=true;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
			break;
		}
	case 0x01://提取版本号
		{
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x03;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x03;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x02;
			CRC16(CommMsgS,6,&CommMsgS[6]);
			xLength=8;
			bOutComm=true;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
			break;
		}
	case 0x02://提取实时时钟
		{
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x03;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x02;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x04;
			CRC16(CommMsgS,6,&CommMsgS[6]);
			bOutComm=true;
			xLength=8;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
			break;
		}
	case 0x03://设定实时时钟
		{
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x10;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x01;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x04;
			CommMsgS[6]=0x08;
			CommMsgS[7]=atoi(pApp->year);
			CommMsgS[8]=atoi(pApp->month);
			CommMsgS[9]=atoi(pApp->day);
			CommMsgS[10]=pApp->hour;
			CommMsgS[11]=pApp->minute;
			CommMsgS[12]=pApp->second;
			CommMsgS[13]=0x00;
			CommMsgS[14]=0x00;
			CRC16(CommMsgS,15,&CommMsgS[15]);
			bOutComm=true;
			xLength=17;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7],CommMsgS[8],CommMsgS[9],CommMsgS[10],CommMsgS[11],CommMsgS[12],CommMsgS[13],CommMsgS[14],CommMsgS[15],CommMsgS[16]);
			break;
		}
	case 0x04://设定防抖时间
		{
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x10;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x03;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x24;
			CommMsgS[6]=0x48;
			for(int a=7,b=0;b<36;a+=2,b++)
			{
				CommMsgS[a]=pApp->JH[b];
				CommMsgS[a+1]=pApp->JL[b];
			}
			CRC16(CommMsgS,79,&CommMsgS[79]);
			bOutComm=true;
			xLength=81;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7],CommMsgS[8],CommMsgS[9],CommMsgS[10],CommMsgS[11],CommMsgS[12],CommMsgS[13],CommMsgS[14],CommMsgS[15],CommMsgS[16],CommMsgS[17],CommMsgS[18],CommMsgS[19],CommMsgS[20],CommMsgS[21],CommMsgS[22],CommMsgS[23],CommMsgS[24],CommMsgS[25],CommMsgS[26],CommMsgS[27],CommMsgS[28],CommMsgS[29],CommMsgS[30],CommMsgS[31],CommMsgS[32],CommMsgS[33],CommMsgS[34],CommMsgS[35],CommMsgS[36],CommMsgS[37],CommMsgS[38],CommMsgS[39],CommMsgS[40],CommMsgS[41],CommMsgS[42],CommMsgS[43],CommMsgS[44],CommMsgS[45],CommMsgS[46],CommMsgS[47],CommMsgS[48],CommMsgS[49],CommMsgS[50],CommMsgS[51],CommMsgS[52],CommMsgS[53],CommMsgS[54],CommMsgS[55],CommMsgS[56],CommMsgS[57],CommMsgS[58],CommMsgS[59],CommMsgS[60],CommMsgS[61],CommMsgS[62],CommMsgS[63],CommMsgS[64],CommMsgS[65],CommMsgS[66],CommMsgS[67],CommMsgS[68],CommMsgS[69],CommMsgS[70],CommMsgS[71],CommMsgS[72],CommMsgS[73],CommMsgS[74],CommMsgS[75],CommMsgS[76],CommMsgS[77],CommMsgS[78],CommMsgS[78],CommMsgS[80]);
			break;
		}
	case 0x05://提取事件记录
		{	
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x03;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x01;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x07;
			CRC16(CommMsgS,6,&CommMsgS[6]);
			bOutComm=true;
			xLength=8;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
			break;
		}
	case 0x06://提取防抖时间
		{
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x03;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x04;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x24;
			CRC16(CommMsgS,6,&CommMsgS[6]);
			bOutComm=true;
			xLength=8;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
			break;
		}
	case 0x07://清除事件记录
		{
			CommMsgS[0]=0xFF;
			CommMsgS[1]=0x10;
			CommMsgS[2]=0x00;
			CommMsgS[3]=0x02;
			CommMsgS[4]=0x00;
			CommMsgS[5]=0x01;
			CommMsgS[6]=0x02;
			CommMsgS[7]=0x55;
			CommMsgS[8]=0x55;
			CRC16(CommMsgS,9,&CommMsgS[9]);
			bOutComm=true;
			xLength=11;
			pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7],CommMsgS[8],CommMsgS[9],CommMsgS[10]);
			break;
		}
	}
}

BOOL CComm_Thread::OnIdle(LONG lCount) 
{
	// TODO: Add your specialized code here and/or call the base class

	COApp* pApp=(COApp*)AfxGetApp();
	unsigned char ucAddr;
	static BOOL AorB=true;
	memset(CommMsgR,0,sizeof(CommMsgR));

	if(CommLink)
	{
		if(pApp->x_stop)
		{//冻结屏幕
			if(pApp->ChkClock)
			{//关闭其他功能，只提取遥信时钟
				if(bOutComm)
				{
					CommSend(CommMsgS,xLength);
					ucAddr=CommMsgS[2]*256+CommMsgS[3];
					bOutComm=false;
					SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x11,0x00);
				}
				else//实时询问报文
				{//询问开入状态
					if((pApp->ChkOff && (pApp->uiLed[5] & 0x08)) || pApp->ChkOn)
					{//自动提取事件
						if(AorB && pApp->B)
						{//提取开入信号
							CommMsgS[0]=0xFF;
							CommMsgS[1]=0x03;
							CommMsgS[2]=0x00;
							CommMsgS[3]=0x00;
							CommMsgS[4]=0x00;
							CommMsgS[5]=0x03;
							CRC16(CommMsgS,6,&CommMsgS[6]);

							pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
							AorB=!AorB;
						}
						else
						{//提取事件
							CommMsgS[0]=0xFF;
							CommMsgS[1]=0x03;
							CommMsgS[2]=0x00;
							CommMsgS[3]=0x01;
							CommMsgS[4]=0x00;
							CommMsgS[5]=0x07;
							CRC16(CommMsgS,6,&CommMsgS[6]);
							pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
							AorB=!AorB;
							if(!(pApp->uiLed[5] & 0x08))
							{
								pApp->NewEvent1=true;
							}
						}
					}
					else
					{//只提取开入信号
						CommMsgS[0]=0xFF;
						CommMsgS[1]=0x03;
						CommMsgS[2]=0x00;
						CommMsgS[3]=0x00;
						CommMsgS[4]=0x00;
						CommMsgS[5]=0x03;
						CRC16(CommMsgS,6,&CommMsgS[6]);

						pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);

					}

					CommSend(CommMsgS,8);
					ucAddr=CommMsgS[2]*256+CommMsgS[3];
					SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x11,0x00);
				}
			}
			else
			{//提取时钟
				CommMsgS[0]=0xFF;
				CommMsgS[1]=0x03;
				CommMsgS[2]=0x00;
				CommMsgS[3]=0x02;
				CommMsgS[4]=0x00;
				CommMsgS[5]=0x04;
				CRC16(CommMsgS,6,&CommMsgS[6]);
				pApp->test.Format("发送报文: → %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7]);
				CommSend(CommMsgS,8);
				ucAddr=CommMsgS[2]*256+CommMsgS[3];
				SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x11,0x00);
			}

			if(CommRecv(CommMsgR))
			{
				switch(CommMsgR[1])
				{
				case 0x03:
					switch(ucAddr)
					{
					case 0:
						{//开入信号状态响应
							pApp->uiLed[0]=CommMsgR[3];
							pApp->uiLed[1]=CommMsgR[4];
							pApp->uiLed[2]=CommMsgR[5];
							pApp->uiLed[3]=CommMsgR[6];
							pApp->uiLed[4]=CommMsgR[7];
							pApp->uiLed[5]=CommMsgR[8];	

							//判断故障事件
							if(pApp->NewEvent1)
							{//有新的事件记录
								if(pApp->uiLed[5] & 0x08)
								{
									pApp->NewEvent1=false;
									if(!pApp->ChkOff)
									{
										SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x12,0x00);
									}
								}
							}
							if(pApp->NewEvent2)
							{//板卡故障1
								if(pApp->uiLed[5] & 0x10)
								{
									pApp->NewEvent2=false;
									SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x13,0x00);
								}
							}
							if(pApp->NewEvent3)
							{//板卡故障2
								if(pApp->uiLed[5] & 0x20)
								{
									pApp->NewEvent3=false;
									SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x14,0x00);
								}
							}
							if(pApp->NewEvent4)
							{//板卡故障3
								if(pApp->uiLed[5] & 0x40)
								{
									pApp->NewEvent4=false;
									SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x15,0x00);
								}
							}
							if(pApp->NewEvent5)
							{//板卡故障4
								if(pApp->uiLed[5] & 0x80)
								{
									pApp->NewEvent5=false;
									SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x16,0x00);
								}
							}
							pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7],CommMsgR[8],CommMsgR[9],CommMsgR[10]);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);
							break;
						}
					case 1://提取事件记录响应
						{
							if(CommMsgR[2]==0x0E)
							{//有新事件
								pApp->NoneEvent=true;
								if(pApp->bEnum)
								{
									pApp->Enum=0;
									pApp->bEnum=false;
								}
								pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7],CommMsgR[8],CommMsgR[9],CommMsgR[10],CommMsgR[11],CommMsgR[12],CommMsgR[13],CommMsgR[14],CommMsgR[15],CommMsgR[16],CommMsgR[17],CommMsgR[18]);
								SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);
								pApp->MilliSecondH=(CommMsgR[11])*256+(CommMsgR[12]);
								if(CommMsgR[4]==0x55)
								{
									pApp->test.Format("第 %02d 路产生变位,变位类型: 0->1 (上升沿),变位时间: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒\r\n",CommMsgR[3],CommMsgR[5]+2000,CommMsgR[6],CommMsgR[7],CommMsgR[8],CommMsgR[9],CommMsgR[10],pApp->MilliSecondH);
								}
								if(CommMsgR[4]==0xAA)
								{
									pApp->test.Format("第 %02d 路产生变位,变位类型: 1->0 (下降沿),变位时间: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒\r\n",CommMsgR[3],CommMsgR[5]+2000,CommMsgR[6],CommMsgR[7],CommMsgR[8],CommMsgR[9],CommMsgR[10],pApp->MilliSecondH);
								}
								if(CommMsgR[4]!=0x55 && CommMsgR[4]!=0xAA)
								{
									pApp->test.Format("提取事件失败!\r\n");
								}
								SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x01,0x00);
							}
							else
							{//无事件记录
								pApp->NewEvent1=true;
								pApp->NewEvent2=true;
								pApp->NewEvent3=true;
								pApp->NewEvent4=true;
								pApp->NewEvent5=true;
								pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4]);
								pApp->bEnum=true;
								pApp->ChkOn=false;
								pApp->B=true;
								SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);
								if(pApp->NoneEvent)
								{
									pApp->NoneEvent=false;
									SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x09,0x00);
								}
							}
							break;
						}
					case 2://提取实时时钟响应
						{
							pApp->Year=CommMsgR[3];
							pApp->Month=CommMsgR[4];
							pApp->Day=CommMsgR[5];
							pApp->Hour=CommMsgR[6];
							pApp->Minute=CommMsgR[7];
							pApp->Second=CommMsgR[8];
							pApp->MilliSecondH=(CommMsgR[9])*256+(CommMsgR[10]);	
							pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7],CommMsgR[8],CommMsgR[9],CommMsgR[10],CommMsgR[11],CommMsgR[12]);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x02,0x00);
							//提取遥信时钟
							if(!pApp->ChkClock)
							{
								pApp->test.Format("遥信时钟: %d年%02d月%02d日%02d时%02d分%02d秒%03d毫秒\r\n",pApp->Year+2000,pApp->Month,pApp->Day,pApp->Hour,pApp->Minute,pApp->Second,pApp->MilliSecondH);
								SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x18,0x00);
								Sleep(180);
							}
							break;
						}
					case 3://提取软件版本号响应
						{
							pApp->edition=(float(CommMsgR[3]*256+CommMsgR[4]))/100;
							pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7],CommMsgR[8]);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x03,0x00);
							break;
						}
					case 4://提取防抖时间响应
						{
							for(int m=0,n=3;m<36;n+=2,m++)
							{
								pApp->JH[m]=CommMsgR[n];
								pApp->JL[m]=CommMsgR[n+1];
							}
							pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgS[0],CommMsgS[1],CommMsgS[2],CommMsgS[3],CommMsgS[4],CommMsgS[5],CommMsgS[6],CommMsgS[7],CommMsgS[8],CommMsgS[9],CommMsgS[10],CommMsgS[11],CommMsgS[12],CommMsgS[13],CommMsgS[14],CommMsgS[15],CommMsgS[16],CommMsgS[17],CommMsgS[18],CommMsgS[19],CommMsgS[20],CommMsgS[21],CommMsgS[22],CommMsgS[23],CommMsgS[24],CommMsgS[25],CommMsgS[26],CommMsgS[27],CommMsgS[28],CommMsgS[29],CommMsgS[30],CommMsgS[31],CommMsgS[32],CommMsgS[33],CommMsgS[34],CommMsgS[35],CommMsgS[36],CommMsgS[37],CommMsgS[38],CommMsgS[39],CommMsgS[40],CommMsgS[41],CommMsgS[42],CommMsgS[43],CommMsgS[44],CommMsgS[45],CommMsgS[46],CommMsgS[47],CommMsgS[48],CommMsgS[49],CommMsgS[50],CommMsgS[51],CommMsgS[52],CommMsgS[53],CommMsgS[54],CommMsgS[55],CommMsgS[56],CommMsgS[57],CommMsgS[58],CommMsgS[59],CommMsgS[60],CommMsgS[61],CommMsgS[62],CommMsgS[63],CommMsgS[64],CommMsgS[65],CommMsgS[66],CommMsgS[67],CommMsgS[68],CommMsgS[69],CommMsgS[70],CommMsgS[71],CommMsgS[72],CommMsgS[73],CommMsgS[74],CommMsgS[75],CommMsgS[76]);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);						
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x07,0x00);
							break;
						}
					case 5:
						{
							pApp->x_Address=CommMsgR[3];
							pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6]);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x00,0x00);
							break;
						}
					}
					break;
				case 0x10:
					switch(ucAddr)
					{
					case 1://设定实时时钟响应
						pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7]);
						SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);						
						SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x04,0x00);
						break;
					case 2://清除事件记录响应
						{
							pApp->NewEvent1=true;
							pApp->NewEvent2=true;
							pApp->NewEvent3=true;
							pApp->NewEvent4=true;
							pApp->NewEvent5=true;
							pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7]);
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);						
							SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x08,0x00);
							break;
						}
					case 3://设定防抖时间响应
						pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7]);
						SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);						
						SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x05,0x00);	
						break;
					}
					break;				
				default:
					{
						pApp->test.Format("收到报文: ← %02X %02X %02X %02X %02X %02X %02X %02X",CommMsgR[0],CommMsgR[1],CommMsgR[2],CommMsgR[3],CommMsgR[4],CommMsgR[5],CommMsgR[6],CommMsgR[7]);
						SendMessage(pApp->m_pMainWnd->m_hWnd,WM_MSGCOMMANS,0x17,0x00);
						break;
					}
				}
			}
		}
		//计算报文收发成功率
		pApp->pbt=((float(pApp->Rnum))/(float(pApp->Snum)))*100;
		Sleep(20);
		return true;
	}
}
