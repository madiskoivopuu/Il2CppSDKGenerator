#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PriceId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(StoreComponent*, uintptr_t))(Il2CppBase() + 0x141F658))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StoreComponent*, uintptr_t))(Il2CppBase() + 0x141F6FC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StoreComponent*, uintptr_t))(Il2CppBase() + 0x141F744))(this, reader);
	}

};

}
