#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewComponent"));
	}

	template <typename T = IEntityView*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IHideHelper*> T& _hideHelper() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = IHideHelper*> T get_HideHelper() {
		return ((T (*)(ViewComponent*))(Il2CppBase() + 0x15C8014))(this);
	}
	template <typename T = void> T SetHideHelper(IHideHelper* hideHelper) {
		return ((T (*)(ViewComponent*, IHideHelper*))(Il2CppBase() + 0x15C801C))(this, hideHelper);
	}
	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(ViewComponent*))(Il2CppBase() + 0x15C8024))(this);
	}
	template <typename T = uintptr_t> T get_Transform() {
		return ((T (*)(ViewComponent*))(Il2CppBase() + 0x15C80D4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ViewComponent*))(Il2CppBase() + 0x15C8184))(this);
	}

};

