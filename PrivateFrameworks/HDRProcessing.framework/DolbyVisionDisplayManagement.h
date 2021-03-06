/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
 */

@interface DolbyVisionDisplayManagement : NSObject {
    <MTLBuffer> * _config;
    <MTLLibrary> * _defaultLibrary;
    <MTLDeviceSPI> * _device;
    <MTLComputePipelineState> * _displayManagementKernel;
    <MTLTexture> * _inputUVTexture;
    <MTLTexture> * _inputYTexture;
    <MTLTexture> * _outputTexture;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 Input:(struct __IOSurface { }*)arg2 Output:(struct __IOSurface { }*)arg3 MetaData:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5[9]; unsigned int x6[3]; int x7[9]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; struct { unsigned short x_20_1_1; unsigned short x_20_1_2; unsigned short x_20_1_3; unsigned short x_20_1_4; } x20; struct { unsigned short x_21_1_1; unsigned short x_21_1_2; unsigned short x_21_1_3; unsigned short x_21_1_4; unsigned short x_21_1_5; unsigned short x_21_1_6; unsigned short x_21_1_7; short x_21_1_8; } x21[16]; struct { unsigned short x_22_1_1; unsigned short x_22_1_2; unsigned short x_22_1_3; } x22; struct { unsigned short x_23_1_1; unsigned short x_23_1_2; unsigned short x_23_1_3; unsigned short x_23_1_4; unsigned short x_23_1_5; } x23; struct { unsigned short x_24_1_1; unsigned short x_24_1_2; unsigned short x_24_1_3; unsigned short x_24_1_4; unsigned short x_24_1_5; } x24; }*)arg4 tcControl:(struct ToneCurve_Control { double x1; float x2; float x3; float x4; float x5; bool x6; struct __CFString {} *x7; unsigned int x8; float x9; float x10; float x11; float x12; float x13; }*)arg5 hdrControl:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; float x10[9]; float x11[9]; unsigned int x12; float x13; }*)arg6;
- (id)initWithDevice:(id)arg1;
- (void)setupMetal;
- (void)setupTexturesWithInput:(struct __IOSurface { }*)arg1 Output:(struct __IOSurface { }*)arg2;

@end
