#ifndef	_CAMERA_H_
#define	_CAMERA_H_

#include "OprosDevice.h"

class Camera : public OprosDevice
{
public:
	Camera(void) { };
	virtual ~Camera(void) { };

public:
	virtual int32_t GetImage(unsigned char *image) { return API_NOT_SUPPORTED; };
	virtual int32_t StartPushImage(void *callback) { return API_NOT_SUPPORTED; };
	virtual int32_t EndPushImage(void) { return API_NOT_SUPPORTED; };
};


#endif	//	_CAMERA_H_