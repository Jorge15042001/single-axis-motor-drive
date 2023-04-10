// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/iconview.h>
#include <gtkmm/private/iconview_p.h>


/* Copyright 1998-2004 The gtkmm Development Team
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

#include <glibmm/vectorutils.h>

#include <gtkmm/adjustment.h>
#include <gtk/gtk.h>

namespace //anonymous namespace
{

static void proxy_foreach_callback(GtkIconView* /* icon_view */, GtkTreePath* path, void* data)
{
  typedef Gtk::IconView::SlotForeach SlotType;
  auto& slot = *static_cast<SlotType*>(data);

  try
  {
    slot(Gtk::TreeModel::Path(path, true));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

} //anonymous namespace


namespace Gtk
{

void IconView::unset_model()
{
  gtk_icon_view_set_model(gobj(), nullptr);
}

void IconView::selected_foreach(const SlotForeach& slot)
{
  SlotForeach slot_copy(slot);
  gtk_icon_view_selected_foreach(const_cast<GtkIconView*>(gobj()), &proxy_foreach_callback, &slot_copy);
}

bool IconView::get_item_at_pos(int x, int y, TreeModel::Path& path, CellRenderer*& cell) const
{
  GtkTreePath* cpath = nullptr;
  GtkCellRenderer* ccell = nullptr;
  bool result = gtk_icon_view_get_item_at_pos(const_cast<GtkIconView*>(gobj()), x, y, &cpath, &ccell);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_item_at_pos documentation says we should free this.
  cell = Glib::wrap(ccell);
  return result;
}

bool IconView::get_item_at_pos(int x, int y, TreeModel::Path& path) const
{
  GtkTreePath* cpath = nullptr;
  bool result = gtk_icon_view_get_item_at_pos(const_cast<GtkIconView*>(gobj()), x, y, &cpath, nullptr);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_item_at_pos documentation says we should free this.
  return result;
}

bool IconView::get_item_at_pos(int x, int y, CellRenderer*& cell) const
{
  GtkCellRenderer* ccell = nullptr;
  bool result = gtk_icon_view_get_item_at_pos(const_cast<GtkIconView*>(gobj()), x, y, nullptr, &ccell);

  cell = Glib::wrap(ccell);
  return result;
}

bool IconView::get_visible_range(TreeModel::Path& start_path, TreeModel::Path& end_path) const
{
  GtkTreePath* cstart_path = nullptr;
  GtkTreePath* cend_path = nullptr;
  bool result = gtk_icon_view_get_visible_range(const_cast<GtkIconView*>(gobj()), &cstart_path, &cend_path);

  start_path = Glib::wrap(cstart_path); //Don't take copy because the gtk_icon_view_get_visible_range documentation says we should free this.
  end_path = Glib::wrap(cend_path); //Don't take copy because the gtk_icon_view_get_visible_range documentation says we should free this.
  return result;
}

  
bool IconView::get_cursor(TreeModel::Path& path, CellRenderer*& cell) const
{
  GtkTreePath* cpath = nullptr;
  GtkCellRenderer* ccell = nullptr;
  bool result = gtk_icon_view_get_cursor(const_cast<GtkIconView*>(gobj()), &cpath, &ccell);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_cursor documentation says we should free this.
  cell = Glib::wrap(ccell);
  return result;
}

bool IconView::get_cursor(TreeModel::Path& path) const
{
  GtkTreePath* cpath = nullptr;
  bool result = gtk_icon_view_get_cursor(const_cast<GtkIconView*>(gobj()), &cpath, nullptr);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_cursor documentation says we should free this.
  return result;
}

bool IconView::get_cursor(CellRenderer*& cell) const
{
  GtkCellRenderer* ccell = nullptr;
  bool result = gtk_icon_view_get_cursor(const_cast<GtkIconView*>(gobj()), nullptr, &ccell);

  cell = Glib::wrap(ccell);
  return result;
}

void IconView::get_drag_dest_item(TreeModel::Path& path, DropPosition& pos) const
{
  GtkTreePath* cpath = nullptr;
  gtk_icon_view_get_drag_dest_item(const_cast<GtkIconView*>(gobj()), &cpath, (GtkIconViewDropPosition*)(&pos));
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);
}

void IconView::get_drag_dest_item(TreeModel::Path& path) const
{
  GtkTreePath* cpath = nullptr;
  gtk_icon_view_get_drag_dest_item(const_cast<GtkIconView*>(gobj()), &cpath, nullptr);
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);
}

void IconView::get_drag_dest_item(DropPosition& pos) const
{
   gtk_icon_view_get_drag_dest_item(const_cast<GtkIconView*>(gobj()), nullptr, (GtkIconViewDropPosition*)(&pos));
}


bool IconView::get_dest_item_at_pos(int drag_x, int drag_y, TreeModel::Path& path, DropPosition& pos) const
{
  GtkTreePath* cpath = nullptr;
  const bool result = gtk_icon_view_get_dest_item_at_pos(const_cast<GtkIconView*>(gobj()), drag_x, drag_y, &cpath, (GtkIconViewDropPosition*)(&pos));
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);

  return result;
}

bool IconView::get_dest_item_at_pos(int drag_x, int drag_y, TreeModel::Path& path) const
{
  GtkTreePath* cpath = nullptr;
  const bool result = gtk_icon_view_get_dest_item_at_pos(const_cast<GtkIconView*>(gobj()), drag_x, drag_y, &cpath, nullptr);
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);

  return result;
}

bool IconView::get_dest_item_at_pos(int drag_x, int drag_y, DropPosition& pos) const
{
  return gtk_icon_view_get_dest_item_at_pos(const_cast<GtkIconView*>(gobj()), drag_x, drag_y, nullptr, (GtkIconViewDropPosition*)(&pos));
}

bool
IconView::get_tooltip_context_path(int x, int y,
                                   bool keyboard_tip,
                                   TreeModel::Path& path)
{
  GtkTreePath* cpath = nullptr;

  gboolean result =
    gtk_icon_view_get_tooltip_context(gobj(),
                                      x, y,
                                      keyboard_tip,
                                      nullptr,
                                      &cpath,
                                      nullptr);

  // If result is false, cpath is not modified, it's still 0.
  // wrap() can handle that situation.
  path = Glib::wrap(cpath, /* take_copy= */ false);

  return result;
}

bool
IconView::get_tooltip_context_iter(int x, int y,
                                   bool keyboard_tip,
                                   Gtk::TreeModel::iterator& iter)
{
  GtkTreeIter src_iter;

  gboolean result =
    gtk_icon_view_get_tooltip_context(gobj(),
                                      x, y,
                                      keyboard_tip,
                                      nullptr,
                                      nullptr,
                                      &src_iter);

  iter = Gtk::TreeModel::iterator(gtk_icon_view_get_model(this->gobj()), &src_iter);

  return result;
}

} // namespace Gtk


namespace
{


static void IconView_signal_item_activated_callback(GtkIconView* self, GtkTreePath* p0,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(const TreeModel::Path&)>;

  auto obj = dynamic_cast<IconView*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Gtk::TreePath(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo IconView_signal_item_activated_info =
{
  "item_activated",
  (GCallback) &IconView_signal_item_activated_callback,
  (GCallback) &IconView_signal_item_activated_callback
};


static const Glib::SignalProxyInfo IconView_signal_selection_changed_info =
{
  "selection_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::IconView::DropPosition>::value_type()
{
  return gtk_icon_view_drop_position_get_type();
}


namespace Glib
{

Gtk::IconView* wrap(GtkIconView* object, bool take_copy)
{
  return dynamic_cast<Gtk::IconView *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& IconView_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &IconView_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_icon_view_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  CellLayout::add_interface(get_type());
  Scrollable::add_interface(get_type());

  }

  return *this;
}


void IconView_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* IconView_Class::wrap_new(GObject* o)
{
  return manage(new IconView((GtkIconView*)(o)));

}


/* The implementation: */

IconView::IconView(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

IconView::IconView(GtkIconView* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }


IconView::IconView(IconView&& src) noexcept
: Gtk::Widget(std::move(src))
  , CellLayout(std::move(src))
  , Scrollable(std::move(src))
{}

IconView& IconView::operator=(IconView&& src) noexcept
{
  Gtk::Widget::operator=(std::move(src));
  CellLayout::operator=(std::move(src));
  Scrollable::operator=(std::move(src));
  return *this;
}

IconView::~IconView() noexcept
{
  destroy_();
}

IconView::CppClassType IconView::iconview_class_; // initialize static member

GType IconView::get_type()
{
  return iconview_class_.init().get_type();
}


GType IconView::get_base_type()
{
  return gtk_icon_view_get_type();
}


IconView::IconView()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(iconview_class_.init()))
{
  

}

IconView::IconView(const Glib::RefPtr<TreeModel>& model)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(iconview_class_.init(), "model", Glib::unwrap(model), nullptr))
{
  

}

IconView::IconView(const Glib::RefPtr<CellArea>& cell_area)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Widget(Glib::ConstructParams(iconview_class_.init(), "cell_area", Glib::unwrap(cell_area), nullptr))
{
  

}

void IconView::set_model(const Glib::RefPtr<TreeModel>& model)
{
  gtk_icon_view_set_model(gobj(), Glib::unwrap(model));
}

Glib::RefPtr<TreeModel> IconView::get_model()
{
  auto retvalue = Glib::wrap(gtk_icon_view_get_model(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TreeModel> IconView::get_model() const
{
  return const_cast<IconView*>(this)->get_model();
}

void IconView::set_text_column(int column)
{
  gtk_icon_view_set_text_column(gobj(), column);
}

void IconView::set_text_column(const TreeModelColumnBase& model_column)
{
  gtk_icon_view_set_text_column(gobj(), (model_column).index());
}

int IconView::get_text_column() const
{
  return gtk_icon_view_get_text_column(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_markup_column(int column)
{
  gtk_icon_view_set_markup_column(gobj(), column);
}

void IconView::set_markup_column(const TreeModelColumnBase& column)
{
  gtk_icon_view_set_markup_column(gobj(), (column).index());
}

int IconView::get_markup_column() const
{
  return gtk_icon_view_get_markup_column(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_pixbuf_column(int column)
{
  gtk_icon_view_set_pixbuf_column(gobj(), column);
}

void IconView::set_pixbuf_column(const TreeModelColumnBase& column)
{
  gtk_icon_view_set_pixbuf_column(gobj(), (column).index());
}

int IconView::get_pixbuf_column() const
{
  return gtk_icon_view_get_pixbuf_column(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_item_orientation(Orientation orientation)
{
  gtk_icon_view_set_item_orientation(gobj(), static_cast<GtkOrientation>(orientation));
}

Orientation IconView::get_item_orientation() const
{
  return static_cast<Orientation>(gtk_icon_view_get_item_orientation(const_cast<GtkIconView*>(gobj())));
}

void IconView::set_columns(int columns)
{
  gtk_icon_view_set_columns(gobj(), columns);
}

int IconView::get_columns() const
{
  return gtk_icon_view_get_columns(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_item_width(int item_width)
{
  gtk_icon_view_set_item_width(gobj(), item_width);
}

int IconView::get_icon_width() const
{
  return gtk_icon_view_get_item_width(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_spacing(int spacing)
{
  gtk_icon_view_set_spacing(gobj(), spacing);
}

int IconView::get_spacing() const
{
  return gtk_icon_view_get_spacing(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_row_spacing(int row_spacing)
{
  gtk_icon_view_set_row_spacing(gobj(), row_spacing);
}

int IconView::get_row_spacing() const
{
  return gtk_icon_view_get_row_spacing(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_column_spacing(int column_spacing)
{
  gtk_icon_view_set_column_spacing(gobj(), column_spacing);
}

int IconView::get_column_spacing() const
{
  return gtk_icon_view_get_column_spacing(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_margin(int margin)
{
  gtk_icon_view_set_margin(gobj(), margin);
}

int IconView::get_margin() const
{
  return gtk_icon_view_get_margin(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_item_padding(int item_padding)
{
  gtk_icon_view_set_item_padding(gobj(), item_padding);
}

int IconView::get_item_padding() const
{
  return gtk_icon_view_get_item_padding(const_cast<GtkIconView*>(gobj()));
}

TreeModel::Path IconView::get_path_at_pos(int x, int y) const
{
  return Gtk::TreePath(gtk_icon_view_get_path_at_pos(const_cast<GtkIconView*>(gobj()), x, y), false);
}

void IconView::set_activate_on_single_click(bool single)
{
  gtk_icon_view_set_activate_on_single_click(gobj(), static_cast<int>(single));
}

bool IconView::get_activate_on_single_click() const
{
  return gtk_icon_view_get_activate_on_single_click(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_selection_mode(SelectionMode mode)
{
  gtk_icon_view_set_selection_mode(gobj(), static_cast<GtkSelectionMode>(mode));
}

SelectionMode IconView::get_selection_mode() const
{
  return static_cast<SelectionMode>(gtk_icon_view_get_selection_mode(const_cast<GtkIconView*>(gobj())));
}

void IconView::select_path(const TreeModel::Path& path)
{
  gtk_icon_view_select_path(gobj(), const_cast<GtkTreePath*>((path).gobj()));
}

void IconView::unselect_path(const TreeModel::Path& path)
{
  gtk_icon_view_unselect_path(gobj(), const_cast<GtkTreePath*>((path).gobj()));
}

bool IconView::path_is_selected(const TreeModel::Path& path) const
{
  return gtk_icon_view_path_is_selected(const_cast<GtkIconView*>(gobj()), const_cast<GtkTreePath*>((path).gobj()));
}

int IconView::get_item_row(const TreeModel::Path& path) const
{
  return gtk_icon_view_get_item_row(const_cast<GtkIconView*>(gobj()), const_cast<GtkTreePath*>((path).gobj()));
}

int IconView::get_item_column(const TreeModel::Path& path) const
{
  return gtk_icon_view_get_item_column(const_cast<GtkIconView*>(gobj()), const_cast<GtkTreePath*>((path).gobj()));
}

std::vector<TreePath> IconView::get_selected_items() const
{
  return Glib::ListHandler<TreePath, TreePathTraits>::list_to_vector(gtk_icon_view_get_selected_items(const_cast<GtkIconView*>(gobj())), Glib::OWNERSHIP_DEEP);
}

void IconView::select_all()
{
  gtk_icon_view_select_all(gobj());
}

void IconView::unselect_all()
{
  gtk_icon_view_unselect_all(gobj());
}

void IconView::item_activated(const TreeModel::Path& path)
{
  gtk_icon_view_item_activated(gobj(), const_cast<GtkTreePath*>((path).gobj()));
}

void IconView::set_cursor(const TreeModel::Path& path, CellRenderer& cell, bool start_editing)
{
  gtk_icon_view_set_cursor(gobj(), const_cast<GtkTreePath*>((path).gobj()), (cell).gobj(), static_cast<int>(start_editing));
}

void IconView::set_cursor(const TreeModel::Path& path, bool start_editing)
{
  gtk_icon_view_set_cursor(gobj(), const_cast<GtkTreePath*>((path).gobj()), nullptr, static_cast<int>(start_editing));
}

void IconView::scroll_to_path(const TreeModel::Path& path, bool use_align, float row_align, float col_align)
{
  gtk_icon_view_scroll_to_path(gobj(), const_cast<GtkTreePath*>((path).gobj()), static_cast<int>(use_align), row_align, col_align);
}

void IconView::enable_model_drag_source(const Glib::RefPtr<const Gdk::ContentFormats>& formats, Gdk::ModifierType start_button_mask, Gdk::DragAction actions)
{
  gtk_icon_view_enable_model_drag_source(gobj(), static_cast<GdkModifierType>(start_button_mask), const_cast<GdkContentFormats*>(Glib::unwrap(formats)), static_cast<GdkDragAction>(actions));
}

void IconView::enable_model_drag_dest(const Glib::RefPtr<const Gdk::ContentFormats>& formats, Gdk::DragAction actions)
{
  gtk_icon_view_enable_model_drag_dest(gobj(), const_cast<GdkContentFormats*>(Glib::unwrap(formats)), static_cast<GdkDragAction>(actions));
}

void IconView::unset_model_drag_source()
{
  gtk_icon_view_unset_model_drag_source(gobj());
}

void IconView::unset_model_drag_dest()
{
  gtk_icon_view_unset_model_drag_dest(gobj());
}

void IconView::set_reorderable(bool reorderable)
{
  gtk_icon_view_set_reorderable(gobj(), static_cast<int>(reorderable));
}

bool IconView::get_reorderable() const
{
  return gtk_icon_view_get_reorderable(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_drag_dest_item(const TreeModel::Path& path, DropPosition pos)
{
  gtk_icon_view_set_drag_dest_item(gobj(), const_cast<GtkTreePath*>((path).gobj()), static_cast<GtkIconViewDropPosition>(pos));
}

Glib::RefPtr<Gdk::Paintable> IconView::create_drag_icon(const TreeModel::Path& path) const
{
  return Glib::wrap(gtk_icon_view_create_drag_icon(const_cast<GtkIconView*>(gobj()), const_cast<GtkTreePath*>((path).gobj())));
}

bool IconView::get_cell_rect(const TreeModel::Path& path, const CellRenderer& cell, Gdk::Rectangle& rect) const
{
  GdkRectangle g_rect = GdkRectangle();
  auto retvalue = gtk_icon_view_get_cell_rect(const_cast<GtkIconView*>(gobj()), const_cast<GtkTreePath*>((path).gobj()), const_cast<GtkCellRenderer*>((cell).gobj()), &g_rect);
rect = Glib::wrap(&(g_rect));
  return retvalue;
}

bool IconView::get_cell_rect(const TreeModel::Path& path, Gdk::Rectangle& rect) const
{
  GdkRectangle g_rect = GdkRectangle();
  auto retvalue = gtk_icon_view_get_cell_rect(const_cast<GtkIconView*>(gobj()), const_cast<GtkTreePath*>((path).gobj()), nullptr, &g_rect);
rect = Glib::wrap(&(g_rect));
  return retvalue;
}

void IconView::set_tooltip_item(const Glib::RefPtr<Tooltip>& tooltip, const TreeModel::Path& path)
{
  gtk_icon_view_set_tooltip_item(gobj(), Glib::unwrap(tooltip), const_cast<GtkTreePath*>((path).gobj()));
}

void IconView::set_tooltip_cell(const Glib::RefPtr<Tooltip>& tooltip, const TreeModel::Path& path, CellRenderer& cell)
{
  gtk_icon_view_set_tooltip_cell(gobj(), Glib::unwrap(tooltip), const_cast<GtkTreePath*>((path).gobj()), (cell).gobj());
}

void IconView::set_tooltip_column(int column)
{
  gtk_icon_view_set_tooltip_column(gobj(), column);
}

int IconView::get_tooltip_column() const
{
  return gtk_icon_view_get_tooltip_column(const_cast<GtkIconView*>(gobj()));
}


Glib::SignalProxy<void(const TreeModel::Path&)> IconView::signal_item_activated()
{
  return Glib::SignalProxy<void(const TreeModel::Path&) >(this, &IconView_signal_item_activated_info);
}


Glib::SignalProxy<void()> IconView::signal_selection_changed()
{
  return Glib::SignalProxy<void() >(this, &IconView_signal_selection_changed_info);
}


Glib::PropertyProxy< int > IconView::property_pixbuf_column() 
{
  return Glib::PropertyProxy< int >(this, "pixbuf-column");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_pixbuf_column() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "pixbuf-column");
}

Glib::PropertyProxy< int > IconView::property_text_column() 
{
  return Glib::PropertyProxy< int >(this, "text-column");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_text_column() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "text-column");
}

Glib::PropertyProxy< int > IconView::property_markup_column() 
{
  return Glib::PropertyProxy< int >(this, "markup-column");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_markup_column() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "markup-column");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<SelectionMode>::value,
  "Type SelectionMode cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< SelectionMode > IconView::property_selection_mode() 
{
  return Glib::PropertyProxy< SelectionMode >(this, "selection-mode");
}

Glib::PropertyProxy_ReadOnly< SelectionMode > IconView::property_selection_mode() const
{
  return Glib::PropertyProxy_ReadOnly< SelectionMode >(this, "selection-mode");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Orientation>::value,
  "Type Orientation cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Orientation > IconView::property_item_orientation() 
{
  return Glib::PropertyProxy< Orientation >(this, "item-orientation");
}

Glib::PropertyProxy_ReadOnly< Orientation > IconView::property_item_orientation() const
{
  return Glib::PropertyProxy_ReadOnly< Orientation >(this, "item-orientation");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<TreeModel>>::value,
  "Type Glib::RefPtr<TreeModel> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Glib::RefPtr<TreeModel> > IconView::property_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<TreeModel> >(this, "model");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeModel> > IconView::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeModel> >(this, "model");
}

Glib::PropertyProxy< int > IconView::property_columns() 
{
  return Glib::PropertyProxy< int >(this, "columns");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_columns() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "columns");
}

Glib::PropertyProxy< int > IconView::property_item_width() 
{
  return Glib::PropertyProxy< int >(this, "item-width");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_item_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "item-width");
}

Glib::PropertyProxy< int > IconView::property_spacing() 
{
  return Glib::PropertyProxy< int >(this, "spacing");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "spacing");
}

Glib::PropertyProxy< int > IconView::property_row_spacing() 
{
  return Glib::PropertyProxy< int >(this, "row-spacing");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_row_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "row-spacing");
}

Glib::PropertyProxy< int > IconView::property_column_spacing() 
{
  return Glib::PropertyProxy< int >(this, "column-spacing");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_column_spacing() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "column-spacing");
}

Glib::PropertyProxy< int > IconView::property_margin() 
{
  return Glib::PropertyProxy< int >(this, "margin");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_margin() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "margin");
}

Glib::PropertyProxy< int > IconView::property_reorderable() 
{
  return Glib::PropertyProxy< int >(this, "reorderable");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_reorderable() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "reorderable");
}

Glib::PropertyProxy< int > IconView::property_tooltip_column() 
{
  return Glib::PropertyProxy< int >(this, "tooltip-column");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_tooltip_column() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "tooltip-column");
}

Glib::PropertyProxy< int > IconView::property_item_padding() 
{
  return Glib::PropertyProxy< int >(this, "item-padding");
}

Glib::PropertyProxy_ReadOnly< int > IconView::property_item_padding() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "item-padding");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<CellArea>>::value,
  "Type Glib::RefPtr<CellArea> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> > IconView::property_cell_area() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<CellArea> >(this, "cell-area");
}

Glib::PropertyProxy< bool > IconView::property_activate_on_single_click() 
{
  return Glib::PropertyProxy< bool >(this, "activate-on-single-click");
}

Glib::PropertyProxy_ReadOnly< bool > IconView::property_activate_on_single_click() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "activate-on-single-click");
}


} // namespace Gtk


