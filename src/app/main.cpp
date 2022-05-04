#include "core/meta.hpp"
#include <gtkmm.h>

class MainWindow : public Gtk::Window {
public:
    MainWindow() {
        set_title("Example");
        set_default_size(600, 400);
        m_label.set_text("Core version: " + example::core::getVersion());
        set_child(m_label);
    }

private:
    Gtk::Label m_label;
};

int main(int argc, char* argv[]) {
    auto app{Gtk::Application::create("es.langn.examples.gtkmm")};
    return app->make_window_and_run<MainWindow>(argc, argv);
}
