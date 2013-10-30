#include "config.h"
#include "hello.h"
#include "os_detect.h"
#ifdef WITH_GTK
	#include "gtkdialog.h"
#endif

int main(int argc, char *argv[]) {
	print_message();
	print_os();
#ifdef WITH_GTK
	gtk_init(&argc, &argv);
	show_gtk_dialog();
#endif
	return 0;
}
