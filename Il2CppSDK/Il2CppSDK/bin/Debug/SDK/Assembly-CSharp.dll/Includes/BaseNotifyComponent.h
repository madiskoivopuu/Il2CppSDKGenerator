#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseNotifyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseNotifyComponent"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BaseNotifyComponent*, uintptr_t))(Il2CppBase() + 0x166F774))(this, target);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseNotifyComponent*, uintptr_t))(Il2CppBase() + 0x166F844))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseNotifyComponent*, uintptr_t))(Il2CppBase() + 0x166F8B8))(this, reader);
	}

};

}
