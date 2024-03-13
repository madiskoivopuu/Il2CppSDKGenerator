#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocialPlatformsStatusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocialPlatformsStatusComponent"));
	}

	template <typename T = bool> T& IsGooglePlayConnected() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsGamecenterConnected() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SocialPlatformsStatusComponent*, Il2CppObject*))(Il2CppBase() + 0x14848E8))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SocialPlatformsStatusComponent*, uintptr_t))(Il2CppBase() + 0x1484984))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SocialPlatformsStatusComponent*, uintptr_t))(Il2CppBase() + 0x1484A20))(this, writer);
	}

};

