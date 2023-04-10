// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/cellrenderer.h>
#include <gtkmm/private/cellrenderer_p.h>


/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtk/gtk.h>
#include <gtkmm/snapshot.h>

namespace Gtk
{

Gdk::Rectangle CellRenderer::get_aligned_area(Widget& widget, CellRendererState flags,
  const Gdk::Rectangle& cell_area) const
{
  GdkRectangle gdk_aligned_area;
  gtk_cell_renderer_get_aligned_area(const_cast<GtkCellRenderer*>(gobj()), widget.gobj(),
    static_cast<GtkCellRendererState>(flags), cell_area.gobj(), &gdk_aligned_area);

  return Glib::wrap(&gdk_aligned_area);
}

Glib::PropertyProxy_Base CellRenderer::_property_renderable()
{
  g_assert_not_reached();
  return Glib::PropertyProxy<int>(nullptr, nullptr); // shut up warnings
}

//These vfunc callbacks are custom implemented because we want the output
//arguments of the C++ vfuncs to be int& (not int*), and the vfunc_callback
//functions may be called from gtk+ with a NULL pointer.
void CellRenderer_Class::get_preferred_width_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, int* minimum_width, int* natural_width)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        int min_width = 0;
        int nat_width = 0;
        obj->get_preferred_width_vfunc(*Glib::wrap(widget),
             (minimum_width ? *minimum_width : min_width),
             (natural_width ? *natural_width : nat_width));
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_preferred_width)
    (*base->get_preferred_width)(self, widget, minimum_width, natural_width);
}

void CellRenderer_Class::get_preferred_height_for_width_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, int width, int* minimum_height, int* natural_height)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        int min_height = 0;
        int nat_height = 0;
        obj->get_preferred_height_for_width_vfunc(*Glib::wrap(widget), width,
             (minimum_height ? *minimum_height : min_height),
             (natural_height ? *natural_height : nat_height));
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_preferred_height_for_width)
    (*base->get_preferred_height_for_width)(self, widget, width, minimum_height, natural_height);
}

void CellRenderer_Class::get_preferred_height_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, int* minimum_height, int* natural_height)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        int min_height = 0;
        int nat_height = 0;
        obj->get_preferred_height_vfunc(*Glib::wrap(widget),
             (minimum_height ? *minimum_height : min_height),
             (natural_height ? *natural_height : nat_height));
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_preferred_height)
    (*base->get_preferred_height)(self, widget, minimum_height, natural_height);
}

void CellRenderer_Class::get_preferred_width_for_height_vfunc_callback(GtkCellRenderer* self, GtkWidget* widget, int height, int* minimum_width, int* natural_width)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        int min_width = 0;
        int nat_width = 0;
        obj->get_preferred_width_for_height_vfunc(*Glib::wrap(widget), height,
             (minimum_width ? *minimum_width : min_width),
             (natural_width ? *natural_width : nat_width));
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_preferred_width_for_height)
    (*base->get_preferred_width_for_height)(self, widget, height, minimum_width, natural_width);
}

} // namespace Gtk

namespace
{


static const Glib::SignalProxyInfo CellRenderer_signal_editing_canceled_info =
{
  "editing_canceled",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void CellRenderer_signal_editing_started_callback(GtkCellRenderer* self, GtkCellEditable* p0,const gchar* p1,void* data)
{
  using namespace Gtk;
  using SlotType = sigc::slot<void(CellEditable*, const Glib::ustring&)>;

  auto obj = dynamic_cast<CellRenderer*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(dynamic_cast<CellEditable*>(Glib::wrap_auto((GObject*)(p0), false))
, Glib::convert_const_gchar_ptr_to_ustring(p1)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo CellRenderer_signal_editing_started_info =
{
  "editing_started",
  (GCallback) &CellRenderer_signal_editing_started_callback,
  (GCallback) &CellRenderer_signal_editing_started_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::CellRendererState>::value_type()
{
  return gtk_cell_renderer_state_get_type();
}

// static
GType Glib::Value<Gtk::CellRendererMode>::value_type()
{
  return gtk_cell_renderer_mode_get_type();
}


namespace Glib
{

Gtk::CellRenderer* wrap(GtkCellRenderer* object, bool take_copy)
{
  return dynamic_cast<Gtk::CellRenderer *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& CellRenderer_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CellRenderer_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_cell_renderer_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CellRenderer_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->get_request_mode = &get_request_mode_vfunc_callback;
  klass->get_preferred_width = &get_preferred_width_vfunc_callback;
  klass->get_preferred_height_for_width = &get_preferred_height_for_width_vfunc_callback;
  klass->get_preferred_height = &get_preferred_height_vfunc_callback;
  klass->get_preferred_width_for_height = &get_preferred_width_for_height_vfunc_callback;
  klass->snapshot = &snapshot_vfunc_callback;
  klass->activate = &activate_vfunc_callback;
  klass->start_editing = &start_editing_vfunc_callback;

  klass->editing_canceled = &editing_canceled_callback;
  klass->editing_started = &editing_started_callback;
}

GtkSizeRequestMode CellRenderer_Class::get_request_mode_vfunc_callback(GtkCellRenderer* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return static_cast<GtkSizeRequestMode>(obj->get_request_mode_vfunc());
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->get_request_mode)
    return (*base->get_request_mode)(self);

  using RType = GtkSizeRequestMode;
  return RType();
}
void CellRenderer_Class::snapshot_vfunc_callback(GtkCellRenderer* self, GtkSnapshot* snapshot, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->snapshot_vfunc(Glib::wrap_gtk_snapshot(snapshot, true)
, *Glib::wrap(widget)
, Glib::wrap(background_area)
, Glib::wrap(cell_area)
, static_cast<CellRendererState>(flags)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->snapshot)
    (*base->snapshot)(self, snapshot, widget, background_area, cell_area, flags);
}
gboolean CellRenderer_Class::activate_vfunc_callback(GtkCellRenderer* self, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return static_cast<int>(obj->activate_vfunc(Glib::wrap(event, true)
, *Glib::wrap(widget)
, Glib::convert_const_gchar_ptr_to_ustring(path)
, Glib::wrap(background_area)
, Glib::wrap(cell_area)
, static_cast<CellRendererState>(flags)
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->activate)
    return (*base->activate)(self, event, widget, path, background_area, cell_area, flags);

  using RType = gboolean;
  return RType();
}
GtkCellEditable* CellRenderer_Class::start_editing_vfunc_callback(GtkCellRenderer* self, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        return Glib::unwrap(obj->start_editing_vfunc(Glib::wrap(event, true)
, *Glib::wrap(widget)
, Glib::convert_const_gchar_ptr_to_ustring(path)
, Glib::wrap(background_area)
, Glib::wrap(cell_area)
, static_cast<CellRendererState>(flags)
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->start_editing)
    return (*base->start_editing)(self, event, widget, path, background_area, cell_area, flags);

  using RType = GtkCellEditable*;
  return RType();
}

void CellRenderer_Class::editing_canceled_callback(GtkCellRenderer* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_editing_canceled();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->editing_canceled)
    (*base->editing_canceled)(self);
}
void CellRenderer_Class::editing_started_callback(GtkCellRenderer* self, GtkCellEditable* p0, const gchar* p1)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_editing_started(dynamic_cast<CellEditable*>(Glib::wrap_auto((GObject*)(p0), false))
, Glib::convert_const_gchar_ptr_to_ustring(p1)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->editing_started)
    (*base->editing_started)(self, p0, p1);
}


Glib::ObjectBase* CellRenderer_Class::wrap_new(GObject* o)
{
  return manage(new CellRenderer((GtkCellRenderer*)(o)));

}


/* The implementation: */

CellRenderer::CellRenderer(const Glib::ConstructParams& construct_params)
:
  Gtk::Object(construct_params)
{
  }

CellRenderer::CellRenderer(GtkCellRenderer* castitem)
:
  Gtk::Object((GObject*)(castitem))
{
  }


CellRenderer::CellRenderer(CellRenderer&& src) noexcept
: Gtk::Object(std::move(src))
{}

CellRenderer& CellRenderer::operator=(CellRenderer&& src) noexcept
{
  Gtk::Object::operator=(std::move(src));
  return *this;
}

CellRenderer::~CellRenderer() noexcept
{
  destroy_();
}

CellRenderer::CppClassType CellRenderer::cellrenderer_class_; // initialize static member

GType CellRenderer::get_type()
{
  return cellrenderer_class_.init().get_type();
}


GType CellRenderer::get_base_type()
{
  return gtk_cell_renderer_get_type();
}


SizeRequestMode CellRenderer::get_request_mode() const
{
  return static_cast<SizeRequestMode>(gtk_cell_renderer_get_request_mode(const_cast<GtkCellRenderer*>(gobj())));
}

void CellRenderer::get_preferred_width(Widget& widget, int& minimum_width, int& natural_width) const
{
  gtk_cell_renderer_get_preferred_width(const_cast<GtkCellRenderer*>(gobj()), (widget).gobj(), &(minimum_width), &(natural_width));
}

void CellRenderer::get_preferred_height_for_width(Widget& widget, int width, int& minimum_height, int& natural_height) const
{
  gtk_cell_renderer_get_preferred_height_for_width(const_cast<GtkCellRenderer*>(gobj()), (widget).gobj(), width, &(minimum_height), &(natural_height));
}

void CellRenderer::get_preferred_height(Widget& widget, int& minimum_height, int& natural_height) const
{
  gtk_cell_renderer_get_preferred_height(const_cast<GtkCellRenderer*>(gobj()), (widget).gobj(), &(minimum_height), &(natural_height));
}

void CellRenderer::get_preferred_width_for_height(Widget& widget, int height, int& minimum_width, int& natural_width) const
{
  gtk_cell_renderer_get_preferred_width_for_height(const_cast<GtkCellRenderer*>(gobj()), (widget).gobj(), height, &(minimum_width), &(natural_width));
}

void CellRenderer::get_preferred_size(Widget& widget, Requisition& minimum_size, Requisition& natural_size) const
{
  gtk_cell_renderer_get_preferred_size(const_cast<GtkCellRenderer*>(gobj()), (widget).gobj(), (minimum_size).gobj(), (natural_size).gobj());
}

void CellRenderer::snapshot(const Glib::RefPtr<Gtk::Snapshot>& snapshot, Widget& widget, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags)
{
  gtk_cell_renderer_snapshot(gobj(), Glib::unwrap(snapshot), (widget).gobj(), (background_area).gobj(), (cell_area).gobj(), static_cast<GtkCellRendererState>(flags));
}

bool CellRenderer::activate(const Glib::RefPtr<const Gdk::Event>& event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags)
{
  return gtk_cell_renderer_activate(gobj(), const_cast<GdkEvent*>(Glib::unwrap(event)), (widget).gobj(), path.c_str(), (background_area).gobj(), (cell_area).gobj(), static_cast<GtkCellRendererState>(flags));
}

CellEditable* CellRenderer::start_editing(const Glib::RefPtr<const Gdk::Event>& event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags)
{
  return dynamic_cast<CellEditable*>(Glib::wrap_auto((GObject*)(gtk_cell_renderer_start_editing(gobj(), const_cast<GdkEvent*>(Glib::unwrap(event)), (widget).gobj(), path.c_str(), (background_area).gobj(), (cell_area).gobj(), static_cast<GtkCellRendererState>(flags))), false));
}

void CellRenderer::set_fixed_size(int width, int height)
{
  gtk_cell_renderer_set_fixed_size(gobj(), width, height);
}

void CellRenderer::get_fixed_size(int& width, int& height) const
{
  gtk_cell_renderer_get_fixed_size(const_cast<GtkCellRenderer*>(gobj()), &(width), &(height));
}

void CellRenderer::set_alignment(float xalign, float yalign)
{
  gtk_cell_renderer_set_alignment(gobj(), xalign, yalign);
}

void CellRenderer::get_alignment(float& xalign, float& yalign) const
{
  gtk_cell_renderer_get_alignment(const_cast<GtkCellRenderer*>(gobj()), &(xalign), &(yalign));
}

void CellRenderer::set_padding(int xpad, int ypad)
{
  gtk_cell_renderer_set_padding(gobj(), xpad, ypad);
}

void CellRenderer::get_padding(int& xpad, int& ypad) const
{
  gtk_cell_renderer_get_padding(const_cast<GtkCellRenderer*>(gobj()), &(xpad), &(ypad));
}

void CellRenderer::set_visible(bool visible)
{
  gtk_cell_renderer_set_visible(gobj(), static_cast<int>(visible));
}

bool CellRenderer::get_visible() const
{
  return gtk_cell_renderer_get_visible(const_cast<GtkCellRenderer*>(gobj()));
}

void CellRenderer::set_sensitive(bool sensitive)
{
  gtk_cell_renderer_set_sensitive(gobj(), static_cast<int>(sensitive));
}

bool CellRenderer::get_sensitive() const
{
  return gtk_cell_renderer_get_sensitive(const_cast<GtkCellRenderer*>(gobj()));
}

bool CellRenderer::is_activatable() const
{
  return gtk_cell_renderer_is_activatable(const_cast<GtkCellRenderer*>(gobj()));
}

void CellRenderer::set_is_expander(bool is_expander)
{
  gtk_cell_renderer_set_is_expander(gobj(), static_cast<int>(is_expander));
}

bool CellRenderer::get_is_expander() const
{
  return gtk_cell_renderer_get_is_expander(const_cast<GtkCellRenderer*>(gobj()));
}

void CellRenderer::set_is_expanded(bool is_expanded)
{
  gtk_cell_renderer_set_is_expanded(gobj(), static_cast<int>(is_expanded));
}

bool CellRenderer::get_is_expanded() const
{
  return gtk_cell_renderer_get_is_expanded(const_cast<GtkCellRenderer*>(gobj()));
}

void CellRenderer::stop_editing(bool canceled)
{
  gtk_cell_renderer_stop_editing(gobj(), static_cast<int>(canceled));
}

StateFlags CellRenderer::get_state(Widget& widget, CellRendererState cell_state) const
{
  return static_cast<StateFlags>(gtk_cell_renderer_get_state(const_cast<GtkCellRenderer*>(gobj()), (widget).gobj(), static_cast<GtkCellRendererState>(cell_state)));
}

StateFlags CellRenderer::get_state(CellRendererState cell_state) const
{
  return static_cast<StateFlags>(gtk_cell_renderer_get_state(const_cast<GtkCellRenderer*>(gobj()), nullptr, static_cast<GtkCellRendererState>(cell_state)));
}

CellRenderer::CellRenderer()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gtk::Object(Glib::ConstructParams(cellrenderer_class_.init()))
{
  

}


Glib::SignalProxy<void()> CellRenderer::signal_editing_canceled()
{
  return Glib::SignalProxy<void() >(this, &CellRenderer_signal_editing_canceled_info);
}


Glib::SignalProxy<void(CellEditable*, const Glib::ustring&)> CellRenderer::signal_editing_started()
{
  return Glib::SignalProxy<void(CellEditable*, const Glib::ustring&) >(this, &CellRenderer_signal_editing_started_info);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<CellRendererMode>::value,
  "Type CellRendererMode cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< CellRendererMode > CellRenderer::property_mode() 
{
  return Glib::PropertyProxy< CellRendererMode >(this, "mode");
}

Glib::PropertyProxy_ReadOnly< CellRendererMode > CellRenderer::property_mode() const
{
  return Glib::PropertyProxy_ReadOnly< CellRendererMode >(this, "mode");
}

Glib::PropertyProxy< bool > CellRenderer::property_visible() 
{
  return Glib::PropertyProxy< bool >(this, "visible");
}

Glib::PropertyProxy_ReadOnly< bool > CellRenderer::property_visible() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "visible");
}

Glib::PropertyProxy< bool > CellRenderer::property_sensitive() 
{
  return Glib::PropertyProxy< bool >(this, "sensitive");
}

Glib::PropertyProxy_ReadOnly< bool > CellRenderer::property_sensitive() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "sensitive");
}

Glib::PropertyProxy< float > CellRenderer::property_xalign() 
{
  return Glib::PropertyProxy< float >(this, "xalign");
}

Glib::PropertyProxy_ReadOnly< float > CellRenderer::property_xalign() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "xalign");
}

Glib::PropertyProxy< float > CellRenderer::property_yalign() 
{
  return Glib::PropertyProxy< float >(this, "yalign");
}

Glib::PropertyProxy_ReadOnly< float > CellRenderer::property_yalign() const
{
  return Glib::PropertyProxy_ReadOnly< float >(this, "yalign");
}

Glib::PropertyProxy< unsigned int > CellRenderer::property_xpad() 
{
  return Glib::PropertyProxy< unsigned int >(this, "xpad");
}

Glib::PropertyProxy_ReadOnly< unsigned int > CellRenderer::property_xpad() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "xpad");
}

Glib::PropertyProxy< unsigned int > CellRenderer::property_ypad() 
{
  return Glib::PropertyProxy< unsigned int >(this, "ypad");
}

Glib::PropertyProxy_ReadOnly< unsigned int > CellRenderer::property_ypad() const
{
  return Glib::PropertyProxy_ReadOnly< unsigned int >(this, "ypad");
}

Glib::PropertyProxy< int > CellRenderer::property_width() 
{
  return Glib::PropertyProxy< int >(this, "width");
}

Glib::PropertyProxy_ReadOnly< int > CellRenderer::property_width() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width");
}

Glib::PropertyProxy< int > CellRenderer::property_height() 
{
  return Glib::PropertyProxy< int >(this, "height");
}

Glib::PropertyProxy_ReadOnly< int > CellRenderer::property_height() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "height");
}

Glib::PropertyProxy< bool > CellRenderer::property_is_expander() 
{
  return Glib::PropertyProxy< bool >(this, "is-expander");
}

Glib::PropertyProxy_ReadOnly< bool > CellRenderer::property_is_expander() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-expander");
}

Glib::PropertyProxy< bool > CellRenderer::property_is_expanded() 
{
  return Glib::PropertyProxy< bool >(this, "is-expanded");
}

Glib::PropertyProxy_ReadOnly< bool > CellRenderer::property_is_expanded() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-expanded");
}

Glib::PropertyProxy_WriteOnly< Glib::ustring > CellRenderer::property_cell_background() 
{
  return Glib::PropertyProxy_WriteOnly< Glib::ustring >(this, "cell-background");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Gdk::RGBA>::value,
  "Type Gdk::RGBA cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy< Gdk::RGBA > CellRenderer::property_cell_background_rgba() 
{
  return Glib::PropertyProxy< Gdk::RGBA >(this, "cell-background-rgba");
}

Glib::PropertyProxy_ReadOnly< Gdk::RGBA > CellRenderer::property_cell_background_rgba() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::RGBA >(this, "cell-background-rgba");
}

Glib::PropertyProxy< bool > CellRenderer::property_cell_background_set() 
{
  return Glib::PropertyProxy< bool >(this, "cell-background-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRenderer::property_cell_background_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "cell-background-set");
}

Glib::PropertyProxy_ReadOnly< bool > CellRenderer::property_editing() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "editing");
}


void Gtk::CellRenderer::on_editing_canceled()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->editing_canceled)
    (*base->editing_canceled)(gobj());
}
void Gtk::CellRenderer::on_editing_started(CellEditable* editable, const Glib::ustring& path)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->editing_started)
    (*base->editing_started)(gobj(),Glib::unwrap(editable),path.c_str());
}

SizeRequestMode Gtk::CellRenderer::get_request_mode_vfunc() const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_request_mode)
  {
    SizeRequestMode retval(static_cast<SizeRequestMode>((*base->get_request_mode)(const_cast<GtkCellRenderer*>(gobj()))));
    return retval;
  }

  using RType = SizeRequestMode;
  return RType();
}
void Gtk::CellRenderer::get_preferred_width_vfunc(Widget& widget, int& minimum_width, int& natural_width) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_preferred_width)
  {
    (*base->get_preferred_width)(const_cast<GtkCellRenderer*>(gobj()),(widget).gobj(),&(minimum_width),&(natural_width));
  }
}
void Gtk::CellRenderer::get_preferred_height_for_width_vfunc(Widget& widget, int width, int& minimum_height, int& natural_height) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_preferred_height_for_width)
  {
    (*base->get_preferred_height_for_width)(const_cast<GtkCellRenderer*>(gobj()),(widget).gobj(),width,&(minimum_height),&(natural_height));
  }
}
void Gtk::CellRenderer::get_preferred_height_vfunc(Widget& widget, int& minimum_height, int& natural_height) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_preferred_height)
  {
    (*base->get_preferred_height)(const_cast<GtkCellRenderer*>(gobj()),(widget).gobj(),&(minimum_height),&(natural_height));
  }
}
void Gtk::CellRenderer::get_preferred_width_for_height_vfunc(Widget& widget, int height, int& minimum_width, int& natural_width) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->get_preferred_width_for_height)
  {
    (*base->get_preferred_width_for_height)(const_cast<GtkCellRenderer*>(gobj()),(widget).gobj(),height,&(minimum_width),&(natural_width));
  }
}
void Gtk::CellRenderer::snapshot_vfunc(const Glib::RefPtr<Gtk::Snapshot>& snapshot, Widget& widget, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->snapshot)
  {
    (*base->snapshot)(gobj(),Glib::unwrap(snapshot),(widget).gobj(),(background_area).gobj(),(cell_area).gobj(),static_cast<GtkCellRendererState>(flags));
  }
}
bool Gtk::CellRenderer::activate_vfunc(const Glib::RefPtr<const Gdk::Event>& event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->activate)
  {
    bool retval((*base->activate)(gobj(),const_cast<GdkEvent*>(Glib::unwrap(event)),(widget).gobj(),path.c_str(),(background_area).gobj(),(cell_area).gobj(),static_cast<GtkCellRendererState>(flags)));
    return retval;
  }

  using RType = bool;
  return RType();
}
CellEditable* Gtk::CellRenderer::start_editing_vfunc(const Glib::RefPtr<const Gdk::Event>& event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->start_editing)
  {
    CellEditable* retval(dynamic_cast<CellEditable*>(Glib::wrap_auto((GObject*)((*base->start_editing)(gobj(),const_cast<GdkEvent*>(Glib::unwrap(event)),(widget).gobj(),path.c_str(),(background_area).gobj(),(cell_area).gobj(),static_cast<GtkCellRendererState>(flags))), false)));
    return retval;
  }

  using RType = CellEditable*;
  return RType();
}


} // namespace Gtk


