// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_SELECTIONMODEL_P_H
#define _GTKMM_SELECTIONMODEL_P_H


#include <glibmm/private/interface_p.h>
#include <gtk/gtk.h>

#include <glibmm/private/interface_p.h>

namespace Gtk
{

class GTKMM_API SelectionModel_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = SelectionModel;
  using BaseObjectType = GtkSelectionModel;
  using BaseClassType = GtkSelectionModelInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class SelectionModel;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static gboolean is_selected_vfunc_callback(GtkSelectionModel* self, guint position);
  static GtkBitset* get_selection_in_range_vfunc_callback(GtkSelectionModel* self, guint position, guint n_items);
  static gboolean select_item_vfunc_callback(GtkSelectionModel* self, guint position, gboolean unselect_rest);
  static gboolean unselect_item_vfunc_callback(GtkSelectionModel* self, guint position);
  static gboolean select_range_vfunc_callback(GtkSelectionModel* self, guint position, guint n_items, gboolean unselect_rest);
  static gboolean unselect_range_vfunc_callback(GtkSelectionModel* self, guint position, guint n_items);
  static gboolean select_all_vfunc_callback(GtkSelectionModel* self);
  static gboolean unselect_all_vfunc_callback(GtkSelectionModel* self);
  static gboolean set_selection_vfunc_callback(GtkSelectionModel* self, GtkBitset* selected, GtkBitset* mask);
};


} // namespace Gtk


#endif /* _GTKMM_SELECTIONMODEL_P_H */

