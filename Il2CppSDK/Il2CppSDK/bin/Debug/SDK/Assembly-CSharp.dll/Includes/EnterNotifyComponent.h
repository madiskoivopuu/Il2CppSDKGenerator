#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnterNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnterNotifyComponent"));
	}

	template <typename T = uintptr_t> T& OwnerNotify() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ForeignNotify() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(EnterNotifyComponent*, uintptr_t))(Il2CppBase() + 0x13721E8))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(EnterNotifyComponent*, uintptr_t))(Il2CppBase() + 0x13722C0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(EnterNotifyComponent*, uintptr_t))(Il2CppBase() + 0x137240C))(this, writer);
	}

};

}
