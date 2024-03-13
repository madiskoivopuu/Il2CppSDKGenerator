#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerInfoView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _minutes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _seconds() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T SetName(Il2CppString* name) {
		return ((T (*)(PlayerInfoView*, Il2CppString*))(Il2CppBase() + 0x1568720))(this, name);
	}
	template <typename T = void> T SetTime(int32_t minutes, int32_t seconds) {
		return ((T (*)(PlayerInfoView*, int32_t, int32_t))(Il2CppBase() + 0x15687CC))(this, minutes, seconds);
	}

};

