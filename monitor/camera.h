#ifndef CAMERA_H
#define CAMERA_H

#include <sys/types.h>

#define CLEAR(x) memset (&(x), 0, sizeof (x))
typedef enum {
    IO_METHOD_READ, IO_METHOD_MMAP, IO_METHOD_USERPTR,
} io_method;
struct buffer {
    void * start;
    size_t length;//buffer's length is different from cap_image_size
};

class Camera
{
public:
    Camera(char *DEV_NAME,int w,int h, int camer_type);
    ~Camera();
    bool OpenDevice(bool log = false);//
    void CloseDevice();
    bool GetBuffer(unsigned char *image);//
    unsigned int getImageSize();
    bool process_image(unsigned char *imageSrc,unsigned char * imageDst);
    bool process_image2(unsigned char *imageSrc,unsigned char * imageDst);
    //this func only convert YUV422 to RGB888



private:
    char dev_name[50];
    io_method io;
    int fd;
    int width;
    int height;
    struct buffer * buffers ;
    unsigned int n_buffers ;
    unsigned int cap_image_size ;//to keep the real image size!!
    bool _log;

    int fac_1_164[256];
    int fac_1_159[256];
    int fac_0_380[256];
    int fac_0_813[256];
    int fac_2_018[256];

    void init_table()
    {
        for (int i = 0; i < 256; ++i)
        {
            fac_1_164[i] = 1.164*(i-16);
            fac_1_159[i] = 1.159*(i-128);
            fac_0_380[i] = 0.380*(i-128);
            fac_0_813[i] = 0.813*(i-128);
            fac_2_018[i] = 2.018*(i-128);
        }
    }
    bool init_device(void);
    //void init_read(unsigned int buffer_size);
    bool init_mmap(void);
    //void init_userp(unsigned int buffer_size);
    void uninit_device(void);
    bool start_capturing(void);
    void stop_capturing(void);
    void mainloop(unsigned char *image);
    int read_frame(unsigned char *image);
    void close_device(void);
    bool open_device(void);
    

    void errno_exit(const char * s);
    int xioctl(int fd, int request, void * arg);
};

#endif // CAMERA_H

