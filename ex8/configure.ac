#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([HelloWorld], [1.0], [progressbar@progressbar.sk])
AC_CONFIG_SRCDIR([main.c])
AC_CONFIG_HEADERS([config.h])

AC_ARG_WITH([gtk],
	    [AS_HELP_STRING([--with-gtk=@<:@yes|no@:>@],[enables gtk dialog @<:@default=no@:>@])],
	    [],
	    [with_gtk=no]
)

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AS_IF([test "x$with_gtk" '!=' xno], [
		PKG_CHECK_MODULES([GTK], [gtk+-3.0],
				  [AC_DEFINE([WITH_GTK], [1], [Use gtk])
				  with_gtk=yes],
				  [with_gtk=no]
		)
	],
	[with_gtk=no]
)

AC_SUBST([with_gtk])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
