// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/contentprovider.h>
#include <gdkmm/private/contentprovider_p.h>

#include <gdk/gdk.h>

/* Copyright (C) 2017 The gtkmm Development Team
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

#include <giomm/slot_async.h>
#include <giomm/outputstream.h>

namespace Gdk
{

Glib::RefPtr<ContentProvider> ContentProvider::create(
  const std::vector<Glib::RefPtr<ContentProvider>>& providers)
{
  // gdk_content_provider_new_union() does not take a reference on the
  // supplied elements, but it unrefs them when the created
  // content provider union is deleted. [transfer elements]
  for (auto provider : providers)
    provider->reference();

  return Glib::wrap(gdk_content_provider_new_union(
    Glib::ArrayHandler<Glib::RefPtr<ContentProvider>>::vector_to_array(providers).data(),
    providers.size()));
}

} // namespace Gdk

namespace
{


static const Glib::SignalProxyInfo ContentProvider_signal_content_changed_info =
{
  "content-changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::ContentProvider> wrap(GdkContentProvider* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::ContentProvider>( dynamic_cast<Gdk::ContentProvider*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& ContentProvider_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ContentProvider_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_content_provider_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ContentProvider_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->content_changed = &content_changed_callback;
}


void ContentProvider_Class::content_changed_callback(GdkContentProvider* self)
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
        obj->on_content_changed();
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
  if(base && base->content_changed)
    (*base->content_changed)(self);
}


Glib::ObjectBase* ContentProvider_Class::wrap_new(GObject* object)
{
  return new ContentProvider((GdkContentProvider*)object);
}


/* The implementation: */

GdkContentProvider* ContentProvider::gobj_copy()
{
  reference();
  return gobj();
}

ContentProvider::ContentProvider(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

ContentProvider::ContentProvider(GdkContentProvider* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


ContentProvider::ContentProvider(ContentProvider&& src) noexcept
: Glib::Object(std::move(src))
{}

ContentProvider& ContentProvider::operator=(ContentProvider&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


ContentProvider::~ContentProvider() noexcept
{}


ContentProvider::CppClassType ContentProvider::contentprovider_class_; // initialize static member

GType ContentProvider::get_type()
{
  return contentprovider_class_.init().get_type();
}


GType ContentProvider::get_base_type()
{
  return gdk_content_provider_get_type();
}


ContentProvider::ContentProvider()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(contentprovider_class_.init()))
{
  

}

Glib::RefPtr<ContentProvider> ContentProvider::create(const Glib::ValueBase& value)
{
  return Glib::wrap(gdk_content_provider_new_for_value((value).gobj()));
}

Glib::RefPtr<ContentProvider> ContentProvider::create(const Glib::ustring& mime_type, const Glib::RefPtr<const Glib::Bytes>& bytes)
{
  return Glib::wrap(gdk_content_provider_new_for_bytes(mime_type.c_str(), const_cast<GBytes*>(Glib::unwrap<Glib::Bytes>(bytes))));
}

Glib::RefPtr<ContentFormats> ContentProvider::ref_formats() const
{
  return Glib::wrap(gdk_content_provider_ref_formats(const_cast<GdkContentProvider*>(gobj())));
}

Glib::RefPtr<ContentFormats> ContentProvider::ref_storable_formats() const
{
  return Glib::wrap(gdk_content_provider_ref_storable_formats(const_cast<GdkContentProvider*>(gobj())));
}

void ContentProvider::content_changed()
{
  gdk_content_provider_content_changed(gobj());
}

void ContentProvider::write_mime_type_async(const Glib::ustring& mime_type, const Glib::RefPtr<Gio::OutputStream>& stream, int io_priority, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable) const
{
  // Create a copy of the slot.
  auto slot_copy = new Gio::SlotAsyncReady(slot); 

  gdk_content_provider_write_mime_type_async(const_cast<GdkContentProvider*>(gobj()), mime_type.c_str(), Glib::unwrap(stream), io_priority, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &Gio::SignalProxy_async_callback, slot_copy);
}

void ContentProvider::write_mime_type_async(const Glib::ustring& mime_type, const Glib::RefPtr<Gio::OutputStream>& stream, int io_priority, const Gio::SlotAsyncReady& slot) const
{
  // Create a copy of the slot.
  auto slot_copy = new Gio::SlotAsyncReady(slot); 

  gdk_content_provider_write_mime_type_async(const_cast<GdkContentProvider*>(gobj()), mime_type.c_str(), Glib::unwrap(stream), io_priority, nullptr, &Gio::SignalProxy_async_callback, slot_copy);
}

void ContentProvider::write_mime_type_finish(const Glib::RefPtr<Gio::AsyncResult>& result) const
{
  GError* gerror = nullptr;
  gdk_content_provider_write_mime_type_finish(const_cast<GdkContentProvider*>(gobj()), Glib::unwrap(result), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

void ContentProvider::get_value(Glib::ValueBase& value) const
{
  GError* gerror = nullptr;
  gdk_content_provider_get_value(const_cast<GdkContentProvider*>(gobj()), (value).gobj(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}


Glib::SignalProxy<void()> ContentProvider::signal_content_changed()
{
  return Glib::SignalProxy<void() >(this, &ContentProvider_signal_content_changed_info);
}


static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<ContentFormats>>::value,
  "Type Glib::RefPtr<ContentFormats> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ContentFormats> > ContentProvider::property_formats() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ContentFormats> >(this, "formats");
}

static_assert(Glib::Traits::ValueCompatibleWithWrapProperty<Glib::RefPtr<ContentFormats>>::value,
  "Type Glib::RefPtr<ContentFormats> cannot be used in _WRAP_PROPERTY. "
  "There is no suitable template specialization of Glib::Value<>.");

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ContentFormats> > ContentProvider::property_storable_formats() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ContentFormats> >(this, "storable-formats");
}


void Gdk::ContentProvider::on_content_changed()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->content_changed)
    (*base->content_changed)(gobj());
}


} // namespace Gdk


