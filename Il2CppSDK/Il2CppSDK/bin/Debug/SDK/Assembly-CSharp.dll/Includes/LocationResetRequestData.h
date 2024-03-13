#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetRequestData"));
	}

	template <typename T = Il2CppString*> T& pointName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& locationId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocationResetRequestData*, uintptr_t))(Il2CppBase() + 0x171E494))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocationResetRequestData*, uintptr_t))(Il2CppBase() + 0x171E4E8))(this, reader);
	}

};

