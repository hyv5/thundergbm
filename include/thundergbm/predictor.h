//
// Created by zeyi on 1/12/19.
//

#ifndef THUNDERGBM_PREDICTOR_H
#define THUNDERGBM_PREDICTOR_H

#include "thundergbm/tree.h"
#include <thundergbm/dataset.h>

class Predictor{
public:
    vector<float_type> predict(const GBMParam &model_param, const vector<vector<Tree>> &boosted_model, const DataSet &dataSet);
};

#endif //THUNDERGBM_PREDICTOR_H
