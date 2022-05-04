#include "core/meta.hpp"
#include <gtkmm.h>
#include <iostream>

class MainWindow : public Gtk::Window {
public:
    MainWindow() {
        set_title("Example");
        set_default_size(600, 400);
    }
};

int main(int argc, char* argv[]) {
    std::cout << "Core version: " << example::core::getVersion() << "\n";
    auto app{Gtk::Application::create("es.langn.examples.gtkmm")};
    return app->make_window_and_run<MainWindow>(argc, argv);
}
