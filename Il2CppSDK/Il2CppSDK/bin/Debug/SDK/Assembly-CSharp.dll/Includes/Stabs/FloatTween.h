#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

class FloatTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "FloatTween"));
	}

	template <typename R = FloatTweenCallback*> R& m_Target() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& m_StartValue() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& m_TargetValue() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = float> R& m_Duration() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& m_IgnoreTimeScale() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = float> R get_startValue() {
		return ((R (*)(FloatTween*))(Il2CppBase() + 0x15F72BC))(this);
	}
	template <typename R = void> R set_startValue(float value) {
		return ((R (*)(FloatTween*, float))(Il2CppBase() + 0x15F72C4))(this, value);
	}
	template <typename R = float> R get_targetValue() {
		return ((R (*)(FloatTween*))(Il2CppBase() + 0x15F72CC))(this);
	}
	template <typename R = void> R set_targetValue(float value) {
		return ((R (*)(FloatTween*, float))(Il2CppBase() + 0x15F72D4))(this, value);
	}
	template <typename R = float> R get_duration() {
		return ((R (*)(FloatTween*))(Il2CppBase() + 0x15F72DC))(this);
	}
	template <typename R = void> R set_duration(float value) {
		return ((R (*)(FloatTween*, float))(Il2CppBase() + 0x15F72E4))(this, value);
	}
	template <typename R = bool> R get_ignoreTimeScale() {
		return ((R (*)(FloatTween*))(Il2CppBase() + 0x15F72EC))(this);
	}
	template <typename R = void> R set_ignoreTimeScale(bool value) {
		return ((R (*)(FloatTween*, bool))(Il2CppBase() + 0x15F72F4))(this, value);
	}
	template <typename R = void> R TweenValue(float floatPercentage) {
		return ((R (*)(FloatTween*, float))(Il2CppBase() + 0x15F7300))(this, floatPercentage);
	}
	template <typename R = void> R AddOnChangedCallback(UnityAction1float>* callback) {
		return ((R (*)(FloatTween*, UnityAction1float>*))(Il2CppBase() + 0x15F7398))(this, callback);
	}
	template <typename R = bool> R GetIgnoreTimescale() {
		return ((R (*)(FloatTween*))(Il2CppBase() + 0x15F743C))(this);
	}
	template <typename R = float> R GetDuration() {
		return ((R (*)(FloatTween*))(Il2CppBase() + 0x15F7444))(this);
	}
	template <typename R = bool> R ValidTarget() {
		return ((R (*)(FloatTween*))(Il2CppBase() + 0x15F7388))(this);
	}

};

}
