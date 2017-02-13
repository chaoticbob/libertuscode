
#define TINYCI_IMPLEMENTATION
#include "tinyci.hpp"

using namespace ci;
using namespace ci::app;

class BasicApp : public App {
public:
  void setup() override;
	void mouseDrag( MouseEvent event ) override;
	void keyDown( KeyEvent event ) override;

	void draw() override;

private:
};

void prepareSettings( BasicApp::Settings* settings )
{
  int stopMe = 1;
}

void BasicApp::setup()
{
  //int stopMe = 1;
  fs::path p = "hello";
  std::string s = p.string();
  p = "c:\\somefile.txt";
  s = p.string();
  p = "c:\\Windows\\somefile.txt";
  s = p.string();
  p = "c:\\Windows\\com\\\\\\other\\\\somefile.txt";
  s = p.string();
  p = "//usr/share/lib/gcc///lib.a";
  s = p.string();
  p = p / "milk";
  s = p.string();
  p /= "cat";
  s = p.string();
  p = "/orig";
  //p /= "/rootpath";
  s = p.string();

  p = "C:\\";
  s = p.string();
  bool b = p.is_root();

  s = getAssetPath("file.txt").string();

  int stopMe = 1;
}

void BasicApp::mouseDrag( MouseEvent event )
{
}

void BasicApp::keyDown( KeyEvent event )
{
}

void BasicApp::draw()
{
  int stopMe = 1;
}

// This line tells Cinder to actually create and run the application.
//CINDER_APP( BasicApp, RendererGl, prepareSettings )
CINDER_APP( BasicApp, RendererGl)
