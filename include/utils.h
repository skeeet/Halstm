/**
 * @file utils.h
 * @brief Prototypes for utils.
 *
 * @author misaka-10032 (longqic@andrew.cmu.edu)
 */

#ifndef HALSTM_UTILS_H
#define HALSTM_UTILS_H

#include <Halide.h>
#include "caffe/blob.hpp"

using caffe::Blob;
using Halide::Image;
using std::cout;
using std::endl;

void blobToImage(Blob<float>& blob, Image<float>& image);
bool blobEqImage(const Blob<float>& blob, const Image<float>& image);
void fillImage(Image<float>& image, float v);

#endif // HALSTM_UTILS_H