#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetFloatAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetFloatAnimator"));
	}

	template <typename T = Il2CppString*> T& FloatName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MinValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MaxValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& TriggerName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MinDelayValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MaxDelayValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SetFloatAnimator*))(Il2CppBase() + 0x1624204))(this);
	}
	template <typename T = void> T LaunchAnimator() {
		return ((T (*)(SetFloatAnimator*))(Il2CppBase() + 0x1624264))(this);
	}

};

