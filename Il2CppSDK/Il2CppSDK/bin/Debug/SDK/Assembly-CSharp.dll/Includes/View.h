#pragma once
#include <Il2Cpp/Il2Cpp.h>

class View
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "View"));
	}

	template <typename R = uintptr_t> R& Root() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Lock() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Notificator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& NormalColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& LockedColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}


};

