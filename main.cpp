#include "Noise/noise.hpp"
#include "Noise/remove_noise.hpp"

int main()
{

    Mat image;
    Mat image2;
    image = imread("C:\\Users\\Anwar\\Desktop\\SBME 2024\\YEAR 3 (2022-2023)\\SEMESTER 2\\Computer Vision\\Tasks\\Task 1\\CV_task1_team15\\lenna.png");

    // Mat_<double> image2;
    // image2.size() = image.size();

    // int cols = image.cols, rows = image.rows;
    // cols = cols * rows;
    // rows = 1;

    // const uchar* image_ptr = image.ptr<uchar>(rows);
    // uchar* image2_ptr = image2.ptr<uchar>(rows);
    // for (int col = 0; col < cols; col++)
    // {

    //     image2_ptr[col] = (uchar) (0.2989 * image_ptr[0] + 0.5870 * image_ptr[1] + 0.1140 * image_ptr[2]) ;
    //     image_ptr +=3;

    // }
    Mat image4;
    image4.create(image.cols+2, image.rows+2, 0);
    // image4 = image.clone();
    // cout << image.size() << endl;;
    cout << (int) image4.at<uchar>(2,2) << endl;

    // hconcat(image, image4, image4);
    // imshow("Display", image4);
    // waitKey(0);
    // Convert_To_Gray(image, image2);
    // imshow("Display", image2);
    // waitKey(0);
    // Mat image3 = image2.clone();
    // Add_Gaussian_Noise(image2, image3, 125, 25, 1);
    // Add_Salt_And_Pepper_Noise(image2, image3, 0.05);

    // Add_Median_Filter(image3, image2);
    // Add_Uniform_Noise(image2, image3, 250, 0.5);
    // namedWindow("Anwar", WINDOW_AUTOSIZE);
    // hconcat(image2, image3, image3);
    // imshow("Display", image3);
    // waitKey(0);
}
