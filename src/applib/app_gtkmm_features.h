/******************************************************************************
License: GNU General Public License v3.0 only
Copyright:
	(C) 2008 - 2021 Alexander Shaduri <ashaduri@gmail.com>
******************************************************************************/
/// \file
/// \author Alexander Shaduri
/// \ingroup applib
/// \weakgroup applib
/// @{

#ifndef APP_GTKMM_FEATURES_H
#define APP_GTKMM_FEATURES_H

#include "local_glibmm.h"
#include <gtkmm.h>



/// \def APP_GTKMM_CHECK_VERSION(major, minor, micro)
/// Similar to GTK_CHECK_VERSION, but for Gtkmm, which lacks this before gtkmm4.
/// This is useful as Gtk and Gtkmm versions may differ.
#ifndef APP_GTKMM_CHECK_VERSION
	#define APP_GTKMM_CHECK_VERSION(major, minor, micro) \
		(GTKMM_MAJOR_VERSION > (major) \
			|| (GTKMM_MAJOR_VERSION == (major) && (GTKMM_MINOR_VERSION > (minor) \
				|| (GTKMM_MINOR_VERSION == (minor) && GTKMM_MICRO_VERSION >= (micro)) \
				) \
			) \
		)
#endif





#endif

/// @}
