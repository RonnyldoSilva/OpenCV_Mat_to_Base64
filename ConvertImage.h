#include <opencv2/opencv.hpp>
#include<opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>

#include <vector>
#include <string>


using namespace std;
using namespace cv;

#ifndef CONVERTIMAGE_H_
#define CONVERTIMAGE_H_

/**
 * Classe que converte as imagens para base64 e virse e versa
 */
class ImagemConverter {
public:
	/**
	 * Constritor default da classe
	 */
	ImagemConverter();
	/**
	 * Método que converte uma image base64 num cv::Mat
	 * @param imageBase64, imagem em base64
	 * @return imagem em cv::Mat
	 */
	cv::Mat str2mat(const string& imageBase64);
	/**
	 * Método que converte uma cv::Mat numa imagem em base64
	 * @param img, imagem em cv::Mat
	 * @return imagem em base64
	 */
	string mat2str(const Mat& img);

	virtual ~ImagemConverter();

private:
	std::string base64_encode(uchar const* bytesToEncode, unsigned int inLen);

	std::string base64_decode(std::string const& encodedString);

};

#endif /* CONVERTIMAGE_H_ */
