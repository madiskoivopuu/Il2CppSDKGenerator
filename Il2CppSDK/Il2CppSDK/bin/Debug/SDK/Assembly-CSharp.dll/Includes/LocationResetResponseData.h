#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationResetResponseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetResponseData"));
	}

	template <typename R = Il2CppString*> R& pointName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& locationId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& reseted() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = Il2CppString*> R& error() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocationResetResponseData*, uintptr_t))(Il2CppBase() + 0x171E5F4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocationResetResponseData*, uintptr_t))(Il2CppBase() + 0x171E668))(this, reader);
	}

};

