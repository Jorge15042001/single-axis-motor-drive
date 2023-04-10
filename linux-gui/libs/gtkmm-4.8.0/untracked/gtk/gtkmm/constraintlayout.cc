// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/constraintlayout.h>
#include <gtkmm/private/constraintlayout_p.h>


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

#include <gtk/gtk.h>

namespace Gtk
{

void ConstraintLayout::add_constraint(const Glib::RefPtr<Constraint>& constraint)
{
  // gtk_constraint_layout_add_constraint() does not take a ref.
  if (constraint)
    constraint->reference();
  gtk_constraint_layout_add_constraint(gobj(), Glib::unwrap(constraint));
}

void ConstraintLayout::add_guide(const Glib::RefPtr<ConstraintGuide>& guide)
{
  // gtk_constraint_layout_add_guide() does not take a ref.
  if (guide)
    guide->reference();
  gtk_constraint_layout_add_guide(gobj(), Glib::unwrap(guide));
}

std::vector<Glib::RefPtr<Constraint>> ConstraintLayout::add_constraints_from_description(
  const std::vector<Glib::ustring>& lines, int hspacing, int vspacing, const VFLmap& views)
{
  GHashTable* hash_table_views = g_hash_table_new(g_str_hash, g_str_equal);
  for (const auto& it : views)
    g_hash_table_insert(hash_table_views, const_cast<char*>(it.first.c_str()), it.second->gobj());

  GError* gerror = nullptr;
  GList* constraints = gtk_constraint_layout_add_constraints_from_descriptionv(
    gobj(), Glib::ArrayHandler<Glib::ustring>::vector_to_array(lines).data(),
    lines.size(), hspacing, vspacing, hash_table_views, &gerror);

  g_hash_table_unref(hash_table_views);

  if (gerror)
  {
    g_list_free(constraints);
    ::Glib::Error::throw_exception(gerror);
  }

  return Glib::ListHandler<Glib::RefPtr<Constraint>>::list_to_vector(
    constraints, Glib::OWNERSHIP_SHALLOW);
}

} // namespace Gtk

namespace
{
} // anonymous namespace


Gtk::ConstraintVflParserError::ConstraintVflParserError(Gtk::ConstraintVflParserError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GTK_CONSTRAINT_VFL_PARSER_ERROR, error_code, error_message)
{}

Gtk::ConstraintVflParserError::ConstraintVflParserError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gtk::ConstraintVflParserError::Code Gtk::ConstraintVflParserError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gtk::ConstraintVflParserError::throw_func(GError* gobject)
{
  throw Gtk::ConstraintVflParserError(gobject);
}

// static
GType Glib::Value<Gtk::ConstraintVflParserError::Code>::value_type()
{
  return gtk_constraint_vfl_parser_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::ConstraintLayout> wrap(GtkConstraintLayout* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::ConstraintLayout>( dynamic_cast<Gtk::ConstraintLayout*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ConstraintLayout_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ConstraintLayout_Class::class_init_function;

    // Do not derive a GType, or use a derived class:
    gtype_ = gtk_constraint_layout_get_type();

  }

  return *this;
}


void ConstraintLayout_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ConstraintLayout_Class::wrap_new(GObject* object)
{
  return new ConstraintLayout((GtkConstraintLayout*)object);
}


/* The implementation: */

GtkConstraintLayout* ConstraintLayout::gobj_copy()
{
  reference();
  return gobj();
}

ConstraintLayout::ConstraintLayout(const Glib::ConstructParams& construct_params)
:
  LayoutManager(construct_params)
{

}

ConstraintLayout::ConstraintLayout(GtkConstraintLayout* castitem)
:
  LayoutManager((GtkLayoutManager*)(castitem))
{}


ConstraintLayout::ConstraintLayout(ConstraintLayout&& src) noexcept
: LayoutManager(std::move(src))
  , Buildable(std::move(src))
{}

ConstraintLayout& ConstraintLayout::operator=(ConstraintLayout&& src) noexcept
{
  LayoutManager::operator=(std::move(src));
  Buildable::operator=(std::move(src));
  return *this;
}


ConstraintLayout::~ConstraintLayout() noexcept
{}


ConstraintLayout::CppClassType ConstraintLayout::constraintlayout_class_; // initialize static member

GType ConstraintLayout::get_type()
{
  return constraintlayout_class_.init().get_type();
}


GType ConstraintLayout::get_base_type()
{
  return gtk_constraint_layout_get_type();
}


ConstraintLayout::ConstraintLayout()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  LayoutManager(Glib::ConstructParams(constraintlayout_class_.init()))
{
  

}

Glib::RefPtr<ConstraintLayout> ConstraintLayout::create()
{
  return Glib::make_refptr_for_instance<ConstraintLayout>( new ConstraintLayout() );
}

void ConstraintLayout::remove_constraint(const Glib::RefPtr<Constraint>& constraint)
{
  gtk_constraint_layout_remove_constraint(gobj(), Glib::unwrap(constraint));
}

void ConstraintLayout::remove_all_constraints()
{
  gtk_constraint_layout_remove_all_constraints(gobj());
}

void ConstraintLayout::remove_guide(const Glib::RefPtr<ConstraintGuide>& guide)
{
  gtk_constraint_layout_remove_guide(gobj(), Glib::unwrap(guide));
}

Glib::RefPtr<Gio::ListModel> ConstraintLayout::observe_constraints()
{
  return Glib::wrap(gtk_constraint_layout_observe_constraints(gobj()));
}

Glib::RefPtr<const Gio::ListModel> ConstraintLayout::observe_constraints() const
{
  return const_cast<ConstraintLayout*>(this)->observe_constraints();
}

Glib::RefPtr<Gio::ListModel> ConstraintLayout::observe_guides()
{
  return Glib::wrap(gtk_constraint_layout_observe_guides(gobj()));
}

Glib::RefPtr<const Gio::ListModel> ConstraintLayout::observe_guides() const
{
  return const_cast<ConstraintLayout*>(this)->observe_guides();
}


} // namespace Gtk


