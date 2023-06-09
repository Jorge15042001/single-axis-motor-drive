// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!

    // Needed before gtkmm/private/buildable_p.h is included.
    typedef struct _GtkBuilder GtkBuilder;
    typedef struct _GtkBuildableParser GtkBuildableParser;
  

#include <glibmm.h>

#include <gtkmm/buildable.h>
#include <gtkmm/private/buildable_p.h>


/* Copyright 2009 The gtkmm Development Team
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
#include <gtkmm/builder.h>
#include <cstring>

namespace Gtk
{

//static
gboolean Buildable_Class::custom_tag_start_vfunc_callback(
  GtkBuildable* buildable,
  GtkBuilder* builder,
  GObject* child,
  const char* tagname,
  GtkBuildableParser* parser,
  gpointer* data)
{
  // If it's a TreeModel (such as ListStore or TreeStore) and it's the start
  // of a <columns> element, inform the Builder that the get_type_from_name()
  // vfunc in BuilderScope shall not search for gtkmm-derived types.
  // See https://bugzilla.gnome.org/show_bug.cgi?id=742637
  if (GTK_IS_TREE_MODEL(buildable) && std::strcmp(tagname, "columns") == 0)
  {
    const auto cpp_builder = dynamic_cast<Builder*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)builder));
    if (cpp_builder)
      cpp_builder->set_no_gtkmm_derived_types(true);
  }

  const auto base = static_cast<BaseClassType*>(
    g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
      g_type_interface_peek(G_OBJECT_GET_CLASS(buildable), CppObjectType::get_type()) // Get the interface.
    )
  );

  // Call the original underlying C function:
  if (base && base->custom_tag_start)
    return (*base->custom_tag_start)(buildable, builder, child, tagname, parser, data);
  return false;
}

//static
void Buildable_Class::custom_tag_end_vfunc_callback(
  GtkBuildable* buildable,
  GtkBuilder* builder,
  GObject* child,
  const char* tagname,
  gpointer data)
{
  const auto base = static_cast<BaseClassType*>(
    g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
      g_type_interface_peek(G_OBJECT_GET_CLASS(buildable), CppObjectType::get_type()) // Get the interface.
    )
  );

  // Call the original underlying C function:
  if (base && base->custom_tag_end)
    (*base->custom_tag_end)(buildable, builder, child, tagname, data);

  // If it's a TreeModel (such as ListStore or TreeStore) and it's the end
  // of a </columns> element, inform the Builder that the get_type_from_name()
  // vfunc in BuilderScope shall resume search for gtkmm-derived types.
  // See https://bugzilla.gnome.org/show_bug.cgi?id=742637
  if (GTK_IS_TREE_MODEL(buildable) && std::strcmp(tagname, "columns") == 0)
  {
    const auto cpp_builder = dynamic_cast<Builder*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)builder));
    if (cpp_builder)
      cpp_builder->set_no_gtkmm_derived_types(false);
  }
}

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::Buildable> wrap(GtkBuildable* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::Buildable>( dynamic_cast<Gtk::Buildable*> (Glib::wrap_auto_interface<Gtk::Buildable> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& Buildable_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Buildable_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_buildable_get_type();
  }

  return *this;
}

void Buildable_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

    klass->custom_tag_start = &custom_tag_start_vfunc_callback;
    klass->custom_tag_end = &custom_tag_end_vfunc_callback;
  
}


Glib::ObjectBase* Buildable_Class::wrap_new(GObject* object)
{
  return new Buildable((GtkBuildable*)(object));
}


/* The implementation: */

Buildable::Buildable()
:
  Glib::Interface(buildable_class_.init())
{}

Buildable::Buildable(GtkBuildable* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Buildable::Buildable(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Buildable::Buildable(Buildable&& src) noexcept
: Glib::Interface(std::move(src))
{}

Buildable& Buildable::operator=(Buildable&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

Buildable::~Buildable() noexcept
{}

// static
void Buildable::add_interface(GType gtype_implementer)
{
  buildable_class_.init().add_interface(gtype_implementer);
}

Buildable::CppClassType Buildable::buildable_class_; // initialize static member

GType Buildable::get_type()
{
  return buildable_class_.init().get_type();
}


GType Buildable::get_base_type()
{
  return gtk_buildable_get_type();
}


Glib::ustring Buildable::get_buildable_id() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_buildable_get_buildable_id(const_cast<GtkBuildable*>(gobj())));
}


} // namespace Gtk


