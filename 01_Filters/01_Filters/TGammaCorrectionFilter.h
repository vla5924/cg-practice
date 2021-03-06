#pragma once
#include "TCorrectionFilter.h"

class TGammaCorrectionFilter : public TCorrectionFilter
{
protected:
    float gamma;
    float coefficient;
    enum metric { };
    virtual QColor caclulatePixelColor(QColor color, const std::vector<float>& metrics);
    virtual std::vector<float> calculateMetrics(const QImage& image);
public:
    explicit TGammaCorrectionFilter(float gamma_ = 1.0f, float coefficient_ = 1.0f);
};