#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetResponseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetResponseData"));
	}

	template <typename T = Il2CppString*> T& pointName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& locationId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& reseted() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& error() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocationResetResponseData*, uintptr_t))(Il2CppBase() + 0x171E5F4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocationResetResponseData*, uintptr_t))(Il2CppBase() + 0x171E668))(this, reader);
	}

};

