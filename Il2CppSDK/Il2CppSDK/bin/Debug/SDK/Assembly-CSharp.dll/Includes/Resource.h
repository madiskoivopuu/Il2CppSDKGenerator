#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Resource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Resource"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Durability() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Resource*, uintptr_t))(Il2CppBase() + 0x10C4450))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Resource*, uintptr_t))(Il2CppBase() + 0x10C46CC))(this, reader);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Resource*, uintptr_t))(Il2CppBase() + 0x10C4794))(this, other);
	}

};

}
