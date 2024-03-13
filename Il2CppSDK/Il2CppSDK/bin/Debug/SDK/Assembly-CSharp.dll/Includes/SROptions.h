#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SROptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SROptions"));
	}

	template <typename T = SROptions*> static T& _current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SROptionsPropertyChanged*> T& PropertyChanged() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& InterfacePropertyChangedEventHandler() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = SROptions*> static T get_Current() {
		return ((T (*)(void *))(Il2CppBase() + 0x1354B68))(0);
	}
	template <typename T = void> static T OnStartup() {
		return ((T (*)(void *))(Il2CppBase() + 0x1354BCC))(0);
	}
	template <typename T = void> T add_PropertyChanged(SROptionsPropertyChanged* value) {
		return ((T (*)(SROptions*, SROptionsPropertyChanged*))(Il2CppBase() + 0x1354CD0))(this, value);
	}
	template <typename T = void> T remove_PropertyChanged(SROptionsPropertyChanged* value) {
		return ((T (*)(SROptions*, SROptionsPropertyChanged*))(Il2CppBase() + 0x1354D70))(this, value);
	}
	template <typename T = void> T OnPropertyChanged(Il2CppString* propertyName) {
		return ((T (*)(SROptions*, Il2CppString*))(Il2CppBase() + 0x1354E10))(this, propertyName);
	}
	template <typename T = void> T add_InterfacePropertyChangedEventHandler(uintptr_t value) {
		return ((T (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x1355248))(this, value);
	}
	template <typename T = void> T remove_InterfacePropertyChangedEventHandler(uintptr_t value) {
		return ((T (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x13552E8))(this, value);
	}
	template <typename T = void> T System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged(uintptr_t value) {
		return ((T (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x1355388))(this, value);
	}
	template <typename T = void> T System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged(uintptr_t value) {
		return ((T (*)(SROptions*, uintptr_t))(Il2CppBase() + 0x135538C))(this, value);
	}

};

