// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_STACKPAGE_H
#define _GTKMM_STACKPAGE_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2019 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/object.h>
#include <glibmm/refptr.h>
#include <gtkmm/accessible.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkStackPage = struct _GtkStackPage;
using GtkStackPageClass = struct _GtkStackPageClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API StackPage_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
class GTKMM_API Widget;

/** Holds properties of a Gtk::Stack page.
 *
 * Use Gtk::Stack::get_page() to get a pointer to an %StackPage object.
 *
 * @see Stack
 * @newin{3,96}
 */

class GTKMM_API StackPage : public Glib::Object, public Accessible
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = StackPage;
  using CppClassType = StackPage_Class;
  using BaseObjectType = GtkStackPage;
  using BaseClassType = GtkStackPageClass;

  // noncopyable
  StackPage(const StackPage&) = delete;
  StackPage& operator=(const StackPage&) = delete;

private:  friend class StackPage_Class;
  static CppClassType stackpage_class_;

protected:
  explicit StackPage(const Glib::ConstructParams& construct_params);
  explicit StackPage(GtkStackPage* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  StackPage(StackPage&& src) noexcept;
  StackPage& operator=(StackPage&& src) noexcept;

  ~StackPage() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkStackPage*       gobj()       { return reinterpret_cast<GtkStackPage*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkStackPage* gobj() const { return reinterpret_cast<GtkStackPage*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkStackPage* gobj_copy();

private:

  
public:
  
  /** Returns the stack child to which @a self belongs.
   * 
   * @return The child to which @a self belongs.
   */
  Widget* get_child();
  
  /** Returns the stack child to which @a self belongs.
   * 
   * @return The child to which @a self belongs.
   */
  const Widget* get_child() const;

  
  /** Returns whether @a page is visible in its `Gtk::Stack`.
   * 
   * This is independent from the Gtk::Widget::property_visible()
   * property of its widget.
   * 
   * @return <tt>true</tt> if @a page is visible.
   */
  bool get_visible() const;
  
  /** Sets whether @a page is visible in its `Gtk::Stack`.
   * 
   * @param visible The new property value.
   */
  void set_visible(bool visible =  true);

  
  /** Returns whether the page is marked as “needs attention”.
   * 
   * @return The value of the property_needs_attention()
   * property.
   */
  bool get_needs_attention() const;
  
  /** Sets whether the page is marked as “needs attention”.
   * 
   * @param setting The new value to set.
   */
  void set_needs_attention(bool setting =  true);
  
  /** Gets whether underlines in the page title indicate mnemonics.
   * 
   * @return The value of the property_use_underline() property.
   */
  bool get_use_underline() const;
  
  /** Sets whether underlines in the page title indicate mnemonics.
   * 
   * @param setting The new value to set.
   */
  void set_use_underline(bool setting =  true);
  
  /** Returns the name of the page.
   * 
   * @return The value of the property_name() property.
   */
  Glib::ustring get_name() const;
  
  /** Sets the name of the page.
   * 
   * @param setting The new value to set.
   */
  void set_name(const Glib::ustring& setting);
  
  /** Gets the page title.
   * 
   * @return The value of the property_title() property.
   */
  Glib::ustring get_title() const;
  
  /** Sets the page title.
   * 
   * @param setting The new value to set.
   */
  void set_title(const Glib::ustring& setting);
  
  /** Returns the icon name of the page.
   * 
   * @return The value of the property_icon_name() property.
   */
  Glib::ustring get_icon_name() const;
  
  /** Sets the icon name of the page.
   * 
   * @param setting The new value to set.
   */
  void set_icon_name(const Glib::ustring& setting);

  /** The child that this page is for.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_child() const;


  /** The name of the child page.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_name() ;

/** The name of the child page.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_name() const;

  /** The title of the child page.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_title() ;

/** The title of the child page.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_title() const;

  /** The icon name of the child page.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_icon_name() ;

/** The icon name of the child page.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_icon_name() const;

  /** Whether the page requires the user attention.
   * 
   * This is used by the Gtk::StackSwitcher to change the
   * appearance of the corresponding button when a page needs
   * attention and it is not the current one.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_needs_attention() ;

/** Whether the page requires the user attention.
   * 
   * This is used by the Gtk::StackSwitcher to change the
   * appearance of the corresponding button when a page needs
   * attention and it is not the current one.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_needs_attention() const;

  /** Whether this page is visible.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_visible() ;

/** Whether this page is visible.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_visible() const;

  /** If set, an underline in the title indicates a mnemonic.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_underline() ;

/** If set, an underline in the title indicates a mnemonic.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_underline() const;


  // There are no signals or vfuncs.


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
   * @relates Gtk::StackPage
   */
  GTKMM_API
  Glib::RefPtr<Gtk::StackPage> wrap(GtkStackPage* object, bool take_copy = false);
}


#endif /* _GTKMM_STACKPAGE_H */

