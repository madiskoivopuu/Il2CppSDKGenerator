#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlacingHint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlacingHint"));
	}

	template <typename R = uintptr_t> R& HintText() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R UpdateCantPlace(PlaceManagerResultCode* result) {
		return ((R (*)(PlacingHint*, PlaceManagerResultCode*))(Il2CppBase() + 0x16F832C))(this, result);
	}
	template <typename R = void> R UpdateMaxCountReached(int32_t count, int32_t maxCount) {
		return ((R (*)(PlacingHint*, int32_t, int32_t))(Il2CppBase() + 0x16F84C4))(this, count, maxCount);
	}
	template <typename R = void> R UpdateCount(int32_t count, int32_t maxCount) {
		return ((R (*)(PlacingHint*, int32_t, int32_t))(Il2CppBase() + 0x16F8784))(this, count, maxCount);
	}

};

