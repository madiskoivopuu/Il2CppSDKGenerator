#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingHookData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingHookData"));
	}

	template <typename T = int64_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& UseNet() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FishingHookData*, uintptr_t))(Il2CppBase() + 0x169A200))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FishingHookData*, uintptr_t))(Il2CppBase() + 0x169A254))(this, reader);
	}

};

