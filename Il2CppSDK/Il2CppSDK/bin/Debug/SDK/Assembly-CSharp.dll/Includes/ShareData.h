#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShareData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShareData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& IsShared() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = bool> R& CantSwitch() {
		return *(R*)((uintptr_t)this + 0x5);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x162FAF4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ShareData*, uintptr_t))(Il2CppBase() + 0x162FB58))(this, reader);
	}

};

