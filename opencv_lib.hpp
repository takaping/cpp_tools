// opencv_lib.hpp
// For limk OpenCV libraries

#pragma once

#include <opencv2/core/version.hpp>

#define CV_VER	CVAUX_STR(CV_MAJOR_VERSION) CVAUX_STR(CV_MINOR_VERSION) CVAUX_STR(CV_SUBMINOR_VERSION)

#ifdef _DEBUG
#define CV_EXT	"d.lib"
#else
#define CV_EXT	".lib"
#endif // _DEBUG

#pragma comment(lib, "opencv_aruco" CV_VER CV_EXT)
#pragma comment(lib, "opencv_bgsegm" CV_VER CV_EXT)
#pragma comment(lib, "opencv_bioinspired" CV_VER CV_EXT)
#pragma comment(lib, "opencv_calib3d" CV_VER CV_EXT)
#pragma comment(lib, "opencv_ccalib" CV_VER CV_EXT)
#pragma comment(lib, "opencv_core" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudaarithm" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudabgsegm" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudacodec" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudafeatures2d" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudafilters" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudaimgproc" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudalegacy" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudaobjdetect" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudaoptflow" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudastereo" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudawarping" CV_VER CV_EXT)
#pragma comment(lib, "opencv_cudev" CV_VER CV_EXT)
#pragma comment(lib, "opencv_datasets" CV_VER CV_EXT)
#pragma comment(lib, "opencv_dnn" CV_VER CV_EXT)
#pragma comment(lib, "opencv_dnn_objdetect" CV_VER CV_EXT)
#pragma comment(lib, "opencv_dnn_superres" CV_VER CV_EXT)
#pragma comment(lib, "opencv_dpm" CV_VER CV_EXT)
#pragma comment(lib, "opencv_face" CV_VER CV_EXT)
#pragma comment(lib, "opencv_features2d" CV_VER CV_EXT)
#pragma comment(lib, "opencv_flann" CV_VER CV_EXT)
#pragma comment(lib, "opencv_fuzzy" CV_VER CV_EXT)
#pragma comment(lib, "opencv_gapi" CV_VER CV_EXT)
#pragma comment(lib, "opencv_hfs" CV_VER CV_EXT)
#pragma comment(lib, "opencv_highgui" CV_VER CV_EXT)
#pragma comment(lib, "opencv_imgcodecs" CV_VER CV_EXT)
#pragma comment(lib, "opencv_imgproc" CV_VER CV_EXT)
#pragma comment(lib, "opencv_img_hash" CV_VER CV_EXT)
#pragma comment(lib, "opencv_line_descriptor" CV_VER CV_EXT)
#pragma comment(lib, "opencv_ml" CV_VER CV_EXT)
#pragma comment(lib, "opencv_objdetect" CV_VER CV_EXT)
#pragma comment(lib, "opencv_optflow" CV_VER CV_EXT)
#pragma comment(lib, "opencv_phase_unwrapping" CV_VER CV_EXT)
#pragma comment(lib, "opencv_photo" CV_VER CV_EXT)
#pragma comment(lib, "opencv_plot" CV_VER CV_EXT)
#pragma comment(lib, "opencv_quality" CV_VER CV_EXT)
#pragma comment(lib, "opencv_reg" CV_VER CV_EXT)
#pragma comment(lib, "opencv_rgbd" CV_VER CV_EXT)
#pragma comment(lib, "opencv_saliency" CV_VER CV_EXT)
#pragma comment(lib, "opencv_shape" CV_VER CV_EXT)
#pragma comment(lib, "opencv_stereo" CV_VER CV_EXT)
#pragma comment(lib, "opencv_stitching" CV_VER CV_EXT)
#pragma comment(lib, "opencv_structured_light" CV_VER CV_EXT)
#pragma comment(lib, "opencv_superres" CV_VER CV_EXT)
#pragma comment(lib, "opencv_surface_matching" CV_VER CV_EXT)
#pragma comment(lib, "opencv_text" CV_VER CV_EXT)
#pragma comment(lib, "opencv_tracking" CV_VER CV_EXT)
#pragma comment(lib, "opencv_video" CV_VER CV_EXT)
#pragma comment(lib, "opencv_videoio" CV_VER CV_EXT)
#pragma comment(lib, "opencv_videostab" CV_VER CV_EXT)
#pragma comment(lib, "opencv_xfeatures2d" CV_VER CV_EXT)
#pragma comment(lib, "opencv_ximgproc" CV_VER CV_EXT)
#pragma comment(lib, "opencv_xobjdetect" CV_VER CV_EXT)
#pragma comment(lib, "opencv_xphoto" CV_VER CV_EXT)
