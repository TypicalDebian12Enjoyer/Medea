#include "okienko.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[]){
  auto app = Gtk::Application::create("medea.github.com");

  return app -> make_window_and_run<Okienko>(argc, argv);
}
