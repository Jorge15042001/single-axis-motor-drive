// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_SLICELISTMODEL_H
#define _GTKMM_SLICELISTMODEL_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2020 The gtkmm Development Team
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


#include <giomm/listmodel.h>
#include <gtk/gtk.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API SliceListModel_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A list model that presents a slice out of a larger list.
 *
 * %Gtk::SliceListModel is a list model that takes a list model and presents a
 * slice of that model.
 *
 * This is useful when implementing paging by setting the size to the number
 * of elements per page and updating the offset whenever a different page is
 * opened.
 *
 * @see Gio::ListModel
 * @newin{3,98}
 */

class GTKMM_API SliceListModel : public Glib::Object, public Gio::ListModel
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = SliceListModel;
  using CppClassType = SliceListModel_Class;
  using BaseObjectType = GtkSliceListModel;
  using BaseClassType = GtkSliceListModelClass;

  // noncopyable
  SliceListModel(const SliceListModel&) = delete;
  SliceListModel& operator=(const SliceListModel&) = delete;

private:  friend class SliceListModel_Class;
  static CppClassType slicelistmodel_class_;

protected:
  explicit SliceListModel(const Glib::ConstructParams& construct_params);
  explicit SliceListModel(GtkSliceListModel* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  SliceListModel(SliceListModel&& src) noexcept;
  SliceListModel& operator=(SliceListModel&& src) noexcept;

  ~SliceListModel() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSliceListModel*       gobj()       { return reinterpret_cast<GtkSliceListModel*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSliceListModel* gobj() const { return reinterpret_cast<GtkSliceListModel*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSliceListModel* gobj_copy();

private:

  
protected:
    explicit SliceListModel(const Glib::RefPtr<Gio::ListModel>& model, guint offset, guint size);


public:
  
  static Glib::RefPtr<SliceListModel> create(const Glib::RefPtr<Gio::ListModel>& model, guint offset, guint size);


  /** Sets the model to show a slice of.
   * 
   * The model's item type must conform to @a self's item type.
   * 
   * @param model The model to be sliced.
   */
  void set_model(const Glib::RefPtr<Gio::ListModel>& model);
  
  /** Gets the model that is currently being used or <tt>nullptr</tt> if none.
   * 
   * @return The model in use.
   */
  Glib::RefPtr<Gio::ListModel> get_model();
  
  /** Gets the model that is currently being used or <tt>nullptr</tt> if none.
   * 
   * @return The model in use.
   */
  Glib::RefPtr<const Gio::ListModel> get_model() const;
  
  /** Sets the offset into the original model for this slice.
   * 
   * If the offset is too large for the sliced model,
   *  @a self will end up empty.
   * 
   * @param offset The new offset to use.
   */
  void set_offset(guint offset);
  
  /** Gets the offset set via set_offset().
   * 
   * @return The offset.
   */
  guint get_offset() const;
  
  /** Sets the maximum size. @a self will never have more items
   * than @a size.
   * 
   * It can however have fewer items if the offset is too large
   * or the model sliced from doesn't have enough items.
   * 
   * @param size The maximum size.
   */
  void set_size(guint size);
  
  /** Gets the size set via set_size().
   * 
   * @return The size.
   */
  guint get_size() const;

  /** The type of items. See Gio::ListModel::get_item_type().
   * 
   * @newin{4,8}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< GType > property_item_type() const;


  /** Child model to take slice from.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::ListModel> > property_model() ;

/** Child model to take slice from.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::ListModel> > property_model() const;

  /** The number of items. See Gio::ListModel::get_n_items().
   * 
   * @newin{4,8}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_n_items() const;


  /** Offset of slice.
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_offset() ;

/** Offset of slice.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_offset() const;

  /** Maximum size of slice.
   *
   * Default value: 10
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_size() ;

/** Maximum size of slice.
   *
   * Default value: 10
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_size() const;


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
   * @relates Gtk::SliceListModel
   */
  GTKMM_API
  Glib::RefPtr<Gtk::SliceListModel> wrap(GtkSliceListModel* object, bool take_copy = false);
}


#endif /* _GTKMM_SLICELISTMODEL_H */

