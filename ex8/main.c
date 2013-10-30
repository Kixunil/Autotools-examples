#include "config.h"
#include "hello.h"
#include "os_detect.h"
#ifdef WITH_GTK
	#include "gtkdialog.h"
#endif

int main() {
	print_message();
	print_os();
#ifdef WITH_GTK
	show_gtk_dialog();
#endif
	return 0;
}
