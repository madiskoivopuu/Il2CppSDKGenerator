#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerInfoView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& _minutes() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& _seconds() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R SetName(Il2CppString* name) {
		return ((R (*)(PlayerInfoView*, Il2CppString*))(Il2CppBase() + 0x1568720))(this, name);
	}
	template <typename R = void> R SetTime(int32_t minutes, int32_t seconds) {
		return ((R (*)(PlayerInfoView*, int32_t, int32_t))(Il2CppBase() + 0x15687CC))(this, minutes, seconds);
	}

};

