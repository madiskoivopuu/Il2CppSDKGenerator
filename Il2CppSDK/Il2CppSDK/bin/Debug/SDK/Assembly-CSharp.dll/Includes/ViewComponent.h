#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewComponent"));
	}

	template <typename R = IEntityView*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IHideHelper*> R& _hideHelper() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = IHideHelper*> R get_HideHelper() {
		return ((R (*)(ViewComponent*))(Il2CppBase() + 0x15C8014))(this);
	}
	template <typename R = void> R SetHideHelper(IHideHelper* hideHelper) {
		return ((R (*)(ViewComponent*, IHideHelper*))(Il2CppBase() + 0x15C801C))(this, hideHelper);
	}
	template <typename R = uintptr_t> R get_GameObject() {
		return ((R (*)(ViewComponent*))(Il2CppBase() + 0x15C8024))(this);
	}
	template <typename R = uintptr_t> R get_Transform() {
		return ((R (*)(ViewComponent*))(Il2CppBase() + 0x15C80D4))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(ViewComponent*))(Il2CppBase() + 0x15C8184))(this);
	}

};

