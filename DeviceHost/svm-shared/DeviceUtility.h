/**
 * devUtility.h
 * @brief: This file contains InitCUDA() function and a reducer class CReducer
 * Created on: May 24, 2012
 * Author: Zeyi Wen
 * Copyright @DBGroup University of Melbourne
 **/

#ifndef SVM_DEVUTILITY_H_
#define SVM_DEVUTILITY_H_
//include files from the gpu sdk
#include <cuda_runtime.h>
#include "../../DeviceHost/DefineConst.h"

__device__ void GetMinValueOriginal(float_point*, int*, int);
__device__ void GetMinValueOriginal(float_point*, int);

__device__ void GetMinValue(float_point*, int*, int);
__device__ void GetMinValue(float_point*, int);


//__device__ void GetBigMinValue(float_point*, int*);
//__device__ void GetBigMinValue(float_point*);

__device__ void GetGlobalMinPreprocessing(int nArraySize, const float_point *pfBlockMinValue, const int *pnBlockMinKey,
		  	  	  	  	  	  	  	  	  float_point *pfSharedMinValue, int *pnSharedMinKey);
__device__ void LoadToSharedMem(int nArraySize, int gainStartPos,
								const float_point *pfBlockMinValue, const int *pnBlockMinKey,
		  	  	  	  	  	    float_point *pfSharedMinValue, int *pnSharedMinKey);

#endif /* SVM_DEVUTILITY_H_ */