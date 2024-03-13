#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShareData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShareData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsShared() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& CantSwitch() {
		return *(T*)((uintptr_t)this + 0x5);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x162FAF4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x162FB58))(this, reader);
	}

};

