#include <iostream>
#include <vector>
#include <memory>
#include <string>


class Pixel {
    unsigned r;
    unsigned g;
    unsigned b;
    unsigned a;
public:
    Pixel(unsigned r, unsigned g, unsigned b, unsigned a) : r(r), g(g), b(b), a(a) {}
    unsigned getR() const { return r; }
    unsigned getG() const { return g; }
    unsigned getB() const { return b; }
    unsigned getA() const { return a; }
    void setR(unsigned r) { this->r = r; }
    void setG(unsigned g) { this->g = g; }
    void setB(unsigned b) { this->b = b; }
    void setA(unsigned a) { this->a = a; }
    void setRGBA(unsigned r, unsigned g, unsigned b, unsigned a) {
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = a;
    }
    void setRGB(unsigned r, unsigned g, unsigned b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }
    void setRGBA(const Pixel& pixel) {
        this->r = pixel.r;
        this->g = pixel.g;
        this->b = pixel.b;
        this->a = pixel.a;
    }
    void setRGB(const Pixel& pixel) {
        this->r = pixel.r;
        this->g = pixel.g;
        this->b = pixel.b;
    }
};

class Picture {
    unsigned width;
    unsigned height;
    std::vector<Pixel> pixels;
public:
    Picture(unsigned width, unsigned height) : width(width), height(height), pixels(width * height) {}
    unsigned getWidth() const { return width; }
    unsigned getHeight() const { return height; }
    const Pixel& getPixel(unsigned x, unsigned y) const { return pixels[y * width + x]; }
    void setPixel(unsigned x, unsigned y, const Pixel& pixel) { pixels[y * width + x] = pixel; }
};

class IFilter {
public:
    virtual void apply(Picture& pic) = 0;
    virtual ~IFilter() {}
};

class ContrastFilter: public IFilter {

};

class BlurFilter: public IFilter {

};

class EdgeDetectionFilter: public IFilter {
};

class RGBCorrectionFilter: public IFilter {

};

class GammaCorrectionFilter: public IFilter {

};

class MedianFilter: public IFilter {
    
};

class FilterPipeline {
    std::vector<std::unique_ptr<IFilter>> filters;



    public:
    bool addFilter(std::unique_ptr<IFilter> filter) { 
        // TODO
    }

    bool applyFilters(Picture& pic) {// isnt const - we modify it
        // TODO
    }

    void removeFilters(){
        // TODO
    }
};

class FilterFactory {
    // TODO
    // static functions
};

class IFileManager {
public:
    virtual bool loadImage (const std::string& filename, Picture& pic) = 0;
    virtual bool saveImage (const std::string& filename, const Picture& pic) = 0;
    virtual ~IFileManager();
};

class BMPFileManager: public IFileManager {
public:
    bool loadImage (const std::string& filename, Picture& pic) override {
        // TODO
        return true;
    }
    bool saveImage (const std::string& filename, const Picture& pic) override {
        // TODO
        return true;
    }
};

