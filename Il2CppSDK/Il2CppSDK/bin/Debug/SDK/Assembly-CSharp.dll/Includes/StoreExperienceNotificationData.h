#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreExperienceNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreExperienceNotificationData"));
	}

	template <typename R = int64_t> R& ProductDataId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uint32_t> R& ExpValue() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StoreExperienceNotificationData*, uintptr_t))(Il2CppBase() + 0x141FFCC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StoreExperienceNotificationData*, uintptr_t))(Il2CppBase() + 0x1420020))(this, reader);
	}

};

