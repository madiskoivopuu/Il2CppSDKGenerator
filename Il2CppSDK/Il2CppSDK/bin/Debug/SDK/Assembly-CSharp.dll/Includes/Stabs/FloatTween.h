#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

class FloatTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "FloatTween"));
	}

	template <typename T = FloatTweenCallback*> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_StartValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_TargetValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IgnoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = float> T get_startValue() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x15F72BC))(this);
	}
	template <typename T = void> T set_startValue(float value) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x15F72C4))(this, value);
	}
	template <typename T = float> T get_targetValue() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x15F72CC))(this);
	}
	template <typename T = void> T set_targetValue(float value) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x15F72D4))(this, value);
	}
	template <typename T = float> T get_duration() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x15F72DC))(this);
	}
	template <typename T = void> T set_duration(float value) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x15F72E4))(this, value);
	}
	template <typename T = bool> T get_ignoreTimeScale() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x15F72EC))(this);
	}
	template <typename T = void> T set_ignoreTimeScale(bool value) {
		return ((T (*)(FloatTween*, bool))(Il2CppBase() + 0x15F72F4))(this, value);
	}
	template <typename T = void> T TweenValue(float floatPercentage) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x15F7300))(this, floatPercentage);
	}
	template <typename T = void> T AddOnChangedCallback(UnityAction1float>* callback) {
		return ((T (*)(FloatTween*, UnityAction1float>*))(Il2CppBase() + 0x15F7398))(this, callback);
	}
	template <typename T = bool> T GetIgnoreTimescale() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x15F743C))(this);
	}
	template <typename T = float> T GetDuration() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x15F7444))(this);
	}
	template <typename T = bool> T ValidTarget() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x15F7388))(this);
	}

};

}
