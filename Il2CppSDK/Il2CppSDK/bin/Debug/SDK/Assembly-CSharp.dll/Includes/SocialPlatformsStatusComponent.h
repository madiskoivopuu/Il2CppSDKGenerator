#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocialPlatformsStatusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocialPlatformsStatusComponent"));
	}

	template <typename R = bool> R& IsGooglePlayConnected() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IsGamecenterConnected() {
		return *(R*)((uintptr_t)this + 0x11);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SocialPlatformsStatusComponent*, Il2CppObject*))(Il2CppBase() + 0x14848E8))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SocialPlatformsStatusComponent*, uintptr_t))(Il2CppBase() + 0x1484984))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SocialPlatformsStatusComponent*, uintptr_t))(Il2CppBase() + 0x1484A20))(this, writer);
	}

};

