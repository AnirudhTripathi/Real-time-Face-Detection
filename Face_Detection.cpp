#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\objdetect\objdetect.hpp>
#include<vector>

using namespace std;
using namespace cv;



int main(int argc, char** argv) {

	Mat video_stream;
	VideoCapture real_time(0);

	namedWindow("Face Detection");
	string trained_classifier_location = "B:\\CV\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_default.xml";
	CascadeClassifier faceDetector, nestedCascade;

	faceDetector.load(trained_classifier_location);

	nestedCascade.load("B:\\CV\\opencv\\sources\\data\\haarcascades\\haarcascade_eye_tree_eyeglasses.xml");
	vector<Rect>faces;

	while (true) {
		faceDetector.detectMultiScale(video_stream, faces, 1.1, 4, CASCADE_SCALE_IMAGE, Size(30, 30));

		real_time.read(video_stream);

		for (int i = 0; i < faces.size(); i++) {

			Point center(faces[i].x + faces[i].width * 0.5, faces[i].y + faces[i].height * 0.5);

			ellipse(video_stream, center, Size(faces[i].width * 0.5, faces[i].height * 0.5), 0, 0, 360, Scalar(0, 255, 0), 4, 8, 0);

			int horizontal = (faces[i].x + faces[i].width * 0.5);
			int vertical = (faces[i].y + faces[i].width * 0.5);
			cout << "Position of the face is:" << "(" << horizontal << "," << vertical << ")" << endl;

		}

		imshow("Face Detection", video_stream);
		if (waitKey(10) == 27) {
			break;
		}
	}

	return 0;
}
