// ChangeDetect.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "gdal_priv.h"

using namespace cv;

int main()
{
	Mat a;
	GDALAllRegister();
	CPLSetConfigOption("GDAL_FILENAME_IS_UTF8", "NO");

    return 0;
}

