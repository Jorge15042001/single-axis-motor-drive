// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_BUTTON_H
#define _GTKMM_BUTTON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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
#include <gtkmm/actionable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkButton = struct _GtkButton;
using GtkButtonClass = struct _GtkButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Button_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget that creates a signal when clicked on.
 *
 * This widget is generally used with a signal handler that is called when the button is pressed.
 * It can hold any valid child widget.  The most commonly used child is the Gtk::Label.
 *
 * The Button widget looks like this:
 * @image html button2.png
 *
 * @ingroup Widgets
 */

class GTKMM_API Button
  : public Widget,
    public Actionable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Button CppObjectType;
  typedef Button_Class CppClassType;
  typedef GtkButton BaseObjectType;
  typedef GtkButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Button(Button&& src) noexcept;
  Button& operator=(Button&& src) noexcept;

  // noncopyable
  Button(const Button&) = delete;
  Button& operator=(const Button&) = delete;

  ~Button() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class Button_Class;
  static CppClassType button_class_;

protected:
  explicit Button(const Glib::ConstructParams& construct_params);
  explicit Button(GtkButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkButton*       gobj()       { return reinterpret_cast<GtkButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkButton* gobj() const { return reinterpret_cast<GtkButton*>(gobject_); }

private:

  
public:

  /** Create an empty button.
   * With an empty button, you can Gtk::Container::add() a widget
   * such as a Gtk::Image or Gtk::Box.
   *
   * If you just wish to add a Gtk::Label,
   * you may want to
   * use the Gtk::Button(const Glib::ustring& label) ctor
   * directly instead.
   */
  Button();

  /** Simple Push Button with label.
   * Create a button with the given label inside. You won't be able
   * to add a widget in this button since it already has a Gtk::Label in it.
   */
  explicit Button(const Glib::ustring& label, bool mnemonic = false);

  //We don't wrap gtk_button_new_from_icon_name() to avoid a clash with the label constructor.
  //But set_icon_name() and set_image_from_icon_name() are replacements.
  

  /** Sets the style of the button.
   * 
   * Buttons can has a flat appearance or have a frame drawn around them.
   * 
   * @param has_frame Whether the button should have a visible frame.
   */
  void set_has_frame(bool has_frame =  true);
  
  /** Returns whether the button has a frame.
   * 
   * @return <tt>true</tt> if the button has a frame.
   */
  bool get_has_frame() const;

  
  /** Sets the text of the label of the button to @a label.
   * 
   * This will also clear any previously set labels.
   * 
   * @param label A string.
   */
  void set_label(const Glib::ustring& label);
  
  /** Fetches the text from the label of the button.
   * 
   * If the label text has not been set with set_label()
   * the return value will be <tt>nullptr</tt>. This will be the case if you create
   * an empty button with new() to use as a container.
   * 
   * @return The text of the label widget. This string is owned
   * by the widget and must not be modified or freed.
   */
  Glib::ustring get_label() const;
  
  /** Sets whether to use underlines as mnemonics.
   * 
   * If true, an underline in the text of the button label indicates
   * the next character should be used for the mnemonic accelerator key.
   * 
   * @param use_underline <tt>true</tt> if underlines in the text indicate mnemonics.
   */
  void set_use_underline(bool use_underline =  true);
  
  /** gets whether underlines are interpreted as mnemonics.
   * 
   * See set_use_underline().
   * 
   * @return <tt>true</tt> if an embedded underline in the button label
   * indicates the mnemonic accelerator keys.
   */
  bool get_use_underline() const;

  
  /** Adds a `Gtk::Image` with the given icon name as a child.
   * 
   * If @a button already contains a child widget, that child widget will
   * be removed and replaced with the image.
   * 
   * @param icon_name An icon name.
   */
  void set_icon_name(const Glib::ustring& icon_name);
  
  /** Returns the icon name of the button.
   * 
   * If the icon name has not been set with set_icon_name()
   * the return value will be <tt>nullptr</tt>. This will be the case if you create
   * an empty button with new() to use as a container.
   * 
   * @return The icon name set via set_icon_name().
   */
  Glib::ustring get_icon_name() const;

  /** Sets the image to an icon from the current icon theme.
   * If the icon name isn't known, a "broken image" icon will be
   * displayed instead. If the current icon theme is changed, the icon
   * will be updated appropriately.
   *
   * This is a convenience wrapper around Gtk::Image::set_from_icon_name() and
   * Gtk::Image::property_use_fallback(). With the default values of @a size
   * and @a use_fallback, it's identical to set_icon_name().
   *
   * @param icon_name An icon name.
   * @param size An icon size.
   * @param use_fallback Whether the icon displayed in the Gtk::Image will use
   *        standard icon names fallback. See also Gtk::IconLookupFlags::GENERIC_FALLBACK.
   *
   * @newin{3,12}
   */
  void set_image_from_icon_name(const Glib::ustring& icon_name,
    IconSize size = IconSize::INHERIT, bool use_fallback = false);

  
  /** Sets the child widget of @a button.
   * 
   * Note that by using this API, you take full responsibility for setting
   * up the proper accessibility label and description information for @a button.
   * Most likely, you'll either set the accessibility label or description
   * for @a button explicitly, or you'll set a labelled-by or described-by
   * relations from @a child to @a button.
   * 
   * @param child The child widget.
   */
  void set_child(Widget& child);
  void unset_child();
  
  /** Gets the child widget of @a button.
   * 
   * @return The child widget of @a button.
   */
  Widget* get_child();
  
  /** Gets the child widget of @a button.
   * 
   * @return The child widget of @a button.
   */
  const Widget* get_child() const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%clicked()</tt>
   *
   * Flags: Run First, Action
   *
   * Emitted when the button has been activated (pressed and released).
   */

  Glib::SignalProxy<void()> signal_clicked();

   // Action signal

  /** Text of the label inside the button, if the button contains a label widget.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_label() ;

/** Text of the label inside the button, if the button contains a label widget.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_label() const;

  /** Whether the button has a frame.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_has_frame() ;

/** Whether the button has a frame.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_has_frame() const;

  /** If set, an underline in the text indicates that the following character is
   * to be used as mnemonic.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_underline() ;

/** If set, an underline in the text indicates that the following character is
   * to be used as mnemonic.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_underline() const;

  /** The name of the icon used to automatically populate the button.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_icon_name() ;

/** The name of the icon used to automatically populate the button.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_icon_name() const;

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
  /// This is a default handler for the signal signal_clicked().
  virtual void on_clicked();


};

/*! A Gtk::Button example.
 * Example 1: @link book/buttons/button/buttons.h @endlink
 * Example 2: @link book/buttons/button/buttons.cc @endlink
 * Example 3: @link book/buttons/button/main.cc @endlink
 */

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Button
   */
  GTKMM_API
  Gtk::Button* wrap(GtkButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_BUTTON_H */

