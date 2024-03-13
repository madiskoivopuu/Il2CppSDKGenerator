#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlacingHint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlacingHint"));
	}

	template <typename T = uintptr_t> T& HintText() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T UpdateCantPlace(PlaceManagerResultCode* result) {
		return ((T (*)(PlacingHint*, PlaceManagerResultCode*))(Il2CppBase() + 0x16F832C))(this, result);
	}
	template <typename T = void> T UpdateMaxCountReached(int32_t count, int32_t maxCount) {
		return ((T (*)(PlacingHint*, int32_t, int32_t))(Il2CppBase() + 0x16F84C4))(this, count, maxCount);
	}
	template <typename T = void> T UpdateCount(int32_t count, int32_t maxCount) {
		return ((T (*)(PlacingHint*, int32_t, int32_t))(Il2CppBase() + 0x16F8784))(this, count, maxCount);
	}

};

