#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetFloatAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetFloatAnimator"));
	}

	template <typename R = Il2CppString*> R& FloatName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MinValue() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& MaxValue() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = Il2CppString*> R& TriggerName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& MinDelayValue() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& MaxDelayValue() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R Start() {
		return ((R (*)(SetFloatAnimator*))(Il2CppBase() + 0x1624204))(this);
	}
	template <typename R = void> R LaunchAnimator() {
		return ((R (*)(SetFloatAnimator*))(Il2CppBase() + 0x1624264))(this);
	}

};

