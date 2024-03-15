#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SROptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SROptions"));
	}

	template <typename R = SROptions*> static R& _current() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = SROptionsPropertyChanged*> R& PropertyChanged() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& InterfacePropertyChangedEventHandler() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = SROptions*> static R get_Current() {
		return ((R (*)(void *))(Il2CppBase() + 0x1354B68))(0);
	}
	template <typename R = void> static R OnStartup() {
		return ((R (*)(void *))(Il2CppBase() + 0x1354BCC))(0);
	}
	template <typename R = void> R add_PropertyChanged(SROptionsPropertyChanged* value) {
		return ((R (*)(SROptions*, SROptionsPropertyChanged*))(Il2CppBase() + 0x1354CD0))(this, value);
	}
	template <typename R = void> R remove_PropertyChanged(SROptionsPropertyChanged* value) {
		return ((R (*)(SROptions*, SROptionsPropertyChanged*))(Il2CppBase() + 0x1354D70))(this, value);
	}
	template <typename R = void> R OnPropertyChanged(Il2CppString* propertyName) {
		return ((R (*)(SROptions*, Il2CppString*))(Il2CppBase() + 0x1354E10))(this, propertyName);
	}
	template <typename R = void> R add_InterfacePropertyChangedEventHandler(uintptr_t value) {
		return ((R (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x1355248))(this, value);
	}
	template <typename R = void> R remove_InterfacePropertyChangedEventHandler(uintptr_t value) {
		return ((R (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x13552E8))(this, value);
	}
	template <typename R = void> R System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged(uintptr_t value) {
		return ((R (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x1355388))(this, value);
	}
	template <typename R = void> R System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged(uintptr_t value) {
		return ((R (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x135538C))(this, value);
	}

};

