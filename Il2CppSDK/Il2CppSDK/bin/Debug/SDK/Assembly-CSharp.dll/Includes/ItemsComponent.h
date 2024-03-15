#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemsComponent"));
	}

	template <typename R = Il2CppString*> R& Inbox() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Instant() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Withdrawal() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ItemsComponent*, Il2CppObject*))(Il2CppBase() + 0x14E14F4))(this, target);
	}

};

