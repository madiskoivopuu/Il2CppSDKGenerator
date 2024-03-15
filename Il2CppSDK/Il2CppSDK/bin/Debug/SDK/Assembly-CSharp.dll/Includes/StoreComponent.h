#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& PriceId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(StoreComponent*, Il2CppObject*))(Il2CppBase() + 0x141F658))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StoreComponent*, uintptr_t))(Il2CppBase() + 0x141F6FC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StoreComponent*, uintptr_t))(Il2CppBase() + 0x141F744))(this, reader);
	}

};

