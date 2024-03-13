#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemsComponent"));
	}

	template <typename T = Il2CppString*> T& Inbox() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Instant() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Withdrawal() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ItemsComponent*, Il2CppObject*))(Il2CppBase() + 0x14E14F4))(this, target);
	}

};

