#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickupData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<PickupResourceData>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PickupData*, uintptr_t))(Il2CppBase() + 0x16F6808))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PickupData*, uintptr_t))(Il2CppBase() + 0x16F6930))(this, reader);
	}

};

