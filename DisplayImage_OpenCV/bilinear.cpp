#include <opencv2/opencv.hpp>
#include <stdio.h>
using namespace cv;
int main(int argc, char **argv) {
  if (argc != 2) {
    printf("usage: DisplayImage.out <Image_Path>\n");
    return -1;
  }
  Mat image, gray, output;
  Size outsize;
  image = imread(argv[1], 1);
  if (!image.data) {
    printf("No image data \n");
    return -1;
  }
  //  void cvtColor(InputArray src, OutputArray dst, int code, int dstCn=0 )
  cvtColor(image, gray, CV_RGB2GRAY);
  // resize(InputArray src, OutputArray dst, Size dsize, double fx=0, double
  // fy=0, int interpolation=INTER_LINEAR )
  outsize =
      Size(round(image.cols * (1.0 / 1.25)), round(image.rows * (1.0 / 1.25)));
  resize(gray, output, outsize, 0, 0, INTER_LINEAR);
  namedWindow("Display Image", WINDOW_AUTOSIZE);
  imshow("Display Image", image);
  imshow("Display Gray", gray);
  imshow("Display Bilinear", output);

  imwrite("./OUTPUT/gray.pgm", gray);
  imwrite("./OUTPUT/output.pgm", output);
  waitKey(0);
  return 0;
}
