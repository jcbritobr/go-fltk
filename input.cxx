#include "input.h"

#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Float_Input.H>

#include "event_handler.h"


const unsigned char go_FL_FLOAT_INPUT = 1;
const unsigned char go_FL_INT_INPUT = 2;

class GInput : public EventHandler<Fl_Input> {
public:
  GInput(int x, int y, int w, int h, const char *label)
    : EventHandler<Fl_Input>(x, y, w, h, label) {}
};

GInput *go_fltk_new_Input(int x, int y, int w, int h, const char *text) {
  return new GInput(x, y, w, h, text);
}

const char *go_fltk_Input_value(GInput *in) {
  return in->value();
}
int go_fltk_Input_set_value(GInput *in, const char *t) {
  return in->value(t);
}
void go_fltk_Input_resize(GInput *in, int x, int y, int w, int h) {
  in->resize(x, y, w, h);
}

class GOutput : public EventHandler<Fl_Output> {
public:
  GOutput(int x, int y, int w, int h, const char *label)
    : EventHandler<Fl_Output>(x, y, w, h, label) {}
};

GOutput *go_fltk_new_Output(int x, int y, int w, int h, const char *text) {
  return new GOutput(x, y, w, h, text);
}

class GFloat_Input : public EventHandler<Fl_Float_Input> {
public:
  GFloat_Input(int x, int y, int w, int h, const char *label)
    : EventHandler<Fl_Float_Input>(x, y, w, h, label) {}
};

GFloat_Input *go_fltk_new_Float_Input(int x, int y, int w, int h, const char *text) {
  return new GFloat_Input(x, y, w, h, text);
}
