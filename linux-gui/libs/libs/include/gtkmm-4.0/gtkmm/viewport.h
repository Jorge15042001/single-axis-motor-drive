// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_VIEWPORT_H
#define _GTKMM_VIEWPORT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2002 The gtkmm Development Team
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

#include <gtkmm/widget.h>
#include <gtkmm/scrollable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkViewport = struct _GtkViewport;
using GtkViewportClass = struct _GtkViewportClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Viewport_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk {

/** An adapter which makes widgets scrollable.
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class GTKMM_API Viewport
 : public Widget,
   public Scrollable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Viewport CppObjectType;
  typedef Viewport_Class CppClassType;
  typedef GtkViewport BaseObjectType;
  typedef GtkViewportClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Viewport(Viewport&& src) noexcept;
  Viewport& operator=(Viewport&& src) noexcept;

  // noncopyable
  Viewport(const Viewport&) = delete;
  Viewport& operator=(const Viewport&) = delete;

  ~Viewport() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class Viewport_Class;
  static CppClassType viewport_class_;

protected:
  explicit Viewport(const Glib::ConstructParams& construct_params);
  explicit Viewport(GtkViewport* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkViewport*       gobj()       { return reinterpret_cast<GtkViewport*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkViewport* gobj() const { return reinterpret_cast<GtkViewport*>(gobject_); }

private:

  
public:

    explicit Viewport(const Glib::RefPtr<Adjustment>& hadjustment, const Glib::RefPtr<Adjustment>& vadjustment);


  /** Sets whether the viewport should automatically scroll
   * to keep the focused child in view.
   * 
   * @param scroll_to_focus Whether to keep the focus widget scrolled to view.
   */
  void set_scroll_to_focus(bool scroll_to_focus =  true);
  
  /** Gets whether the viewport is scrolling to keep the focused
   * child in view.
   * 
   * @return <tt>true</tt> if the viewport keeps the focus child scrolled to view.
   */
  bool get_scroll_to_focus() const;

  
  /** Sets the child widget of @a viewport.
   * 
   * @param child The child widget.
   */
  void set_child(Widget& child);
  void unset_child();
  
  /** Gets the child widget of @a viewport.
   * 
   * @return The child widget of @a viewport.
   */
  Widget* get_child();
  
  /** Gets the child widget of @a viewport.
   * 
   * @return The child widget of @a viewport.
   */
  const Widget* get_child() const;

  /** Whether to scroll when the focus changes.
   * 
   * Before 4.6.2, this property was mistakenly defaulting to <tt>false</tt>, so if your
   * code needs to work with older versions, consider setting it explicitly to
   * <tt>true</tt>.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_scroll_to_focus() ;

/** Whether to scroll when the focus changes.
   * 
   * Before 4.6.2, this property was mistakenly defaulting to <tt>false</tt>, so if your
   * code needs to work with older versions, consider setting it explicitly to
   * <tt>true</tt>.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_scroll_to_focus() const;

  /** The child widget.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_child() ;

/** The child widget.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_child() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

}  //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Viewport
   */
  GTKMM_API
  Gtk::Viewport* wrap(GtkViewport* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_VIEWPORT_H */

