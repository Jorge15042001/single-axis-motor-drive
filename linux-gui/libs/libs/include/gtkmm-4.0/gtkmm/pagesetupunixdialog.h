// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_PAGESETUPUNIXDIALOG_H
#define _GTKMM_PAGESETUPUNIXDIALOG_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2006 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/dialog.h>
#include <gtkmm/pagesetup.h>
#include <gtkmm/printsettings.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkPageSetupUnixDialog = struct _GtkPageSetupUnixDialog;
using GtkPageSetupUnixDialogClass = struct _GtkPageSetupUnixDialogClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API PageSetupUnixDialog_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** PageSetupUnixDialog implements a page setup dialog for platforms
 * which don't provide a native page setup dialog, like Unix. It can
 * be used very much like any other GTK+ dialog, at the cost of
 * the portability offered by the high-level printing API exposed
 * through PrintOperation.
 *
 * @newin{2,10}
 *
 * @ingroup Printing
 */

class GTKMM_API PageSetupUnixDialog : public Dialog
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef PageSetupUnixDialog CppObjectType;
  typedef PageSetupUnixDialog_Class CppClassType;
  typedef GtkPageSetupUnixDialog BaseObjectType;
  typedef GtkPageSetupUnixDialogClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  PageSetupUnixDialog(PageSetupUnixDialog&& src) noexcept;
  PageSetupUnixDialog& operator=(PageSetupUnixDialog&& src) noexcept;

  // noncopyable
  PageSetupUnixDialog(const PageSetupUnixDialog&) = delete;
  PageSetupUnixDialog& operator=(const PageSetupUnixDialog&) = delete;

  ~PageSetupUnixDialog() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class PageSetupUnixDialog_Class;
  static CppClassType pagesetupunixdialog_class_;

protected:
  explicit PageSetupUnixDialog(const Glib::ConstructParams& construct_params);
  explicit PageSetupUnixDialog(GtkPageSetupUnixDialog* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkPageSetupUnixDialog*       gobj()       { return reinterpret_cast<GtkPageSetupUnixDialog*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkPageSetupUnixDialog* gobj() const { return reinterpret_cast<GtkPageSetupUnixDialog*>(gobject_); }

private:

  
  //This is not available on Win32.
//This source file will not be compiled on Win32,
//and no class defined in it will be registered by wrap_init().


public:
  explicit PageSetupUnixDialog(Gtk::Window& parent, const Glib::ustring& title);
  explicit PageSetupUnixDialog(const Glib::ustring& title);

  
  /** Sets the `Gtk::PageSetup` from which the page setup
   * dialog takes its values.
   * 
   * @param page_setup A `Gtk::PageSetup`.
   */
  void set_page_setup(const Glib::RefPtr<PageSetup>& page_setup);
  
  /** Gets the currently selected page setup from the dialog.
   * 
   * @return The current page setup.
   */
  Glib::RefPtr<PageSetup> get_page_setup();
  
  /** Gets the currently selected page setup from the dialog.
   * 
   * @return The current page setup.
   */
  Glib::RefPtr<const PageSetup> get_page_setup() const;

  
  /** Sets the `Gtk::PrintSettings` from which the page setup dialog
   * takes its values.
   * 
   * @param print_settings A `Gtk::PrintSettings`.
   */
  void set_print_settings(const Glib::RefPtr<PrintSettings>& print_settings);
  
  /** Gets the current print settings from the dialog.
   * 
   * @return The current print settings.
   */
  Glib::RefPtr<PrintSettings> get_print_settings();
  
  /** Gets the current print settings from the dialog.
   * 
   * @return The current print settings.
   */
  Glib::RefPtr<const PrintSettings> get_print_settings() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::PageSetupUnixDialog
   */
  GTKMM_API
  Gtk::PageSetupUnixDialog* wrap(GtkPageSetupUnixDialog* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_PAGESETUPUNIXDIALOG_H */

