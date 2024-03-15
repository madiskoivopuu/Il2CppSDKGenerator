#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetRequestData"));
	}

	template <typename R = Il2CppString*> R& pointName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& locationId() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocationResetRequestData*, uintptr_t))(Il2CppBase() + 0x171E494))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocationResetRequestData*, uintptr_t))(Il2CppBase() + 0x171E4E8))(this, reader);
	}

};

