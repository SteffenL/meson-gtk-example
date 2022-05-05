#include "core/meta.hpp"
#include <gtk/gtk.h>

void onActivate(GtkApplication* app) {
    auto builder{gtk_builder_new()};
    gtk_builder_add_from_resource(builder, "/es/langn/examples/GtkExampleApp/main.ui", nullptr);

    auto window{gtk_builder_get_object(builder, "main_window")};
    gtk_window_set_application(GTK_WINDOW(window), app);

    std::string labelText{"Core version: " + example::core::getVersion()};
    auto label{gtk_builder_get_object(builder, "label")};
    gtk_label_set_text(GTK_LABEL(label), labelText.c_str());

    gtk_widget_show(GTK_WIDGET(window));
    g_object_unref(builder);
}

int main(int argc, char* argv[]) {
    auto app{gtk_application_new("es.langn.examples.GtkExampleApp", G_APPLICATION_FLAGS_NONE)};
    g_signal_connect(app, "activate", G_CALLBACK(onActivate), nullptr);
    auto status{g_application_run(G_APPLICATION(app), argc, argv)};
    g_object_unref(app);
    return status;
}
