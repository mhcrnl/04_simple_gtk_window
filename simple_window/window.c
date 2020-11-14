#include <gtk/gtk.h>
#include <stdio.h>

GtkWidget *window;
//GtkLabel *mylabel;
GtkButton *btClose;

int main(int argc, char *argv[]) {
		
	GtkBuilder *builder;
	gtk_init(&argc, &argv);
	
	
	builder = gtk_builder_new();
	gtk_builder_add_from_file(builder, "window.glade", NULL);
	
	window = GTK_WIDGET(gtk_builder_get_object(builder, "MyWindow"));
	//mylabel = GTK_LABEL(gtk_builder_get_object(builder, "MyLabel"));
	btClose = GTK_BUTTON(gtk_builder_get_object(builder, "btClose"));
	
	gtk_builder_connect_signals(builder, NULL);
	g_object_unref(builder);
	
	gtk_widget_show_all(window);
	gtk_main();
	
	return 0;
	
}

void exit_app(){
	
	printf("Exit app");
	gtk_main_quit();
}
/*
void button_clicked(){
	
	printf("Button clicked!");
	gtk_label_set_text(mylabel, "Hello, World!");
}
*/
