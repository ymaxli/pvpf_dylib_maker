#include "algorithm.h"

#include "opencv2/core/core.hpp"

using namespace pvpf;

void test1(data_bucket &data, data_bucket const &params) {
    auto image = data.get_ptr<cv::Mat>("image");
    data.put("result", *image);
}

void test2(data_bucket &data, data_bucket const &params) {
    data.put("result", params.get_copy<int>("p"));
}