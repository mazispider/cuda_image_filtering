#ifndef POSTPROCESSING_KERNEL_H
#define POSTPROCESSING_KERNEL_H

//
// Block and thread sizes for posprocessing
//
const unsigned int POSTPROCESSING_BLOCK_W = 32;
const unsigned int POSTPROCESSING_BLOCK_H = 32;

const unsigned int POSTPROCESSING_THREAD_BLOCK_W = POSTPROCESSING_BLOCK_W;
const unsigned int POSTPROCESSING_THREAD_BLOCK_H = POSTPROCESSING_BLOCK_H;

#endif // POSTPROCESSING_KERNEL_H