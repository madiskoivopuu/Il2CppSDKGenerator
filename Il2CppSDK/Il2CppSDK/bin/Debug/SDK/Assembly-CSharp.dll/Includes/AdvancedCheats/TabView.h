#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class TabView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "TabView"));
	}

	template <typename T = uintptr_t> T& clickButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& selectedColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& selected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(TabView*))(Il2CppBase() + 0x16A317C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(TabView*, Il2CppString*))(Il2CppBase() + 0x16A3184))(this, value);
	}
	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(TabView*))(Il2CppBase() + 0x16A318C))(this);
	}
	template <typename T = void> T Bind(Il2CppString* tabName, void* onSelect) {
		return ((T (*)(TabView*, Il2CppString*, void*))(Il2CppBase() + 0x16A3258))(this, tabName, onSelect);
	}
	template <typename T = void> T OnTabSelected() {
		return ((T (*)(TabView*))(Il2CppBase() + 0x16A3398))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(TabView*))(Il2CppBase() + 0x16A3578))(this);
	}
	template <typename T = void> T UnSelect() {
		return ((T (*)(TabView*))(Il2CppBase() + 0x16A346C))(this);
	}

};

}
