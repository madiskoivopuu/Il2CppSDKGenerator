#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingHookData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingHookData"));
	}

	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& UseNet() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FishingHookData*, uintptr_t))(Il2CppBase() + 0x169A200))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FishingHookData*, uintptr_t))(Il2CppBase() + 0x169A254))(this, reader);
	}

};

