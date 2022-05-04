#include "core/meta.hpp"
#include <gtk/gtk.h>

void onActivate(GtkApplication* app) {
    auto window{gtk_application_window_new(app)};
    gtk_window_set_title(GTK_WINDOW(window), "Example");
    gtk_window_set_default_size(GTK_WINDOW(window), 600, 400);

    std::string labelText{"Core version: " + example::core::getVersion()};
    auto label{gtk_label_new_with_mnemonic(nullptr)};
    gtk_label_set_text(GTK_LABEL(label), labelText.c_str());
    gtk_window_set_child(GTK_WINDOW(window), label);

    gtk_window_present(GTK_WINDOW(window));

}

int main(int argc, char* argv[]) {
    auto app{gtk_application_new("es.langn.examples.GtkExampleApp", G_APPLICATION_FLAGS_NONE)};
    g_signal_connect(app, "activate", G_CALLBACK(onActivate), nullptr);
    return g_application_run(G_APPLICATION(app), argc, argv);
}
