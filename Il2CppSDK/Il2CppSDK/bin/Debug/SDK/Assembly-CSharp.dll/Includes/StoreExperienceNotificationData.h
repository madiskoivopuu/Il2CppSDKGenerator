#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreExperienceNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreExperienceNotificationData"));
	}

	template <typename T = int64_t> T& ProductDataId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& ExpValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StoreExperienceNotificationData*, uintptr_t))(Il2CppBase() + 0x141FFCC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StoreExperienceNotificationData*, uintptr_t))(Il2CppBase() + 0x1420020))(this, reader);
	}

};

