#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class TabView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "TabView"));
	}

	template <typename R = uintptr_t> R& clickButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& image() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TextMonoBehaviour*> R& text() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& selectedColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = AdvancedCheats::TabView*> static R& selected() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(TabView*))(Il2CppBase() + 0x16A317C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(TabView*, Il2CppString*))(Il2CppBase() + 0x16A3184))(this, value);
	}
	template <typename R = bool> R get_IsSelected() {
		return ((R (*)(TabView*))(Il2CppBase() + 0x16A318C))(this);
	}
	template <typename R = void> R Bind(Il2CppString* tabName, Action1Il2CppString*>* onSelect) {
		return ((R (*)(TabView*, Il2CppString*, Action1Il2CppString*>*))(Il2CppBase() + 0x16A3258))(this, tabName, onSelect);
	}
	template <typename R = void> R OnTabSelected() {
		return ((R (*)(TabView*))(Il2CppBase() + 0x16A3398))(this);
	}
	template <typename R = void> R Select() {
		return ((R (*)(TabView*))(Il2CppBase() + 0x16A3578))(this);
	}
	template <typename R = void> R UnSelect() {
		return ((R (*)(TabView*))(Il2CppBase() + 0x16A346C))(this);
	}

};

}
