#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyActiveTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyActiveTimeComponent"));
	}

	template <typename T = int32_t> T& StartOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& OpenDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CloseDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& NotifyBeforeOpen() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& NotifyBeforeClose() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& BeforeOpenText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& OnOpenText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& BeforeCloseText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& TempBuff() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(LobbyActiveTimeComponent*, uintptr_t))(Il2CppBase() + 0x1435FE4))(this, targetObject);
	}
	template <typename T = void*> T GetState(uintptr_t world) {
		return ((T (*)(LobbyActiveTimeComponent*, uintptr_t))(Il2CppBase() + 0x14360D4))(this, world);
	}

};

}
