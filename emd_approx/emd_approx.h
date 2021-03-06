#pragma once
#ifndef EMD_APPROX_H
#define EMD_APPROX_H

#include "init.h"
#include "emd.h"
#include "exact_emd.h"
#include "LB_Proj.h"
#include "LB_IM.h"
#include "UB_G.h"
#include "UB_H.h"
#include "LB_dimRed.h"

//void run_emd_approx(char*dataFileName, char*pairFileName, char*groundFileName, char*resultFileName, int method);
void run_emd_approx(char*dataFileName, char*pairFileName, char*groundFileName, char*resultFileName, emd_struct& my_emd);

#endif
