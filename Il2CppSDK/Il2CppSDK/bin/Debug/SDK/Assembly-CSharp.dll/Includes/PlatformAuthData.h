#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlatformAuthData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformAuthData"));
	}

	template <typename R = Il2CppString*> R& regionIp() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& deviceId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& googleId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& gamecenterID() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& referallID() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& firebaseToken() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

