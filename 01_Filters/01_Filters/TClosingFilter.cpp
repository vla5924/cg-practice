#include "TClosingFilter.h"

TClosingFilter::TClosingFilter(int radius) : TMorphologyFilter(radius)
{
    dilation = TDilationFilter(radius);
    erosion = TErosionFilter(radius);
}

TClosingFilter::TClosingFilter(const std::vector<bool>& mask) : TMorphologyFilter(mask)
{
    dilation = TDilationFilter(mask);
    erosion = TErosionFilter(mask);
}

QImage TClosingFilter::applyToImage(const QImage& image)
{
    QImage filteredImage = dilation.applyToImage(image);
    filteredImage = erosion.applyToImage(filteredImage);
    return filteredImage;
}